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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1_1191;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_7651_gshared (Comparison_1_t1_1191 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_7651(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_1191 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_7651_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_7652_gshared (Comparison_1_t1_1191 * __this, KeyValuePair_2_t1_1061  ___x, KeyValuePair_2_t1_1061  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_7652(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_1191 *, KeyValuePair_2_t1_1061 , KeyValuePair_2_t1_1061 , const MethodInfo*))Comparison_1_Invoke_m1_7652_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_7653_gshared (Comparison_1_t1_1191 * __this, KeyValuePair_2_t1_1061  ___x, KeyValuePair_2_t1_1061  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_7653(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_1191 *, KeyValuePair_2_t1_1061 , KeyValuePair_2_t1_1061 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_7653_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_7654_gshared (Comparison_1_t1_1191 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_7654(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_1191 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_7654_gshared)(__this, ___result, method)
