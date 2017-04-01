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

// UnityEngine.AsyncOperation
struct AsyncOperation_t6_2;
struct AsyncOperation_t6_2_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m6_548 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6_549 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m6_550 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m6_551 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AsyncOperation::get_progress()
extern "C" float AsyncOperation_get_progress_m6_552 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AsyncOperation::get_priority()
extern "C" int32_t AsyncOperation_get_priority_m6_553 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::set_priority(System.Int32)
extern "C" void AsyncOperation_set_priority_m6_554 (AsyncOperation_t6_2 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_allowSceneActivation()
extern "C" bool AsyncOperation_get_allowSceneActivation_m6_555 (AsyncOperation_t6_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
extern "C" void AsyncOperation_set_allowSceneActivation_m6_556 (AsyncOperation_t6_2 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t6_2_marshal(const AsyncOperation_t6_2& unmarshaled, AsyncOperation_t6_2_marshaled& marshaled);
extern "C" void AsyncOperation_t6_2_marshal_back(const AsyncOperation_t6_2_marshaled& marshaled, AsyncOperation_t6_2& unmarshaled);
extern "C" void AsyncOperation_t6_2_marshal_cleanup(AsyncOperation_t6_2_marshaled& marshaled);
