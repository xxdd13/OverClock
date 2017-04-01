#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t7_5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t7_2;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t7_4;
// UnityEngine.GameObject
struct GameObject_t6_99;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m7_120 (BaseEventData_t7_5 * __this, EventSystem_t7_2 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t7_4 * BaseEventData_get_currentInputModule_m7_121 (BaseEventData_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t6_99 * BaseEventData_get_selectedObject_m7_122 (BaseEventData_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m7_123 (BaseEventData_t7_5 * __this, GameObject_t6_99 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
