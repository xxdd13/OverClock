#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelUiData
struct LevelUiData_t8_14;
// UiControl
struct UiControl_t8_11;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// LevelUi
struct  LevelUi_t8_15  : public MonoBehaviour_t6_92
{
	// System.Int32 LevelUi::chapter
	int32_t ___chapter_2;
	// System.Int32 LevelUi::level
	int32_t ___level_3;
	// LevelUiData LevelUi::uiData
	LevelUiData_t8_14 * ___uiData_4;
	// UiControl LevelUi::uiControl
	UiControl_t8_11 * ___uiControl_5;
};
