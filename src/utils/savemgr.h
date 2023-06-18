#pragma once
#include "string"
#include "datastore.h"
#include <../injector/injector.hpp>
#include <type_traits>

extern DataStore gConfig;
/*
*	Save Data Manager Class
*	Handles saving & loading menu save data
*/
class SaveMgr
{
private:

public:
    // Defines the possible states of a cheat
    enum class eCheatState 
    {
        Enabled,
        Disabled,
        Unknown
    };

    enum class eAddrType
    {
        Bool,
        Short,
        Int,
        Float, 
        String,
        Unknown
    };

    SaveMgr() = delete;
    SaveMgr(SaveMgr&) = delete;

    // Initializes and loads save data from disk
    static void InitAndLoad()
    {
        for (auto [k, v] : gConfig.Items())
        {
            if (v.is_table())
            {
                int addr = v.as_table()->at_path("Address").value_or<int>(0);
                eAddrType type = static_cast<eAddrType>(v.as_table()->at_path("Type").value_or<int>(0));
                eCheatState state = static_cast<eCheatState>(v.as_table()->at_path("State").value_or<int>(0));

                if (state != eCheatState::Enabled)
                {
                    continue;
                }

                switch(type)
                {
                    case eAddrType::Bool:
                    {
                        injector::WriteMemory<bool>(addr, state == eCheatState::Enabled, true);
                    }
                    default:
                    {

                    }
                };
            }
        }
    }

    template<typename T>
    static void SaveData(std::string&& key, int addr, eCheatState state, T&& enabled, T&& disabled)
    {
        eAddrType type = eAddrType::Unknown;

        if (std::is_same<bool, T>::value) type = eAddrType::Bool;
        if (std::is_same<short, T>::value) type = eAddrType::Short;
        if (std::is_same<int, T>::value) type = eAddrType::Int;
        if (std::is_same<float, T>::value) type = eAddrType::Float;
        if (std::is_same<std::string, T>::value) type = eAddrType::String;

        gConfig.Set(std::string(key + ".Address").c_str(), addr);
        gConfig.Set(std::string(key + ".Type").c_str(), static_cast<int>(type));
        gConfig.Set(std::string(key + ".Enabled").c_str(), enabled);
        gConfig.Set(std::string(key + ".Disabled").c_str(), disabled);
        gConfig.Set(std::string(key + ".State").c_str(), state == eCheatState::Enabled);
    };
};