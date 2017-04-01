#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t6_99;
// Pont
struct Pont_t8_10;
// GameManagerData
struct GameManagerData_t8_2;
// UiControl
struct UiControl_t8_11;
// SoundManager
struct SoundManager_t8_12;
// ClockControl
struct ClockControl_t8_4;
// SpawmPoint
struct SpawmPoint_t8_13;
// UnityEngine.Transform
struct Transform_t6_70;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// LevelControl
struct  LevelControl_t8_9  : public MonoBehaviour_t6_92
{
	// System.Int32 LevelControl::Level
	int32_t ___Level_2;
	// UnityEngine.GameObject LevelControl::clock
	GameObject_t6_99 * ___clock_3;
	// Pont LevelControl::point
	Pont_t8_10 * ___point_4;
	// GameManagerData LevelControl::gameData
	GameManagerData_t8_2 * ___gameData_5;
	// UiControl LevelControl::uiControl
	UiControl_t8_11 * ___uiControl_6;
	// SoundManager LevelControl::soundManager
	SoundManager_t8_12 * ___soundManager_7;
	// System.Boolean LevelControl::suvival
	bool ___suvival_8;
	// System.Int32 LevelControl::CountClock
	int32_t ___CountClock_9;
	// System.Int32 LevelControl::CountClockConst
	int32_t ___CountClockConst_10;
	// System.Single LevelControl::timeGame
	float ___timeGame_11;
	// ClockControl LevelControl::currenClock
	ClockControl_t8_4 * ___currenClock_12;
	// SpawmPoint LevelControl::spawmPoint
	SpawmPoint_t8_13 * ___spawmPoint_13;
	// UnityEngine.Transform LevelControl::_transform
	Transform_t6_70 * ____transform_14;
	// System.String LevelControl::highScorePrefab
	String_t* ___highScorePrefab_15;
	// System.Int32 LevelControl::score
	int32_t ___score_16;
	// System.Int32 LevelControl::star
	int32_t ___star_17;
	// System.Int32 LevelControl::restartStar
	int32_t ___restartStar_18;
};
