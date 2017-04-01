#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ColorClockData
struct ColorClockData_t8_3;
// UnityEngine.Animator
struct Animator_t6_151;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ClockControl
struct  ClockControl_t8_4  : public MonoBehaviour_t6_92
{
	// System.Single ClockControl::speed
	float ___speed_2;
	// ColorClockData ClockControl::clockData
	ColorClockData_t8_3 * ___clockData_3;
	// UnityEngine.Vector2 ClockControl::randomSpeed
	Vector2_t6_43  ___randomSpeed_4;
	// UnityEngine.Vector2 ClockControl::randomScale
	Vector2_t6_43  ___randomScale_5;
	// UnityEngine.Vector3 ClockControl::scaleBegin
	Vector3_t6_44  ___scaleBegin_6;
	// System.Single ClockControl::_speed
	float ____speed_7;
	// UnityEngine.Animator ClockControl::anima
	Animator_t6_151 * ___anima_8;
};
