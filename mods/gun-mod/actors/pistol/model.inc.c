Lights1 pistol_gray_lights = gdSPDefLights1(
	0x53, 0x53, 0x53,
	0xAA, 0xAA, 0xAA, 0x28, 0x28, 0x28);

Lights1 pistol_darkergray_lights = gdSPDefLights1(
	0xF, 0xF, 0xF,
	0x2A, 0x2A, 0x2A, 0x28, 0x28, 0x28);

Gfx pistol_noise_i8_aligner[] = {gsSPEndDisplayList()};
u8 pistol_noise_i8[] = {
	0xfa, 0xff, 0xf1, 0xf7, 0xf6, 0xf0, 0xff, 0xff, 
	0xf7, 0xf7, 0xff, 0xff, 0xdb, 0xff, 0xcc, 0xfa, 
	0xd1, 0xff, 0xff, 0xf5, 0xde, 0xf7, 0xe4, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xce, 
	0xfc, 0xf7, 0xff, 0xff, 0xe9, 0xd7, 0xff, 0xff, 
	0xff, 0xe3, 0xff, 0xff, 0xce, 0xff, 0xfe, 0xff, 
	0xff, 0xf9, 0xe2, 0xf4, 0xde, 0xf6, 0xf8, 0xff, 
	0xf6, 0xea, 0xf1, 0xff, 0xff, 0xf6, 0xf3, 0xdf, 
	0xbe, 0xff, 0xff, 0xf4, 0xee, 0xf2, 0xff, 0xff, 
	0xff, 0xff, 0xf9, 0xff, 0xde, 0xf7, 0xe6, 0xf9, 
	0xff, 0xff, 0xfc, 0xf0, 0xff, 0xeb, 0xf1, 0xff, 
	0xff, 0xfd, 0xea, 0xde, 0xdc, 0xec, 0xd3, 0xff, 
	0xff, 0xff, 0xff, 0xcd, 0xff, 0xff, 0xff, 0xc9, 
	0xd9, 0xf6, 0xff, 0xdc, 0xff, 0xff, 0xf7, 0xe0, 
	0xff, 0xd9, 0xd4, 0xff, 0xed, 0xff, 0xff, 0xff, 
	0xed, 0xd8, 0xff, 0xff, 0xef, 0xeb, 0xb6, 0xff, 
	0xf9, 0xff, 0xff, 0xf1, 0xd6, 0xe7, 0xde, 0xe9, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xff, 0xff, 
	0xd0, 0xff, 0xff, 0xff, 0xea, 0xff, 0xe3, 0xdf, 
	0xff, 0xff, 0xff, 0xf6, 0xff, 0xe7, 0xff, 0xff, 
	0xd1, 0xff, 0xeb, 0xef, 0xec, 0xfe, 0xff, 0xff, 
	0xff, 0xd5, 0xde, 0xff, 0xeb, 0xff, 0xfe, 0xcf, 
	0xff, 0xf4, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xca, 0xfd, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xda, 
	0xff, 0xb3, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xf8, 0xf2, 0xf9, 0xe5, 0xde, 0xe0, 0xff, 0xcb, 
	0xf1, 0xe5, 0xed, 0xe1, 0xcb, 0xc4, 0xef, 0xd9, 
	0xff, 0xc1, 0xf3, 0xff, 0xf4, 0xef, 0xff, 0xff, 
	0xff, 0xff, 0xf1, 0xff, 0xf8, 0xff, 0xfb, 0xff, 
	0xff, 0xff, 0xfd, 0xff, 0xfc, 0xff, 0xf8, 0xff, 
	0xfa, 0xe9, 0xff, 0xff, 0xfe, 0xce, 0xff, 0xe8, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xc6, 
	0xed, 0xff, 0xff, 0xe9, 0xe4, 0xe2, 0xf3, 0xd5, 
	0xff, 0xff, 0xff, 0xe4, 0xf0, 0xff, 0xff, 0xff, 
	0xef, 0xf5, 0xf8, 0xff, 0xfa, 0xf0, 0xff, 0xc6, 
	0xf2, 0xff, 0xfb, 0xff, 0xfd, 0xe4, 0xff, 0xed, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xf6, 0xff, 
	0xf7, 0xff, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xe2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xf4, 0xff, 0xf9, 0xf7, 0xff, 0xee, 0xf0, 0xf8, 
	0xf9, 0xff, 0xff, 0xff, 0xe2, 0xff, 0xe0, 0xff, 
	0xf0, 0xfc, 0xe8, 0xff, 0xff, 0xf4, 0xff, 0xe6, 
	0xbc, 0xfa, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 
	0xf8, 0xd3, 0xff, 0xff, 0xe5, 0xd9, 0xf6, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf5, 
	0xde, 0xff, 0xee, 0xff, 0xe6, 0xe6, 0xff, 0xc9, 
	0xff, 0xff, 0xf2, 0xd0, 0xf4, 0xff, 0xfe, 0xe6, 
	0xfe, 0xd4, 0xff, 0xe8, 0xff, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xd5, 0xff, 0xf9, 0xfc, 0xf3, 0xb9, 
	0xf9, 0xf9, 0xf9, 0xea, 0xff, 0xff, 0xff, 0xff, 
	0xeb, 0xf0, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xfd, 
	0xff, 0xff, 0xfe, 0xfc, 0xf3, 0xfb, 0xfd, 0xff, 
	0xff, 0xe9, 0xde, 0xff, 0xf2, 0xee, 0xff, 0xf4, 
	0xff, 0xf9, 0xff, 0xf2, 0xff, 0xf2, 0xff, 0xd2, 
	0xff, 0xe2, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf4, 0xd5, 
	0xff, 0xff, 0xe5, 0xfd, 0xeb, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xe5, 0xff, 0xed, 0xff, 0xf6, 0xfb, 
	0xff, 0xf4, 0xf1, 0xf9, 0xd5, 0xd8, 0xff, 0xff, 
	0xff, 0xf5, 0xf5, 0xe2, 0xdf, 0xfd, 0xff, 0xea, 
	0xee, 0xff, 0xd2, 0xff, 0xff, 0xff, 0xff, 0xed, 
	0xff, 0xff, 0xfa, 0xe8, 0xf7, 0xcc, 0xf4, 0xef, 
	0xf7, 0xff, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xe7, 0xff, 0xe9, 0xd5, 0xda, 0xff, 0xff, 0xf8, 
	0xe6, 0xf9, 0xf2, 0xfc, 0xff, 0xff, 0xff, 0xed, 
	0xff, 0xff, 0xf5, 0xff, 0xe0, 0xed, 0xff, 0xf4, 
	0xff, 0xf5, 0xff, 0xfd, 0xfa, 0xf9, 0xd6, 0xee, 
	0xe8, 0xff, 0xff, 0xe7, 0xed, 0xff, 0xf4, 0xfc, 
	0xff, 0xff, 0xfd, 0xf7, 0xff, 0xfe, 0xff, 0xf0, 
	0xff, 0xff, 0xef, 0xf4, 0xe3, 0xee, 0xff, 0xf5, 
	0xfa, 0xff, 0xff, 0xff, 0xd3, 0xd6, 0xff, 0xd3, 
	0xfa, 0xed, 0xf5, 0xe9, 0xff, 0xe7, 0xff, 0xa3, 
	0xed, 0xff, 0xfe, 0xff, 0xea, 0xff, 0xfd, 0xff, 
	0xf6, 0xff, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xfa, 
	0xd8, 0xff, 0xff, 0xf7, 0xff, 0xfe, 0xdf, 0xf6, 
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xdd, 0xff, 0xd6, 
	0xff, 0xeb, 0xff, 0xf1, 0xfe, 0xff, 0xff, 0xff, 
	0xff, 0xef, 0xe8, 0xfe, 0xfa, 0xdc, 0xff, 0xff, 
	0xfc, 0xff, 0xfd, 0xff, 0xf2, 0xf0, 0xff, 0xd6, 
	0xff, 0xf4, 0xff, 0xe3, 0xff, 0xe6, 0xff, 0xff, 
	0xf7, 0xca, 0xde, 0xff, 0xf7, 0xd3, 0xff, 0xf2, 
	0xea, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 
	0xf9, 0xff, 0xf6, 0xf1, 0xec, 0xff, 0xff, 0xff, 
	0xf1, 0xfb, 0xff, 0xf8, 0xff, 0xe2, 0xff, 0xff, 
	0xff, 0xe6, 0xfe, 0xff, 0xe9, 0xed, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xe9, 
	0xe2, 0xec, 0xff, 0xff, 0xf3, 0xf9, 0xff, 0xff, 
	0xfc, 0xff, 0xff, 0xc4, 0xfc, 0xe6, 0xff, 0xd1, 
	0xff, 0xff, 0xff, 0xdd, 0xff, 0xff, 0xd0, 0xff, 
	0xff, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0xff, 0xf8, 
	0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 
	0xff, 0xff, 0xff, 0xf0, 0xf9, 0xff, 0xff, 0xff, 
	0xbc, 0xff, 0xff, 0xcb, 0xff, 0xde, 0xff, 0xe7, 
	0xff, 0xfc, 0xff, 0xf3, 0xff, 0xeb, 0xbf, 0xff, 
	0xff, 0xef, 0xe7, 0xff, 0xf4, 0xff, 0xff, 0xff, 
	0xeb, 0xf4, 0xff, 0xec, 0xff, 0xff, 0xff, 0xed, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0xe2, 0xff, 
	0xf4, 0xf0, 0xff, 0xf8, 0xff, 0xff, 0xf2, 0xff, 
	0xff, 0xff, 0xdf, 0xff, 0xfb, 0xff, 0xff, 0xff, 
	0xff, 0xea, 0xbf, 0xf7, 0xff, 0xff, 0xff, 0xde, 
	0xf9, 0xb3, 0xf3, 0xf1, 0xe6, 0xe4, 0xdb, 0xff, 
	0xf2, 0xff, 0xfd, 0xff, 0xff, 0xf3, 0xf6, 0xde, 
	0xff, 0xf4, 0xfa, 0xea, 0xf2, 0xf1, 0xea, 0xff, 
	0xea, 0xf5, 0xe8, 0xff, 0xef, 0xe8, 0xc9, 0xff, 
	0xff, 0xff, 0xe0, 0xed, 0xff, 0xff, 0xe5, 0xff, 
	0xff, 0xff, 0xf6, 0xf4, 0xe5, 0xc6, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0xba, 0xea, 0xed, 
	0xff, 0xfd, 0xff, 0xf9, 0xe9, 0xf8, 0xff, 0xff, 
	0xff, 0xfb, 0xe9, 0xff, 0xff, 0xfe, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 
	0xda, 0xdd, 0xff, 0xff, 0xff, 0xda, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xdd, 0xf0, 0xc7, 0xe7, 0xff, 
	0xf8, 0xde, 0xf9, 0xff, 0xff, 0xff, 0xf8, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xec, 0xff, 
	0xd5, 0xfb, 0xfd, 0xff, 0xeb, 0xd9, 0xff, 0xbb, 
	0xff, 0xff, 0xff, 0xff, 0xdd, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfb, 0xfe, 0xec, 0xff, 0xea, 0xdd, 
	0xff, 0xda, 0xff, 0xe6, 0xef, 0xff, 0xff, 0xff, 
	0xff, 0xf8, 0xff, 0xe3, 0xff, 0xff, 0xe6, 0xff, 
	0xbb, 0xed, 0xff, 0xfc, 0xec, 0xff, 0xf7, 0xfb, 
	0xfe, 0xf5, 0xe5, 0xd5, 0xff, 0xff, 0xef, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xff, 
	0xff, 0xdf, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 
	0xff, 0xd2, 0xff, 0xff, 0xff, 0xe4, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xce, 0xff, 0xeb, 0xef, 0xfd, 
	0xfc, 0xe5, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xf0, 
	
};

