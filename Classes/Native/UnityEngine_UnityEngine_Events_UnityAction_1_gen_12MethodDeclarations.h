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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t6_358;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m6_1947_gshared (UnityAction_1_t6_358 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m6_1947(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t6_358 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m6_1947_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m6_1948_gshared (UnityAction_1_t6_358 * __this, Vector2_t6_43  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m6_1948(__this, ___arg0, method) (( void (*) (UnityAction_1_t6_358 *, Vector2_t6_43 , const MethodInfo*))UnityAction_1_Invoke_m6_1948_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m6_1949_gshared (UnityAction_1_t6_358 * __this, Vector2_t6_43  ___arg0, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m6_1949(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t6_358 *, Vector2_t6_43 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m6_1949_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m6_1950_gshared (UnityAction_1_t6_358 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m6_1950(__this, ___result, method) (( void (*) (UnityAction_1_t6_358 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m6_1950_gshared)(__this, ___result, method)
