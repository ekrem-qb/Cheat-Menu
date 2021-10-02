/*
	Author: Grinch_
	Copyright Grinch_ 2019-2022. All rights reserved.
	Required:
		DirectX 9 SDK
		Plugin SDK
		Build Tools 2019 (v142)
		Windows SDK
*/

#pragma once
#include "animation.h"
#include "hook.h"
#include "menu.h"
#include "teleport.h"
#include "player.h"
#include "ped.h"
#include "vehicle.h"
#include "weapon.h"
#include "game.h"
#include "visual.h"

class CheatMenu : Hook, Animation, Game, Menu, Ped, Player, Teleport, Vehicle, Visual, Weapon
{
private:
	static inline bool m_bShowMenu = false;
	static inline ImVec2 m_fMenuSize = ImVec2(screen::GetScreenWidth() / 4, screen::GetScreenHeight() / 1.2);
	
	static inline CallbackTable header
	{
		{"Teleport", &Teleport::Draw}, {"Player", &Player::Draw}, {"Ped", &Ped::Draw},
#ifdef GTASA	
		{"Animation", &Animation::Draw},
#elif GTAVC
		{"Dummy", nullptr},
#endif
		{"Vehicle", &Vehicle::Draw}, {"Weapon", &Weapon::Draw},
		{"Game", &Game::Draw}, {"Visual", &Visual::Draw}, {"Menu", &Menu::Draw}
	};

	static void ApplyStyle();
	static void DrawWindow();

public:
	CheatMenu();
};