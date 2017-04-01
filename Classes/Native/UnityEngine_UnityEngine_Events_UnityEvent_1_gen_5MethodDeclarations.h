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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t6_312;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t6_358;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t6_260;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m6_1782_gshared (UnityEvent_1_t6_312 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m6_1782(__this, method) (( void (*) (UnityEvent_1_t6_312 *, const MethodInfo*))UnityEvent_1__ctor_m6_1782_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6_1942_gshared (UnityEvent_1_t6_312 * __this, UnityAction_1_t6_358 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m6_1942(__this, ___call, method) (( void (*) (UnityEvent_1_t6_312 *, UnityAction_1_t6_358 *, const MethodInfo*))UnityEvent_1_AddListener_m6_1942_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m6_1943_gshared (UnityEvent_1_t6_312 * __this, UnityAction_1_t6_358 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m6_1943(__this, ___call, method) (( void (*) (UnityEvent_1_t6_312 *, UnityAction_1_t6_358 *, const MethodInfo*))UnityEvent_1_RemoveListener_m6_1943_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6_1944_gshared (UnityEvent_1_t6_312 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6_1944(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6_312 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6_1944_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t6_260 * UnityEvent_1_GetDelegate_m6_1945_gshared (UnityEvent_1_t6_312 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6_1945(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t6_260 * (*) (UnityEvent_1_t6_312 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6_1945_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t6_260 * UnityEvent_1_GetDelegate_m6_1946_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6_358 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6_1946(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t6_260 * (*) (Object_t * /* static, unused */, UnityAction_1_t6_358 *, const MethodInfo*))UnityEvent_1_GetDelegate_m6_1946_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6_1784_gshared (UnityEvent_1_t6_312 * __this, Vector2_t6_43  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m6_1784(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6_312 *, Vector2_t6_43 , const MethodInfo*))UnityEvent_1_Invoke_m6_1784_gshared)(__this, ___arg0, method)
