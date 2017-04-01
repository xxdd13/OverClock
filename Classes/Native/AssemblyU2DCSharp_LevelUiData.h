#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManagerData
struct GameManagerData_t8_2;
// UnityEngine.UI.Image
struct Image_t7_65;
// UnityEngine.UI.Text
struct Text_t7_64;
// UnityEngine.UI.Button
struct Button_t7_55;

#include "mscorlib_System_Object.h"

// LevelUiData
struct  LevelUiData_t8_14  : public Object_t
{
	// GameManagerData LevelUiData::data
	GameManagerData_t8_2 * ___data_0;
	// UnityEngine.UI.Image LevelUiData::levelIma
	Image_t7_65 * ___levelIma_1;
	// UnityEngine.UI.Image LevelUiData::StarBackGround
	Image_t7_65 * ___StarBackGround_2;
	// UnityEngine.UI.Image LevelUiData::starIma
	Image_t7_65 * ___starIma_3;
	// UnityEngine.UI.Text LevelUiData::textLevel
	Text_t7_64 * ___textLevel_4;
	// UnityEngine.UI.Button LevelUiData::button
	Button_t7_55 * ___button_5;
};