Vtx pistol_Arm_mesh_layer_1_vtx_0[174] = {
	{{ {43, 30, -1}, 0, {-304, 922}, {0, 0, 129, 255} }},
	{{ {34, 42, -1}, 0, {181, 1299}, {0, 0, 129, 255} }},
	{{ {47, 39, -1}, 0, {63, 771}, {0, 0, 129, 255} }},
	{{ {43, 30, 4}, 0, {272, 922}, {0, 0, 127, 255} }},
	{{ {47, 39, 4}, 0, {-95, 771}, {0, 0, 127, 255} }},
	{{ {34, 42, 4}, 0, {-213, 1299}, {0, 0, 127, 255} }},
	{{ {74, 19, 0}, 0, {-306, 916}, {195, 187, 168, 255} }},
	{{ {77, 14, 1}, 0, {-492, 797}, {195, 187, 168, 255} }},
	{{ {72, 19, 1}, 0, {-306, 1008}, {195, 187, 168, 255} }},
	{{ {77, 14, 1}, 0, {-16, 1484}, {107, 68, 0, 255} }},
	{{ {74, 19, 0}, 0, {46, 1298}, {107, 68, 0, 255} }},
	{{ {74, 19, 3}, 0, {-78, 1298}, {107, 68, 0, 255} }},
	{{ {77, 14, 1}, 0, {460, 797}, {195, 187, 88, 255} }},
	{{ {74, 19, 3}, 0, {274, 916}, {195, 187, 88, 255} }},
	{{ {72, 19, 1}, 0, {274, 1008}, {195, 187, 88, 255} }},
	{{ {70, 13, 4}, 0, {-119, 331}, {237, 209, 117, 255} }},
	{{ {70, 13, -1}, 0, {87, 331}, {237, 209, 139, 255} }},
	{{ {82, 13, -1}, 0, {87, -181}, {23, 208, 141, 255} }},
	{{ {82, 13, 4}, 0, {-119, -181}, {23, 208, 115, 255} }},
	{{ {65, 18, 4}, 0, {87, 1267}, {218, 219, 115, 255} }},
	{{ {70, 13, -1}, 0, {-119, 1472}, {237, 209, 139, 255} }},
	{{ {70, 13, 4}, 0, {87, 1472}, {237, 209, 117, 255} }},
	{{ {65, 18, -1}, 0, {-119, 1267}, {218, 219, 141, 255} }},
	{{ {70, 14, 2}, 0, {-16, 314}, {49, 117, 0, 255} }},
	{{ {70, 13, 4}, 0, {87, 331}, {237, 209, 117, 255} }},
	{{ {82, 13, 4}, 0, {87, -181}, {23, 208, 115, 255} }},
	{{ {82, 14, 2}, 0, {-16, -162}, {201, 115, 0, 255} }},
	{{ {70, 13, -1}, 0, {-119, 331}, {237, 209, 139, 255} }},
	{{ {82, 13, -1}, 0, {-119, -181}, {23, 208, 141, 255} }},
	{{ {66, 18, 2}, 0, {-16, 1251}, {91, 89, 0, 255} }},
	{{ {65, 18, 4}, 0, {-119, 1267}, {218, 219, 115, 255} }},
	{{ {70, 13, 4}, 0, {-119, 1472}, {237, 209, 117, 255} }},
	{{ {70, 14, 2}, 0, {-16, 1432}, {49, 117, 0, 255} }},
	{{ {65, 18, -1}, 0, {87, 1267}, {218, 219, 141, 255} }},
	{{ {70, 13, -1}, 0, {87, 1472}, {237, 209, 139, 255} }},
	{{ {82, 14, 2}, 0, {-16, 1432}, {201, 115, 0, 255} }},
	{{ {82, 13, 4}, 0, {87, 1472}, {23, 208, 115, 255} }},
	{{ {86, 18, 4}, 0, {87, 1267}, {44, 241, 118, 255} }},
	{{ {86, 18, 2}, 0, {-16, 1253}, {136, 42, 0, 255} }},
	{{ {86, 27, 4}, 0, {87, 884}, {22, 0, 125, 255} }},
	{{ {86, 27, 2}, 0, {-16, 884}, {129, 0, 0, 255} }},
	{{ {86, 18, -1}, 0, {-119, 1267}, {44, 241, 138, 255} }},
	{{ {86, 27, -1}, 0, {-119, 884}, {22, 0, 131, 255} }},
	{{ {82, 13, -1}, 0, {-119, 1472}, {23, 208, 141, 255} }},
	{{ {82, 13, 4}, 0, {-119, 1472}, {23, 208, 115, 255} }},
	{{ {82, 13, -1}, 0, {87, 1472}, {23, 208, 141, 255} }},
	{{ {86, 18, -1}, 0, {87, 1267}, {44, 241, 138, 255} }},
	{{ {86, 18, 4}, 0, {-119, 1267}, {44, 241, 118, 255} }},
	{{ {86, 27, -1}, 0, {87, 884}, {22, 0, 131, 255} }},
	{{ {86, 27, 4}, 0, {-119, 884}, {22, 0, 125, 255} }},
	{{ {127, 28, -2}, 0, {127, 827}, {84, 236, 163, 255} }},
	{{ {127, 33, -4}, 0, {209, 647}, {71, 56, 167, 255} }},
	{{ {127, 33, 7}, 0, {-241, 647}, {71, 56, 89, 255} }},
	{{ {127, 28, 5}, 0, {-159, 827}, {84, 236, 93, 255} }},
	{{ {127, 24, -2}, 0, {127, 1008}, {73, 183, 183, 255} }},
	{{ {127, 24, 5}, 0, {-159, 1008}, {73, 183, 73, 255} }},
	{{ {108, 33, 7}, 0, {209, -1241}, {10, 77, 101, 255} }},
	{{ {127, 33, 7}, 0, {209, -2006}, {71, 56, 89, 255} }},
	{{ {127, 33, -4}, 0, {-241, -2006}, {71, 56, 167, 255} }},
	{{ {38, 33, -4}, 0, {-241, 1660}, {183, 73, 183, 255} }},
	{{ {38, 33, -4}, 0, {-241, 1660}, {183, 73, 183, 255} }},
	{{ {38, 33, 7}, 0, {209, 1660}, {183, 73, 73, 255} }},
	{{ {108, 33, 7}, 0, {209, -1241}, {10, 77, 101, 255} }},
	{{ {102, 24, -4}, 0, {-16, -982}, {12, 167, 166, 255} }},
	{{ {38, 24, -4}, 0, {-16, 1660}, {183, 183, 183, 255} }},
	{{ {38, 33, -4}, 0, {345, 1660}, {183, 73, 183, 255} }},
	{{ {108, 33, -4}, 0, {345, -1241}, {9, 232, 132, 255} }},
	{{ {127, 33, -4}, 0, {345, -2006}, {71, 56, 167, 255} }},
	{{ {108, 28, -2}, 0, {165, -1241}, {26, 229, 135, 255} }},
	{{ {127, 28, -2}, 0, {165, -2006}, {84, 236, 163, 255} }},
	{{ {108, 24, -2}, 0, {-16, -1241}, {19, 164, 170, 255} }},
	{{ {127, 24, -2}, 0, {-16, -2006}, {73, 183, 183, 255} }},
	{{ {38, 24, 7}, 0, {209, 1008}, {183, 183, 73, 255} }},
	{{ {38, 33, 7}, 0, {209, 647}, {183, 73, 73, 255} }},
	{{ {38, 33, -4}, 0, {-241, 647}, {183, 73, 183, 255} }},
	{{ {38, 24, -4}, 0, {-241, 1008}, {183, 183, 183, 255} }},
	{{ {108, 24, -2}, 0, {127, -1241}, {19, 164, 170, 255} }},
	{{ {127, 24, -2}, 0, {127, -2006}, {73, 183, 183, 255} }},
	{{ {127, 24, 5}, 0, {-159, -2006}, {73, 183, 73, 255} }},
	{{ {108, 24, 5}, 0, {-159, -1241}, {19, 164, 86, 255} }},
	{{ {38, 24, 7}, 0, {-241, 1660}, {183, 183, 73, 255} }},
	{{ {102, 24, 7}, 0, {-241, -982}, {12, 167, 90, 255} }},
	{{ {102, 24, -4}, 0, {209, -982}, {12, 167, 166, 255} }},
	{{ {38, 24, -4}, 0, {209, 1660}, {183, 183, 183, 255} }},
	{{ {102, 24, 7}, 0, {-16, -982}, {12, 167, 90, 255} }},
	{{ {38, 33, 7}, 0, {-377, 1660}, {183, 73, 73, 255} }},
	{{ {38, 24, 7}, 0, {-16, 1660}, {183, 183, 73, 255} }},
	{{ {108, 33, 7}, 0, {-377, -1241}, {10, 77, 101, 255} }},
	{{ {108, 24, 5}, 0, {-16, -1241}, {19, 164, 86, 255} }},
	{{ {108, 28, 5}, 0, {-197, -1241}, {26, 229, 121, 255} }},
	{{ {127, 24, 5}, 0, {-16, -2006}, {73, 183, 73, 255} }},
	{{ {127, 28, 5}, 0, {-197, -2006}, {84, 236, 93, 255} }},
	{{ {127, 28, 5}, 0, {-197, -2006}, {84, 236, 93, 255} }},
	{{ {127, 33, 7}, 0, {-377, -2006}, {71, 56, 89, 255} }},
	{{ {108, 33, 7}, 0, {-377, -1241}, {10, 77, 101, 255} }},
	{{ {86, 36, -3}, 0, {480, -347}, {179, 205, 169, 255} }},
	{{ {86, 40, -3}, 0, {664, -347}, {179, 51, 169, 255} }},
	{{ {130, 40, -3}, 0, {664, -2149}, {0, 64, 146, 255} }},
	{{ {130, 36, -3}, 0, {480, -2149}, {0, 192, 146, 255} }},
	{{ {86, 40, -3}, 0, {-176, -347}, {179, 51, 169, 255} }},
	{{ {130, 43, 2}, 0, {-16, -2149}, {0, 127, 0, 255} }},
	{{ {130, 40, -3}, 0, {-176, -2149}, {0, 64, 146, 255} }},
	{{ {86, 43, 2}, 0, {-16, -347}, {178, 101, 0, 255} }},
	{{ {130, 40, 6}, 0, {144, -2149}, {0, 64, 110, 255} }},
	{{ {86, 40, 6}, 0, {144, -347}, {179, 51, 87, 255} }},
	{{ {86, 34, 2}, 0, {-16, -347}, {178, 155, 0, 255} }},
	{{ {86, 36, -3}, 0, {144, -347}, {179, 205, 169, 255} }},
	{{ {130, 36, -3}, 0, {144, -2149}, {0, 192, 146, 255} }},
	{{ {86, 34, 2}, 0, {-16, -347}, {178, 155, 0, 255} }},
	{{ {130, 36, -3}, 0, {144, -2149}, {0, 192, 146, 255} }},
	{{ {130, 34, 2}, 0, {-16, -2149}, {0, 129, 0, 255} }},
	{{ {86, 36, 6}, 0, {-176, -347}, {179, 205, 87, 255} }},
	{{ {130, 36, 6}, 0, {-176, -2149}, {0, 192, 110, 255} }},
	{{ {86, 43, 2}, 0, {-16, 235}, {178, 101, 0, 255} }},
	{{ {86, 40, -3}, 0, {-176, 328}, {179, 51, 169, 255} }},
	{{ {86, 36, -3}, 0, {-176, 512}, {179, 205, 169, 255} }},
	{{ {86, 36, 6}, 0, {144, 512}, {179, 205, 87, 255} }},
	{{ {86, 34, 2}, 0, {-16, 604}, {178, 155, 0, 255} }},
	{{ {86, 40, 6}, 0, {144, 328}, {179, 51, 87, 255} }},
	{{ {86, 40, 6}, 0, {-696, -347}, {179, 51, 87, 255} }},
	{{ {86, 36, 6}, 0, {-512, -347}, {179, 205, 87, 255} }},
	{{ {130, 36, 6}, 0, {-512, -2149}, {0, 192, 110, 255} }},
	{{ {130, 40, 6}, 0, {-696, -2149}, {0, 64, 110, 255} }},
	{{ {38, 33, 7}, 0, {209, 2872}, {0, 127, 0, 255} }},
	{{ {127, 33, 7}, 0, {209, -794}, {0, 127, 0, 255} }},
	{{ {127, 33, -4}, 0, {-241, -794}, {0, 127, 0, 255} }},
	{{ {38, 33, -4}, 0, {-241, 2872}, {0, 127, 0, 255} }},
	{{ {38, 33, 7}, 0, {190, 2872}, {161, 26, 81, 255} }},
	{{ {127, 33, 7}, 0, {190, -794}, {90, 0, 90, 255} }},
	{{ {127, 42, 7}, 0, {-172, -794}, {77, 51, 87, 255} }},
	{{ {40, 42, 7}, 0, {-172, 2770}, {187, 66, 83, 255} }},
	{{ {127, 42, 7}, 0, {-241, 852}, {77, 51, 87, 255} }},
	{{ {127, 33, 7}, 0, {-241, 1214}, {90, 0, 90, 255} }},
	{{ {127, 33, -4}, 0, {209, 1214}, {90, 0, 166, 255} }},
	{{ {127, 42, -4}, 0, {209, 852}, {77, 51, 169, 255} }},
	{{ {127, 45, 2}, 0, {-16, 721}, {78, 101, 0, 255} }},
	{{ {127, 33, -4}, 0, {-222, -794}, {90, 0, 166, 255} }},
	{{ {38, 33, -4}, 0, {-222, 2872}, {161, 26, 175, 255} }},
	{{ {40, 42, -4}, 0, {140, 2770}, {187, 66, 173, 255} }},
	{{ {127, 33, -4}, 0, {-222, -794}, {90, 0, 166, 255} }},
	{{ {40, 42, -4}, 0, {140, 2770}, {187, 66, 173, 255} }},
	{{ {127, 42, -4}, 0, {140, -794}, {77, 51, 169, 255} }},
	{{ {40, 42, -4}, 0, {-241, 852}, {187, 66, 173, 255} }},
	{{ {38, 33, -4}, 0, {-241, 1214}, {161, 26, 175, 255} }},
	{{ {38, 33, 7}, 0, {209, 1214}, {161, 26, 81, 255} }},
	{{ {40, 42, 7}, 0, {209, 852}, {187, 66, 83, 255} }},
	{{ {127, 45, 2}, 0, {-16, -794}, {78, 101, 0, 255} }},
	{{ {127, 42, -4}, 0, {-241, -794}, {77, 51, 169, 255} }},
	{{ {40, 42, -4}, 0, {-241, 2770}, {187, 66, 173, 255} }},
	{{ {44, 45, 2}, 0, {-16, 2626}, {227, 124, 0, 255} }},
	{{ {40, 42, 7}, 0, {209, 2770}, {187, 66, 83, 255} }},
	{{ {127, 42, 7}, 0, {209, -794}, {77, 51, 87, 255} }},
	{{ {47, 39, -1}, 0, {-104, 771}, {27, 124, 0, 255} }},
	{{ {34, 42, -1}, 0, {-104, 1299}, {27, 124, 0, 255} }},
	{{ {34, 42, 4}, 0, {72, 1299}, {27, 124, 0, 255} }},
	{{ {47, 39, -1}, 0, {-104, 771}, {27, 124, 0, 255} }},
	{{ {34, 42, 4}, 0, {72, 1299}, {27, 124, 0, 255} }},
	{{ {47, 39, 4}, 0, {72, 771}, {27, 124, 0, 255} }},
	{{ {34, 42, -1}, 0, {-104, 811}, {155, 178, 0, 255} }},
	{{ {43, 30, -1}, 0, {-104, 1296}, {155, 178, 0, 255} }},
	{{ {43, 30, 4}, 0, {72, 1296}, {155, 178, 0, 255} }},
	{{ {34, 42, 4}, 0, {72, 811}, {155, 178, 0, 255} }},
	{{ {74, 26, 3}, 0, {-16, 916}, {183, 0, 104, 255} }},
	{{ {72, 26, 1}, 0, {-16, 1008}, {183, 0, 104, 255} }},
	{{ {72, 19, 1}, 0, {274, 1008}, {183, 0, 104, 255} }},
	{{ {74, 19, 3}, 0, {274, 916}, {183, 0, 104, 255} }},
	{{ {72, 26, 1}, 0, {-16, 1008}, {183, 0, 152, 255} }},
	{{ {74, 26, 0}, 0, {-16, 916}, {183, 0, 152, 255} }},
	{{ {74, 19, 0}, 0, {-306, 916}, {183, 0, 152, 255} }},
	{{ {72, 19, 1}, 0, {-306, 1008}, {183, 0, 152, 255} }},
	{{ {74, 19, 0}, 0, {46, 1298}, {127, 0, 0, 255} }},
	{{ {74, 26, 0}, 0, {46, 1008}, {127, 0, 0, 255} }},
	{{ {74, 26, 3}, 0, {-78, 1008}, {127, 0, 0, 255} }},
	{{ {74, 19, 3}, 0, {-78, 1298}, {127, 0, 0, 255} }},
};

