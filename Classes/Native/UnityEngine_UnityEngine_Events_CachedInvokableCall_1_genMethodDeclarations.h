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

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t6_299;
// UnityEngine.Object
struct Object_t6_5;
struct Object_t6_5_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6_1720_gshared (CachedInvokableCall_1_t6_299 * __this, Object_t6_5 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6_1720(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t6_299 *, Object_t6_5 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m6_1720_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m6_1840_gshared (CachedInvokableCall_1_t6_299 * __this, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m6_1840(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t6_299 *, ObjectU5BU5D_t1_156*, const MethodInfo*))CachedInvokableCall_1_Invoke_m6_1840_gshared)(__this, ___args, method)
