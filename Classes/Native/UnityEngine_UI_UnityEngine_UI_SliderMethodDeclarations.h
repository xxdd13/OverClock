﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Slider
struct Slider_t7_126;
// UnityEngine.RectTransform
struct RectTransform_t6_69;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t7_124;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t7_37;
// UnityEngine.Camera
struct Camera_t6_85;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t7_33;
// UnityEngine.UI.Selectable
struct Selectable_t7_56;
// UnityEngine.Transform
struct Transform_t6_70;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C" void Slider__ctor_m7_1040 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C" RectTransform_t6_69 * Slider_get_fillRect_m7_1041 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C" void Slider_set_fillRect_m7_1042 (Slider_t7_126 * __this, RectTransform_t6_69 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C" RectTransform_t6_69 * Slider_get_handleRect_m7_1043 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C" void Slider_set_handleRect_m7_1044 (Slider_t7_126 * __this, RectTransform_t6_69 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C" int32_t Slider_get_direction_m7_1045 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C" void Slider_set_direction_m7_1046 (Slider_t7_126 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C" float Slider_get_minValue_m7_1047 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C" void Slider_set_minValue_m7_1048 (Slider_t7_126 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C" float Slider_get_maxValue_m7_1049 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C" void Slider_set_maxValue_m7_1050 (Slider_t7_126 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C" bool Slider_get_wholeNumbers_m7_1051 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C" void Slider_set_wholeNumbers_m7_1052 (Slider_t7_126 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C" float Slider_get_value_m7_1053 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C" void Slider_set_value_m7_1054 (Slider_t7_126 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C" float Slider_get_normalizedValue_m7_1055 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C" void Slider_set_normalizedValue_m7_1056 (Slider_t7_126 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C" SliderEvent_t7_124 * Slider_get_onValueChanged_m7_1057 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C" void Slider_set_onValueChanged_m7_1058 (Slider_t7_126 * __this, SliderEvent_t7_124 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C" float Slider_get_stepSize_m7_1059 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Slider_Rebuild_m7_1060 (Slider_t7_126 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::LayoutComplete()
extern "C" void Slider_LayoutComplete_m7_1061 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::GraphicUpdateComplete()
extern "C" void Slider_GraphicUpdateComplete_m7_1062 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C" void Slider_OnEnable_m7_1063 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C" void Slider_OnDisable_m7_1064 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDidApplyAnimationProperties()
extern "C" void Slider_OnDidApplyAnimationProperties_m7_1065 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C" void Slider_UpdateCachedReferences_m7_1066 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::ClampValue(System.Single)
extern "C" float Slider_ClampValue_m7_1067 (Slider_t7_126 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C" void Slider_Set_m7_1068 (Slider_t7_126 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C" void Slider_Set_m7_1069 (Slider_t7_126 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C" void Slider_OnRectTransformDimensionsChange_m7_1070 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C" int32_t Slider_get_axis_m7_1071 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C" bool Slider_get_reverseValue_m7_1072 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C" void Slider_UpdateVisuals_m7_1073 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C" void Slider_UpdateDrag_m7_1074 (Slider_t7_126 * __this, PointerEventData_t7_37 * ___eventData, Camera_t6_85 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Slider_MayDrag_m7_1075 (Slider_t7_126 * __this, PointerEventData_t7_37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnPointerDown_m7_1076 (Slider_t7_126 * __this, PointerEventData_t7_37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnDrag_m7_1077 (Slider_t7_126 * __this, PointerEventData_t7_37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Slider_OnMove_m7_1078 (Slider_t7_126 * __this, AxisEventData_t7_33 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C" Selectable_t7_56 * Slider_FindSelectableOnLeft_m7_1079 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C" Selectable_t7_56 * Slider_FindSelectableOnRight_m7_1080 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C" Selectable_t7_56 * Slider_FindSelectableOnUp_m7_1081 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C" Selectable_t7_56 * Slider_FindSelectableOnDown_m7_1082 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnInitializePotentialDrag_m7_1083 (Slider_t7_126 * __this, PointerEventData_t7_37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C" void Slider_SetDirection_m7_1084 (Slider_t7_126 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m7_1085 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t6_70 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m7_1086 (Slider_t7_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
