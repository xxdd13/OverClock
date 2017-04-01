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

// LitJson.ImporterFunc
struct ImporterFunc_t5_10;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" void ImporterFunc__ctor_m5_84 (ImporterFunc_t5_10 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C" Object_t * ImporterFunc_Invoke_m5_85 (ImporterFunc_t5_10 * __this, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_ImporterFunc_t5_10(Il2CppObject* delegate, Object_t * ___input);
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ImporterFunc_BeginInvoke_m5_86 (ImporterFunc_t5_10 * __this, Object_t * ___input, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ImporterFunc_EndInvoke_m5_87 (ImporterFunc_t5_10 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
