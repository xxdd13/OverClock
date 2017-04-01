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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t6_92;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t6_14;
struct Coroutine_t6_14_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m6_627 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
extern "C" void MonoBehaviour_Internal_CancelInvokeAll_m6_628 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll()
extern "C" bool MonoBehaviour_Internal_IsInvokingAll_m6_629 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m6_630 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" void MonoBehaviour_InvokeRepeating_m6_631 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, float ___time, float ___repeatRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C" void MonoBehaviour_CancelInvoke_m6_632 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" void MonoBehaviour_CancelInvoke_m6_633 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking(System.String)
extern "C" bool MonoBehaviour_IsInvoking_m6_634 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking()
extern "C" bool MonoBehaviour_IsInvoking_m6_635 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t6_14 * MonoBehaviour_StartCoroutine_m6_636 (MonoBehaviour_t6_92 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t6_14 * MonoBehaviour_StartCoroutine_Auto_m6_637 (MonoBehaviour_t6_92 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t6_14 * MonoBehaviour_StartCoroutine_m6_638 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" Coroutine_t6_14 * MonoBehaviour_StartCoroutine_m6_639 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C" void MonoBehaviour_StopCoroutine_m6_640 (MonoBehaviour_t6_92 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m6_641 (MonoBehaviour_t6_92 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m6_642 (MonoBehaviour_t6_92 * __this, Coroutine_t6_14 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6_643 (MonoBehaviour_t6_92 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m6_644 (MonoBehaviour_t6_92 * __this, Coroutine_t6_14 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C" void MonoBehaviour_StopAllCoroutines_m6_645 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m6_646 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
extern "C" bool MonoBehaviour_get_useGUILayout_m6_647 (MonoBehaviour_t6_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
extern "C" void MonoBehaviour_set_useGUILayout_m6_648 (MonoBehaviour_t6_92 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
