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

// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t1_1267;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Comparison`1<LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_8682_gshared (Comparison_1_t1_1267 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_8682(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_1267 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_8682_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_8683_gshared (Comparison_1_t1_1267 * __this, PropertyMetadata_t5_5  ___x, PropertyMetadata_t5_5  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_8683(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_1267 *, PropertyMetadata_t5_5 , PropertyMetadata_t5_5 , const MethodInfo*))Comparison_1_Invoke_m1_8683_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<LitJson.PropertyMetadata>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_8684_gshared (Comparison_1_t1_1267 * __this, PropertyMetadata_t5_5  ___x, PropertyMetadata_t5_5  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_8684(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_1267 *, PropertyMetadata_t5_5 , PropertyMetadata_t5_5 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_8684_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_8685_gshared (Comparison_1_t1_1267 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_8685(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_1267 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_8685_gshared)(__this, ___result, method)
