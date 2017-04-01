#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ClockControl
struct ClockControl_t8_4;
// LevelControl
struct LevelControl_t8_9;
// UnityEngine.Animator
struct Animator_t6_151;
// SoundManager
struct SoundManager_t8_12;
// UnityEngine.Transform
struct Transform_t6_70;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pont
struct  Pont_t8_10  : public MonoBehaviour_t6_92
{
	// System.Single Pont::speed
	float ___speed_2;
	// ClockControl Pont::currenClock
	ClockControl_t8_4 * ___currenClock_3;
	// LevelControl Pont::control
	LevelControl_t8_9 * ___control_4;
	// UnityEngine.Animator Pont::longScore
	Animator_t6_151 * ___longScore_5;
	// UnityEngine.Animator Pont::quickScore
	Animator_t6_151 * ___quickScore_6;
	// SoundManager Pont::soungMana
	SoundManager_t8_12 * ___soungMana_7;
	// UnityEngine.Vector3 Pont::_axis
	Vector3_t6_44  ____axis_8;
	// UnityEngine.Transform Pont::_transform
	Transform_t6_70 * ____transform_9;
	// UnityEngine.Vector3 Pont::beforClock
	Vector3_t6_44  ___beforClock_10;
};
