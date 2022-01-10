#include "pch.h"
#include "neon.h"

// Neon sprite
const unsigned char neon_mask[1689] =
{
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00,
    0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
    0x00, 0x80, 0x08, 0x06, 0x00, 0x00, 0x00, 0xbb, 0x81, 0x6f, 0x6a,
    0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b,
    0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00,
    0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x25,
    0x00, 0x00, 0x80, 0x83, 0x00, 0x00, 0xf9, 0xff, 0x00, 0x00, 0x80,
    0xe9, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00,
    0x3a, 0x98, 0x00, 0x00, 0x17, 0x6f, 0x92, 0x5f, 0xc5, 0x46, 0x00,
    0x00, 0x06, 0x1f, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xec, 0x5d,
    0xdb, 0x8e, 0xe4, 0x2a, 0x0c, 0x64, 0xa3, 0xf3, 0x10, 0x45, 0x49,
    0x2b, 0xe2, 0xff, 0xbf, 0x11, 0x45, 0x09, 0x42, 0x79, 0x9b, 0xf3,
    0x34, 0xda, 0xde, 0x08, 0x70, 0xd9, 0x18, 0x42, 0x66, 0x1a, 0x69,
    0xb4, 0xdb, 0x37, 0x3a, 0x55, 0x2e, 0x97, 0x0d, 0xdd, 0x6a, 0xfe,
    0x7c, 0x7d, 0x7d, 0x99, 0x86, 0x63, 0x01, 0x9f, 0x77, 0xb4, 0xba,
    0xa0, 0x3f, 0x95, 0x09, 0x58, 0x14, 0xe6, 0x38, 0x9e, 0x46, 0x00,
    0x02, 0xda, 0x26, 0xee, 0x77, 0xad, 0xc9, 0xd0, 0x24, 0x60, 0x11,
    0x82, 0x36, 0x02, 0x32, 0x8e, 0xde, 0x08, 0x58, 0x98, 0xa0, 0x2d,
    0x03, 0xb0, 0xab, 0x49, 0x82, 0x06, 0x01, 0x4b, 0x21, 0x70, 0x14,
    0x74, 0x15, 0x22, 0x4a, 0x09, 0x40, 0xc1, 0x53, 0xf7, 0xa1, 0xd1,
    0x77, 0xbd, 0x10, 0x80, 0x4a, 0xde, 0x0a, 0x14, 0xe0, 0x84, 0x6a,
    0x38, 0x5a, 0x11, 0xa0, 0x01, 0x7e, 0x8d, 0xbc, 0x7e, 0x63, 0x12,
    0xa1, 0x42, 0x82, 0x16, 0x01, 0x96, 0x41, 0xc4, 0x9a, 0x99, 0xbb,
    0x39, 0x09, 0x5c, 0x02, 0x16, 0x66, 0xe4, 0x53, 0x51, 0x7f, 0x45,
    0xe6, 0xd9, 0x41, 0x22, 0x9c, 0xa6, 0x31, 0x72, 0x08, 0xa8, 0x01,
    0x7e, 0x36, 0xc6, 0x78, 0x90, 0x08, 0x0e, 0x09, 0x4d, 0x08, 0x48,
    0x81, 0x4f, 0x49, 0xfe, 0x0a, 0x3c, 0x36, 0x7c, 0x6b, 0x12, 0x50,
    0x02, 0x16, 0x41, 0xe4, 0x63, 0x51, 0x9f, 0x13, 0x24, 0x78, 0x06,
    0x11, 0xaa, 0x24, 0x0c, 0xca, 0x2d, 0xae, 0x04, 0xfc, 0xf7, 0xed,
    0xd8, 0xe3, 0xaf, 0x88, 0x92, 0x2c, 0x68, 0xbe, 0xd0, 0x18, 0x04,
    0xaf, 0xb1, 0x05, 0xe0, 0xdf, 0x81, 0x4e, 0x97, 0xbf, 0xeb, 0xe3,
    0x73, 0xc6, 0x30, 0x45, 0x60, 0xb5, 0x08, 0x40, 0xc0, 0xbf, 0x12,
    0xe0, 0xcd, 0x05, 0xf0, 0xf4, 0x36, 0xc7, 0x14, 0x51, 0xc0, 0x95,
    0x84, 0x95, 0x59, 0x82, 0x97, 0x52, 0x02, 0x16, 0x01, 0xf3, 0xaf,
    0x4b, 0x34, 0xaf, 0x51, 0xbf, 0x02, 0x9e, 0x12, 0xff, 0xa7, 0x48,
    0xb0, 0x77, 0x2a, 0x80, 0x92, 0x7e, 0xcc, 0xe5, 0x63, 0x20, 0x4d,
    0x42, 0x01, 0x14, 0x09, 0xb9, 0xca, 0xc3, 0x52, 0xc1, 0x50, 0x18,
    0x7d, 0x4b, 0x94, 0xba, 0x58, 0xbe, 0x5f, 0x41, 0x4f, 0x89, 0xdb,
    0x29, 0x12, 0x90, 0x54, 0x68, 0xe2, 0x01, 0xa9, 0x31, 0x67, 0x22,
    0x9b, 0x03, 0x9e, 0x52, 0xcb, 0x75, 0x4e, 0x24, 0x15, 0xac, 0x36,
    0x01, 0x36, 0x23, 0xbb, 0xf7, 0xe8, 0xc7, 0x0c, 0xcf, 0x10, 0x60,
    0x29, 0x52, 0x26, 0xa2, 0x3c, 0x16, 0xed, 0x56, 0x0d, 0xc2, 0xda,
    0x9f, 0x32, 0x3e, 0x29, 0x78, 0x8e, 0xb2, 0xe6, 0x4c, 0x6f, 0xc0,
    0xee, 0x0b, 0xb8, 0x29, 0x60, 0x41, 0xe3, 0x2b, 0x01, 0x3f, 0x31,
    0x53, 0xa1, 0x48, 0x05, 0x03, 0x53, 0xfe, 0x68, 0xf4, 0x0d, 0xe0,
    0x03, 0xc6, 0x18, 0x33, 0x0a, 0x48, 0xa0, 0x54, 0x50, 0x6c, 0x82,
    0x4b, 0x85, 0xe8, 0xe7, 0xc0, 0x8f, 0x09, 0x22, 0x26, 0x66, 0xea,
    0x89, 0xda, 0xe3, 0xd2, 0x2a, 0x50, 0x12, 0x7d, 0x54, 0x0d, 0x57,
    0x52, 0x67, 0xe2, 0xfd, 0x6e, 0x2f, 0x83, 0x14, 0xe8, 0x31, 0x03,
    0x76, 0x14, 0x92, 0xb7, 0x12, 0x4b, 0x72, 0x31, 0x01, 0x16, 0x94,
    0xff, 0x4c, 0xd4, 0x73, 0x24, 0xca, 0x1c, 0x52, 0xa5, 0x66, 0xb8,
    0x68, 0x2a, 0xe0, 0x55, 0x49, 0x3d, 0x94, 0x0a, 0x28, 0x33, 0x64,
    0x99, 0xf8, 0x50, 0x58, 0xff, 0x73, 0xdd, 0x9b, 0x66, 0xf4, 0x29,
    0xf0, 0xc8, 0xce, 0x14, 0x3b, 0x05, 0x90, 0x09, 0x38, 0x46, 0x74,
    0x2a, 0x7a, 0xca, 0xa4, 0xa5, 0x46, 0x4e, 0x1f, 0x60, 0x13, 0x52,
    0x9b, 0x19, 0xe6, 0x27, 0x4d, 0x83, 0x6a, 0x63, 0xa8, 0x94, 0xff,
    0x1a, 0xf2, 0x47, 0x5f, 0xc3, 0xf5, 0x81, 0x25, 0x45, 0x00, 0x37,
    0xff, 0x6b, 0x44, 0x9e, 0xe3, 0x31, 0x2a, 0x3e, 0xc0, 0x55, 0xc0,
    0x5a, 0xe0, 0x01, 0xb5, 0x87, 0xa8, 0x1c, 0x0e, 0xcc, 0xfa, 0x2f,
    0x6d, 0x7e, 0x6a, 0x37, 0x5b, 0x73, 0x4b, 0x0f, 0x78, 0x11, 0xf2,
    0xd7, 0x24, 0x62, 0x14, 0x80, 0x5f, 0x6b, 0x11, 0xb0, 0x0a, 0xa2,
    0x3f, 0x56, 0x8c, 0x3a, 0x55, 0x0e, 0x21, 0x15, 0x0f, 0x40, 0xfd,
    0xb7, 0x8c, 0x1e, 0x60, 0x32, 0x0f, 0x1b, 0x43, 0xa6, 0x02, 0x58,
    0x81, 0xfc, 0x6b, 0x44, 0x7f, 0x04, 0xab, 0xc1, 0x2c, 0x49, 0x83,
    0x5a, 0xab, 0xc1, 0xb1, 0x93, 0xf9, 0x48, 0x35, 0x7f, 0x13, 0x70,
    0x30, 0xf3, 0x5f, 0xb2, 0x01, 0xd2, 0xaa, 0x1a, 0xb0, 0x3e, 0x4a,
    0x1b, 0x88, 0x26, 0xc8, 0x66, 0xea, 0xac, 0xd4, 0xf8, 0x90, 0xcf,
    0x07, 0xa8, 0x79, 0xd5, 0x48, 0xff, 0x8f, 0xb9, 0x10, 0x2a, 0xdd,
    0xf5, 0xa9, 0x65, 0x98, 0xdf, 0x73, 0xf9, 0x8b, 0x6a, 0x37, 0x29,
    0x01, 0x5c, 0xf9, 0x6b, 0x01, 0xbd, 0x3e, 0x37, 0x44, 0x54, 0x70,
    0xbe, 0x3d, 0x37, 0x64, 0x7a, 0x95, 0x5d, 0x62, 0x82, 0xb6, 0x30,
    0x7a, 0x31, 0xf9, 0x87, 0x4a, 0xb9, 0x1f, 0x12, 0xd7, 0x32, 0x97,
    0x6c, 0x88, 0xe4, 0xf2, 0x7f, 0x06, 0xca, 0x91, 0xb6, 0xd4, 0xa7,
    0x0c, 0xc9, 0x31, 0x1f, 0x61, 0x77, 0x85, 0xdc, 0x32, 0x38, 0xdf,
    0x98, 0xe7, 0xa5, 0xf3, 0x5b, 0x0d, 0x02, 0x24, 0x0d, 0x4b, 0x0d,
    0x90, 0xd4, 0x7b, 0xcd, 0xc0, 0xea, 0x70, 0x41, 0x5a, 0xe1, 0x95,
    0xb8, 0xa0, 0x1e, 0x5b, 0xdf, 0x99, 0xc0, 0x64, 0xb9, 0x0a, 0x78,
    0x01, 0x51, 0x19, 0xcd, 0x43, 0xc7, 0x60, 0xb0, 0x9d, 0xa0, 0xbb,
    0x73, 0x1f, 0x35, 0xc3, 0x89, 0xb9, 0x8a, 0x25, 0x37, 0x44, 0x7a,
    0x5a, 0xed, 0x55, 0xa9, 0x36, 0x43, 0x06, 0xf4, 0x4a, 0xa8, 0x60,
    0xea, 0x90, 0x24, 0xae, 0x11, 0x8a, 0xaa, 0x40, 0x4f, 0xf9, 0x3f,
    0x82, 0xcd, 0x50, 0x76, 0x35, 0x78, 0x30, 0x0d, 0xb0, 0xf7, 0x31,
    0x49, 0x53, 0x40, 0xcb, 0x00, 0xbb, 0x01, 0xa7, 0xd9, 0x08, 0x3d,
    0x25, 0xff, 0xd9, 0xef, 0xcf, 0x59, 0x0c, 0x21, 0x1d, 0x59, 0xaf,
    0x2a, 0x58, 0x35, 0x4c, 0x30, 0x74, 0x92, 0x06, 0xaa, 0xd7, 0x31,
    0x34, 0xca, 0xbf, 0x3b, 0x15, 0xf0, 0xd2, 0x2e, 0x83, 0x3f, 0x6a,
    0xfc, 0x74, 0x02, 0xe6, 0xdf, 0x4e, 0xc0, 0xaf, 0x57, 0x80, 0xff,
    0x28, 0x40, 0x91, 0x80, 0xa7, 0x96, 0xc1, 0xfd, 0xb7, 0x97, 0x41,
    0x96, 0x02, 0x1c, 0x93, 0xf9, 0xf3, 0x01, 0x0a, 0x30, 0x26, 0xf3,
    0x01, 0x09, 0xaa, 0x00, 0x0f, 0x5e, 0x44, 0x78, 0x58, 0x7a, 0x40,
    0x04, 0x78, 0xd3, 0xcf, 0x28, 0x21, 0xd8, 0xa5, 0x08, 0x58, 0xa4,
    0x06, 0xd2, 0xe9, 0x08, 0xda, 0x0a, 0xa0, 0xde, 0xe0, 0xbc, 0x11,
    0xec, 0x99, 0xb8, 0x26, 0x8f, 0xaa, 0x60, 0xc8, 0x3c, 0xb8, 0x3d,
    0xd4, 0x07, 0xde, 0xaf, 0x77, 0x97, 0x2a, 0xc0, 0x75, 0x08, 0x2e,
    0xd4, 0xf0, 0x07, 0x6a, 0x4f, 0x50, 0x6a, 0x84, 0xa1, 0x01, 0xf8,
    0x98, 0xfc, 0x03, 0xa7, 0x04, 0xa2, 0x1e, 0xb0, 0x77, 0xee, 0x03,
    0xea, 0xad, 0xb0, 0x23, 0xd8, 0x0b, 0x1d, 0xe6, 0x3b, 0xa5, 0xd6,
    0xe4, 0x0f, 0x2d, 0x68, 0x2e, 0x86, 0xce, 0x4a, 0x69, 0x10, 0x04,
    0xef, 0x85, 0x18, 0xe0, 0x21, 0x21, 0xe0, 0x6e, 0x2f, 0x28, 0x99,
    0xdf, 0x71, 0x3d, 0xc0, 0x5d, 0x7c, 0x20, 0x55, 0x06, 0x43, 0x45,
    0x12, 0x50, 0xf3, 0xfb, 0xbe, 0xed, 0x39, 0x06, 0xc8, 0x5d, 0x0c,
    0x21, 0xa0, 0xce, 0x86, 0xab, 0xc8, 0x09, 0x6c, 0x82, 0xb2, 0x98,
    0x90, 0x6f, 0x89, 0x6d, 0xe6, 0xdf, 0x7d, 0x75, 0x6f, 0xfe, 0xee,
    0xb5, 0x05, 0x00, 0x60, 0x60, 0x10, 0x12, 0x18, 0x3e, 0x13, 0x34,
    0x5a, 0x78, 0x6e, 0x23, 0xe4, 0x15, 0x65, 0x1e, 0xde, 0xfe, 0x34,
    0xbc, 0x80, 0x2d, 0xff, 0x77, 0x02, 0x0e, 0xd0, 0x07, 0xa4, 0x69,
    0x10, 0x03, 0x4e, 0xdd, 0x87, 0x44, 0xbf, 0x98, 0x3c, 0xea, 0xab,
    0xb2, 0xc8, 0xba, 0x40, 0xed, 0x62, 0x14, 0x8c, 0x32, 0x55, 0xfe,
    0x9c, 0xe6, 0x6a, 0x50, 0xd2, 0x13, 0xdc, 0x35, 0x1f, 0xf9, 0xeb,
    0x73, 0xb9, 0x14, 0x70, 0x09, 0x73, 0xf1, 0x60, 0xee, 0x9f, 0x95,
    0xc0, 0x87, 0x44, 0xe4, 0x3d, 0x37, 0xff, 0x91, 0x56, 0x98, 0x6b,
    0x88, 0x3d, 0xb6, 0xc6, 0x6a, 0x1b, 0x22, 0x9b, 0x52, 0x5f, 0xa0,
    0xd9, 0xf9, 0x85, 0x4c, 0xf9, 0x73, 0x89, 0x7f, 0x8b, 0x3d, 0x80,
    0x4a, 0x83, 0xd0, 0x20, 0xf7, 0x43, 0x46, 0x89, 0x9b, 0x86, 0x02,
    0x20, 0xf6, 0x6e, 0x96, 0x7f, 0x28, 0x58, 0xa3, 0x88, 0x15, 0xb0,
    0x15, 0x2e, 0x8e, 0x6a, 0x0e, 0xce, 0x06, 0xee, 0x11, 0x23, 0x80,
    0xfb, 0x8b, 0xac, 0xad, 0xab, 0x41, 0x60, 0x44, 0x1e, 0x56, 0xee,
    0x50, 0x89, 0x6d, 0x8d, 0x1d, 0xa3, 0x53, 0x10, 0x88, 0x0d, 0xe8,
    0x07, 0x0e, 0x2e, 0x01, 0x57, 0x36, 0xb7, 0x06, 0x4a, 0x68, 0xb6,
    0xc5, 0x86, 0xee, 0x07, 0x68, 0x6c, 0x90, 0x8c, 0x0a, 0xf2, 0x47,
    0xca, 0x5f, 0x11, 0x01, 0x87, 0x62, 0x8e, 0xd6, 0xd8, 0x38, 0x55,
    0xcd, 0xff, 0xd2, 0xb5, 0x40, 0xad, 0x8f, 0xcd, 0x4e, 0x46, 0xf4,
    0xb9, 0xf9, 0xcf, 0x26, 0xc0, 0x01, 0x3e, 0xf0, 0xde, 0x87, 0x53,
    0x52, 0x3d, 0x2b, 0x44, 0x5f, 0x54, 0xfe, 0x6a, 0xaf, 0x06, 0x29,
    0x33, 0x3c, 0x85, 0xd1, 0xa7, 0xfa, 0x13, 0x96, 0xfc, 0x35, 0x08,
    0xd8, 0x81, 0x9c, 0x0c, 0x42, 0xe9, 0xa7, 0xfc, 0xc5, 0x6b, 0x36,
    0x61, 0x03, 0x22, 0x13, 0x30, 0x0d, 0xb8, 0x1b, 0x24, 0x27, 0xa1,
    0x88, 0x20, 0xf4, 0x21, 0x87, 0xe6, 0x3f, 0xb7, 0x0f, 0xa8, 0xa1,
    0x02, 0x64, 0xb1, 0x43, 0x75, 0x80, 0x1b, 0x57, 0xf6, 0x25, 0x29,
    0x50, 0xa2, 0x82, 0x20, 0xf0, 0x8f, 0xeb, 0x3c, 0x52, 0xf3, 0x4b,
    0x2a, 0x7b, 0xe0, 0x3c, 0x99, 0xa9, 0x82, 0x12, 0x12, 0x72, 0x4d,
    0x97, 0x07, 0xcd, 0x4f, 0xb5, 0x0f, 0x70, 0x80, 0x0a, 0xf6, 0xc8,
    0x45, 0x72, 0x48, 0x08, 0x0c, 0xe9, 0xab, 0x44, 0xbf, 0x56, 0x19,
    0x44, 0xbe, 0x49, 0x12, 0x08, 0x52, 0x10, 0xe9, 0xe7, 0x72, 0x5f,
    0xa5, 0x0c, 0x1e, 0xc0, 0xa4, 0x31, 0x15, 0xa4, 0x1a, 0x24, 0xe4,
    0xf3, 0x80, 0x90, 0x01, 0x4f, 0x75, 0x7d, 0x4d, 0x4c, 0x30, 0x97,
    0x12, 0x1b, 0x51, 0x0d, 0x42, 0x02, 0x74, 0xce, 0xfc, 0x3c, 0x21,
    0x7d, 0x24, 0xf7, 0x8f, 0x12, 0x02, 0x0e, 0x01, 0xcb, 0xfb, 0x45,
    0x01, 0xa9, 0x56, 0x39, 0x24, 0xa2, 0x4e, 0x81, 0x2f, 0x2a, 0x7b,
    0x9a, 0x1e, 0xe0, 0x88, 0x54, 0xd8, 0x13, 0x40, 0x02, 0x60, 0x8e,
    0x14, 0x78, 0xb4, 0xf1, 0x39, 0x6a, 0x10, 0xe0, 0x18, 0xa9, 0x10,
    0x23, 0x21, 0xe6, 0x0b, 0x21, 0xf2, 0xb8, 0x07, 0xbb, 0xbd, 0xea,
    0x0a, 0x38, 0x0a, 0xfd, 0x60, 0x8f, 0xf8, 0x42, 0xec, 0x50, 0x15,
    0x4f, 0x94, 0xbb, 0x0d, 0x0c, 0x00, 0x6b, 0x7c, 0x8e, 0xd9, 0xf9,
    0x1c, 0xb4, 0xf4, 0x39, 0x6a, 0xeb, 0x73, 0xd8, 0x9a, 0x06, 0x01,
    0x08, 0xf0, 0x1f, 0x73, 0xdc, 0x9e, 0x16, 0x09, 0xe8, 0xfe, 0x43,
    0x77, 0x07, 0x2e, 0x72, 0x3d, 0x01, 0xb9, 0xef, 0x71, 0x47, 0x6e,
    0x4a, 0x48, 0x40, 0x15, 0xc0, 0x5d, 0xe1, 0xdd, 0x4e, 0x00, 0x27,
    0x25, 0x72, 0xf7, 0x3f, 0xf6, 0xd8, 0x5d, 0x8a, 0x04, 0x6e, 0xf4,
    0x91, 0xce, 0xae, 0xbb, 0x83, 0x97, 0x39, 0x44, 0xe4, 0xc8, 0x78,
    0xf4, 0xd1, 0xdb, 0x52, 0x32, 0x4c, 0x6b, 0xd0, 0x2d, 0x09, 0x90,
    0x12, 0x72, 0xb4, 0xba, 0xa0, 0xff, 0x07, 0x00, 0x48, 0x04, 0x71,
    0x83, 0x9e, 0xcc, 0x51, 0xce, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

// Thanks DKPac22
static RwTexture* LoadTextureFromMemory(char* data, unsigned int size)
{
    patch::SetChar(0x7CF9CA, rwSTREAMMEMORY);
    RwMemory memoryImage;
    RwInt32 width, height, depth, flags;
    memoryImage.start = (RwUInt8*)data;
    memoryImage.length = size;
    RwImage* image = RtPNGImageRead((char*)&memoryImage);
    RwImageFindRasterFormat(image, 4, &width, &height, &depth, &flags);
    RwRaster* raster = RwRasterCreate(width, height, depth, flags);
    RwRasterSetFromImage(raster, image);
    RwImageDestroy(image);
    patch::SetChar(0x7CF9CA, rwSTREAMFILENAME);

    return RwTextureCreate(raster);
}

void Neon::InjectHooks()
{
    static bool init;
    if (init)
    {
        return;
    }

    Events::processScriptsEvent += []
    {
        if (!m_pNeonTexture)
        {
            m_pNeonTexture = LoadTextureFromMemory((char*)neon_mask, sizeof(neon_mask));
        }
    };

    Events::vehicleRenderEvent += [](CVehicle* pVeh)
    {
        NeonData* data = &m_VehNeon.Get(pVeh);
        if (data->m_bNeonInstalled && !pVeh->IsUpsideDown())
        {
            CVector Pos = CModelInfo::GetModelInfo(pVeh->m_nModelIndex)->m_pColModel->m_boundBox.m_vecMin;
            CVector center = pVeh->TransformFromObjectSpace(CVector(0.0f, 0.0f, 0.0f));
            CVector up = pVeh->TransformFromObjectSpace(CVector(0.0f, -Pos.y - data->m_fVal, 0.0f)) - center;
            CVector right = pVeh->TransformFromObjectSpace(CVector(Pos.x + data->m_fVal, 0.0f, 0.0f)) - center;
            CShadows::StoreShadowToBeRendered(5, m_pNeonTexture, &center, up.x, up.y, right.x, right.y, 180, data->m_Color.r,
                                              data->m_Color.g, data->m_Color.b, 2.0f, false, 1.0f, 0, true);

            if (data->m_bPulsing)
            {
                size_t delta = CTimer::m_snTimeInMilliseconds - CTimer::m_snPreviousTimeInMilliseconds;

                if (data->m_fVal < 0.0f)
                {
                    data->m_bIncrement = true;
                }

                if (data->m_fVal > 0.3f)
                {
                    data->m_bIncrement = false;
                }

                if (data->m_bIncrement)
                {
                    data->m_fVal += 0.0003f * delta;
                }
                else
                {
                    data->m_fVal -= 0.0003f * delta;
                }
            }
        }
    };

    init = true;
}

void Neon::RemoveHooks()
{
    if (m_pNeonTexture)
    {
        RwTextureDestroy(m_pNeonTexture);
        m_pNeonTexture = nullptr;
    }
}

bool Neon::IsInstalled(CVehicle* pVeh)
{
    return m_VehNeon.Get(pVeh).m_bNeonInstalled;
}

bool Neon::IsPulsingEnabled(CVehicle* pVeh)
{
    return m_VehNeon.Get(pVeh).m_bPulsing;
}

void Neon::SetPulsing(CVehicle* pVeh, bool state)
{
    m_VehNeon.Get(pVeh).m_bPulsing = state;
}

void Neon::Install(CVehicle* pVeh, int red, int green, int blue)
{
    CRGBA& color = m_VehNeon.Get(pVeh).m_Color;

    color.r = red;
    color.g = green;
    color.b = blue;
    color.a = 255;

    m_VehNeon.Get(pVeh).m_bNeonInstalled = true;
}

void Neon::Remove(CVehicle* pVeh)
{
    m_VehNeon.Get(pVeh).m_bNeonInstalled = false;
}