Gfx pistol_Arm_mesh_layer_1_tri_0[] = {
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 15, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 29, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 9, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 9, 12, 0),
	gsSP1Triangle(14, 6, 9, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 44, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(9, 10, 6, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 60, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(6, 8, 10, 0),
	gsSP1Triangle(6, 10, 3, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 76, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 6, 0, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSP1Triangle(15, 11, 13, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 92, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 10, 8, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 108, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 10, 5, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 123, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 139, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 7, 10, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 155, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_0 + 170, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx pistol_Arm_mesh_layer_1_vtx_1[34] = {
	{{ {56, -22, -3}, 0, {168, 2906}, {127, 0, 0, 255} }},
	{{ {56, -14, -3}, 0, {168, 2582}, {127, 0, 0, 255} }},
	{{ {56, -14, 6}, 0, {-200, 2582}, {127, 0, 0, 255} }},
	{{ {56, -22, 6}, 0, {-200, 2906}, {127, 0, 0, 255} }},
	{{ {56, -14, -3}, 0, {-1590, 906}, {0, 0, 129, 255} }},
	{{ {56, -22, -3}, 0, {-1914, 906}, {0, 0, 129, 255} }},
	{{ {30, -14, -3}, 0, {-1590, 1971}, {0, 0, 129, 255} }},
	{{ {41, 20, -3}, 0, {-173, 1528}, {0, 0, 129, 255} }},
	{{ {68, 24, -3}, 0, {-16, 414}, {0, 0, 129, 255} }},
	{{ {39, 24, -3}, 0, {-16, 1602}, {0, 0, 129, 255} }},
	{{ {68, 24, 6}, 0, {-200, 1008}, {121, 218, 0, 255} }},
	{{ {56, -14, 6}, 0, {-200, 2582}, {121, 218, 0, 255} }},
	{{ {56, -14, -3}, 0, {168, 2582}, {121, 218, 0, 255} }},
	{{ {68, 24, -3}, 0, {168, 1008}, {121, 218, 0, 255} }},
	{{ {30, -14, 6}, 0, {-200, 1971}, {219, 134, 0, 255} }},
	{{ {30, -14, -3}, 0, {168, 1971}, {219, 134, 0, 255} }},
	{{ {56, -22, -3}, 0, {168, 906}, {219, 134, 0, 255} }},
	{{ {56, -22, 6}, 0, {-200, 906}, {219, 134, 0, 255} }},
	{{ {30, -14, 6}, 0, {168, 2582}, {135, 38, 0, 255} }},
	{{ {41, 20, -3}, 0, {-200, 1165}, {135, 38, 0, 255} }},
	{{ {30, -14, -3}, 0, {-200, 2582}, {135, 38, 0, 255} }},
	{{ {41, 20, 6}, 0, {168, 1165}, {135, 38, 0, 255} }},
	{{ {39, 24, -3}, 0, {-200, 1008}, {141, 202, 0, 255} }},
	{{ {41, 20, -3}, 0, {-200, 1165}, {141, 202, 0, 255} }},
	{{ {41, 20, 6}, 0, {168, 1165}, {141, 202, 0, 255} }},
	{{ {39, 24, 6}, 0, {168, 1008}, {141, 202, 0, 255} }},
	{{ {30, -14, 6}, 0, {1558, 1971}, {0, 0, 127, 255} }},
	{{ {56, -22, 6}, 0, {1882, 906}, {0, 0, 127, 255} }},
	{{ {56, -14, 6}, 0, {1558, 906}, {0, 0, 127, 255} }},
	{{ {41, 20, 6}, 0, {141, 1528}, {0, 0, 127, 255} }},
	{{ {56, -14, 6}, 0, {1558, 906}, {0, 0, 127, 255} }},
	{{ {68, 24, 6}, 0, {-16, 414}, {0, 0, 127, 255} }},
	{{ {41, 20, 6}, 0, {141, 1528}, {0, 0, 127, 255} }},
	{{ {39, 24, 6}, 0, {-16, 1602}, {0, 0, 127, 255} }},
};

Gfx pistol_Arm_mesh_layer_1_tri_1[] = {
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_1 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_1 + 30, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSPEndDisplayList(),
};

Vtx pistol_Arm_mesh_layer_1_vtx_2[6] = {
	{{ {130, 36, -3}, 0, {144, 512}, {127, 0, 0, 255} }},
	{{ {130, 40, -3}, 0, {144, 328}, {127, 0, 0, 255} }},
	{{ {130, 43, 2}, 0, {-16, 235}, {127, 0, 0, 255} }},
	{{ {130, 36, 6}, 0, {-176, 512}, {127, 0, 0, 255} }},
	{{ {130, 40, 6}, 0, {-176, 328}, {127, 0, 0, 255} }},
	{{ {130, 34, 2}, 0, {-16, 604}, {127, 0, 0, 255} }},
};

Gfx pistol_Arm_mesh_layer_1_tri_2[] = {
	gsSPVertex(pistol_Arm_mesh_layer_1_vtx_2 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pistol_gray[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pistol_gray_lights),
	gsSPEndDisplayList(),
};

Gfx mat_pistol_darkergray[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pistol_darkergray_lights),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, pistol_noise_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_pistol_black_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
	gsDPSetRenderMode(G_RM_ZB_OPA_SURF, G_RM_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pistol_black_layer1[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx pistol_Arm_mesh_layer_1[] = {
	gsSPDisplayList(mat_pistol_gray),
	gsSPDisplayList(pistol_Arm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_pistol_darkergray),
	gsSPDisplayList(pistol_Arm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_pistol_black_layer1),
	gsSPDisplayList(pistol_Arm_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_pistol_black_layer1),
	gsSPEndDisplayList(),
};

Gfx pistol_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
