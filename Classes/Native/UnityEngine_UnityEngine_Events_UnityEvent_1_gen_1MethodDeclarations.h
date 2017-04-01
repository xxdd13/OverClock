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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t6_307;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t6_316;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t6_260;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m6_1735_gshared (UnityEvent_1_t6_307 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m6_1735(__this, method) (( void (*) (UnityEvent_1_t6_307 *, const MethodInfo*))UnityEvent_1__ctor_m6_1735_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6_1737_gshared (UnityEvent_1_t6_307 * __this, UnityAction_1_t6_316 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m6_1737(__this, ___call, method) (( void (*) (UnityEvent_1_t6_307 *, UnityAction_1_t6_316 *, const MethodInfo*))UnityEvent_1_AddListener_m6_1737_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m6_1783_gshared (UnityEvent_1_t6_307 * __this, UnityAction_1_t6_316 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m6_1783(__this, ___call, method) (( void (*) (UnityEvent_1_t6_307 *, UnityAction_1_t6_316 *, const MethodInfo*))UnityEvent_1_RemoveListener_m6_1783_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6_1917_gshared (UnityEvent_1_t6_307 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6_1917(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6_307 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6_1917_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t6_260 * UnityEvent_1_GetDelegate_m6_1918_gshared (UnityEvent_1_t6_307 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6_1918(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t6_260 * (*) (UnityEvent_1_t6_307 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6_1918_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t6_260 * UnityEvent_1_GetDelegate_m6_1919_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6_316 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6_1919(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t6_260 * (*) (Object_t * /* static, unused */, UnityAction_1_t6_316 *, const MethodInfo*))UnityEvent_1_GetDelegate_m6_1919_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6_1736_gshared (UnityEvent_1_t6_307 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m6_1736(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6_307 *, float, const MethodInfo*))UnityEvent_1_Invoke_m6_1736_gshared)(__this, ___arg0, method)
