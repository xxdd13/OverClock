#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t6_320;
// System.Int32[]
struct Int32U5BU5D_t1_159;
// UnityEngine.AudioClip
struct AudioClip_t6_142;

#include "UnityEngine_UnityEngine_ScriptableObject.h"
#include "UnityEngine_UnityEngine_Color.h"

// GameManagerData
struct  GameManagerData_t8_2  : public ScriptableObject_t6_15
{
	// System.Int32 GameManagerData::levelUnlock
	int32_t ___levelUnlock_2;
	// System.Int32 GameManagerData::currenLevel
	int32_t ___currenLevel_3;
	// System.Int32 GameManagerData::highScore
	int32_t ___highScore_4;
	// System.Int32 GameManagerData::star
	int32_t ___star_5;
	// UnityEngine.Color GameManagerData::Clock
	Color_t6_160  ___Clock_6;
	// UnityEngine.Color GameManagerData::ActiveClock
	Color_t6_160  ___ActiveClock_7;
	// System.Single GameManagerData::Alpha
	float ___Alpha_8;
	// UnityEngine.Color GameManagerData::colorUiLock
	Color_t6_160  ___colorUiLock_9;
	// UnityEngine.Color GameManagerData::colorUiUnlock
	Color_t6_160  ___colorUiUnlock_10;
	// UnityEngine.Color GameManagerData::colorUiActive
	Color_t6_160  ___colorUiActive_11;
	// UnityEngine.Color[] GameManagerData::BackGround
	ColorU5BU5D_t6_320* ___BackGround_12;
	// System.Int32[] GameManagerData::timeLevel
	Int32U5BU5D_t1_159* ___timeLevel_13;
	// System.Boolean GameManagerData::sound
	bool ___sound_14;
	// UnityEngine.AudioClip GameManagerData::pointClip
	AudioClip_t6_142 * ___pointClip_15;
	// UnityEngine.AudioClip GameManagerData::clockClip
	AudioClip_t6_142 * ___clockClip_16;
	// UnityEngine.AudioClip GameManagerData::winClip
	AudioClip_t6_142 * ___winClip_17;
	// UnityEngine.AudioClip GameManagerData::gameoverClup
	AudioClip_t6_142 * ___gameoverClup_18;
};
