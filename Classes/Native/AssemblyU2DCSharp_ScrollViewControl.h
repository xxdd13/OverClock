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
// UnityEngine.RectTransform
struct RectTransform_t6_69;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ScrollViewControl
struct  ScrollViewControl_t8_16  : public MonoBehaviour_t6_92
{
	// System.Single ScrollViewControl::speedScroll
	float ___speedScroll_2;
	// GameManagerData ScrollViewControl::gameData
	GameManagerData_t8_2 * ___gameData_3;
	// UnityEngine.RectTransform ScrollViewControl::_rectTran
	RectTransform_t6_69 * ____rectTran_4;
	// UnityEngine.Vector3 ScrollViewControl::positionBegin
	Vector3_t6_44  ___positionBegin_5;
	// System.Single ScrollViewControl::beginMouse
	float ___beginMouse_6;
	// System.Int32 ScrollViewControl::delta
	int32_t ___delta_7;
	// UnityEngine.Vector3 ScrollViewControl::newPosition
	Vector3_t6_44  ___newPosition_8;
	// System.Boolean ScrollViewControl::move
	bool ___move_9;
};
