﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t6_183;
// UnityEngineInternal.GenericStack
struct GenericStack_t6_184;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// UnityEngine.GUI
struct  GUI_t6_182  : public Object_t
{
};
struct GUI_t6_182_StaticFields{
	// System.Single UnityEngine.GUI::s_ScrollStepSize
	float ___s_ScrollStepSize_0;
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_1;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t6_183 * ___s_Skin_9;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t6_184 * ___s_ScrollViewStates_10;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t1_126  ___U3CnextScrollStepTimeU3Ek__BackingField_11;
};
