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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkViewID.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// UnityEngine.NetworkViewID UnityEngine.NetworkViewID::get_unassigned()
extern "C" NetworkViewID_t6_58  NetworkViewID_get_unassigned_m6_395 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_get_unassigned(UnityEngine.NetworkViewID&)
extern "C" void NetworkViewID_INTERNAL_get_unassigned_m6_396 (Object_t * __this /* static, unused */, NetworkViewID_t6_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_IsMine(UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_Internal_IsMine_m6_397 (Object_t * __this /* static, unused */, NetworkViewID_t6_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_IsMine(UnityEngine.NetworkViewID&)
extern "C" bool NetworkViewID_INTERNAL_CALL_Internal_IsMine_m6_398 (Object_t * __this /* static, unused */, NetworkViewID_t6_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::Internal_GetOwner(UnityEngine.NetworkViewID,UnityEngine.NetworkPlayer&)
extern "C" void NetworkViewID_Internal_GetOwner_m6_399 (Object_t * __this /* static, unused */, NetworkViewID_t6_58  ___value, NetworkPlayer_t6_57 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetOwner(UnityEngine.NetworkViewID&,UnityEngine.NetworkPlayer&)
extern "C" void NetworkViewID_INTERNAL_CALL_Internal_GetOwner_m6_400 (Object_t * __this /* static, unused */, NetworkViewID_t6_58 * ___value, NetworkPlayer_t6_57 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::Internal_GetString(UnityEngine.NetworkViewID)
extern "C" String_t* NetworkViewID_Internal_GetString_m6_401 (Object_t * __this /* static, unused */, NetworkViewID_t6_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetString(UnityEngine.NetworkViewID&)
extern "C" String_t* NetworkViewID_INTERNAL_CALL_Internal_GetString_m6_402 (Object_t * __this /* static, unused */, NetworkViewID_t6_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_Compare(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_Internal_Compare_m6_403 (Object_t * __this /* static, unused */, NetworkViewID_t6_58  ___lhs, NetworkViewID_t6_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_Compare(UnityEngine.NetworkViewID&,UnityEngine.NetworkViewID&)
extern "C" bool NetworkViewID_INTERNAL_CALL_Internal_Compare_m6_404 (Object_t * __this /* static, unused */, NetworkViewID_t6_58 * ___lhs, NetworkViewID_t6_58 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkViewID::GetHashCode()
extern "C" int32_t NetworkViewID_GetHashCode_m6_405 (NetworkViewID_t6_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Equals(System.Object)
extern "C" bool NetworkViewID_Equals_m6_406 (NetworkViewID_t6_58 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::get_isMine()
extern "C" bool NetworkViewID_get_isMine_m6_407 (NetworkViewID_t6_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkViewID::get_owner()
extern "C" NetworkPlayer_t6_57  NetworkViewID_get_owner_m6_408 (NetworkViewID_t6_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::ToString()
extern "C" String_t* NetworkViewID_ToString_m6_409 (NetworkViewID_t6_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Equality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_op_Equality_m6_410 (Object_t * __this /* static, unused */, NetworkViewID_t6_58  ___lhs, NetworkViewID_t6_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Inequality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_op_Inequality_m6_411 (Object_t * __this /* static, unused */, NetworkViewID_t6_58  ___lhs, NetworkViewID_t6_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
