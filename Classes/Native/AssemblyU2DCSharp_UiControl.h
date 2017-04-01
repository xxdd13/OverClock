#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t6_79;
// UiDataBase
struct UiDataBase_t8_17;
// LevelControl
struct LevelControl_t8_9;
// GameManagerData
struct GameManagerData_t8_2;
// TipData
struct TipData_t8_18;
// UnityEngine.ParticleSystem
struct ParticleSystem_t6_120;
// SoundManager
struct SoundManager_t8_12;
// UnityEngine.Animator
struct Animator_t6_151;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UiControl
struct  UiControl_t8_11  : public MonoBehaviour_t6_92
{
	// UnityEngine.SpriteRenderer UiControl::backGround
	SpriteRenderer_t6_79 * ___backGround_2;
	// UiDataBase UiControl::uiData
	UiDataBase_t8_17 * ___uiData_3;
	// LevelControl UiControl::control
	LevelControl_t8_9 * ___control_4;
	// GameManagerData UiControl::gameData
	GameManagerData_t8_2 * ___gameData_5;
	// TipData UiControl::tipData
	TipData_t8_18 * ___tipData_6;
	// UnityEngine.ParticleSystem UiControl::particleWin
	ParticleSystem_t6_120 * ___particleWin_7;
	// SoundManager UiControl::soungMana
	SoundManager_t8_12 * ___soungMana_8;
	// System.Int32 UiControl::star
	int32_t ___star_9;
	// UnityEngine.Animator UiControl::addStar
	Animator_t6_151 * ___addStar_10;
};
