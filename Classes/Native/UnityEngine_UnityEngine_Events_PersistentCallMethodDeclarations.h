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

// UnityEngine.Events.PersistentCall
struct PersistentCall_t6_264;
// UnityEngine.Object
struct Object_t6_5;
struct Object_t6_5_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t6_259;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t6_260;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6_267;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m6_1651 (PersistentCall_t6_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t6_5 * PersistentCall_get_target_m6_1652 (PersistentCall_t6_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m6_1653 (PersistentCall_t6_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m6_1654 (PersistentCall_t6_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t6_259 * PersistentCall_get_arguments_m6_1655 (PersistentCall_t6_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m6_1656 (PersistentCall_t6_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t6_260 * PersistentCall_GetRuntimeCall_m6_1657 (PersistentCall_t6_264 * __this, UnityEventBase_t6_267 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t6_260 * PersistentCall_GetObjectCall_m6_1658 (Object_t * __this /* static, unused */, Object_t6_5 * ___target, MethodInfo_t * ___method, ArgumentCache_t6_259 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
