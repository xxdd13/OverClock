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
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Void UnityEngine.NetworkPlayer::.ctor(System.String,System.Int32)
extern "C" void NetworkPlayer__ctor_m6_374 (NetworkPlayer_t6_57 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetIPAddress(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetIPAddress_m6_375 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPort(System.Int32)
extern "C" int32_t NetworkPlayer_Internal_GetPort_m6_376 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetExternalIP()
extern "C" String_t* NetworkPlayer_Internal_GetExternalIP_m6_377 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetExternalPort()
extern "C" int32_t NetworkPlayer_Internal_GetExternalPort_m6_378 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalIP()
extern "C" String_t* NetworkPlayer_Internal_GetLocalIP_m6_379 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetLocalPort()
extern "C" int32_t NetworkPlayer_Internal_GetLocalPort_m6_380 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPlayerIndex()
extern "C" int32_t NetworkPlayer_Internal_GetPlayerIndex_m6_381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetGUID(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetGUID_m6_382 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalGUID()
extern "C" String_t* NetworkPlayer_Internal_GetLocalGUID_m6_383 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::GetHashCode()
extern "C" int32_t NetworkPlayer_GetHashCode_m6_384 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::Equals(System.Object)
extern "C" bool NetworkPlayer_Equals_m6_385 (NetworkPlayer_t6_57 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_ipAddress()
extern "C" String_t* NetworkPlayer_get_ipAddress_m6_386 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_port()
extern "C" int32_t NetworkPlayer_get_port_m6_387 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_guid()
extern "C" String_t* NetworkPlayer_get_guid_m6_388 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::ToString()
extern "C" String_t* NetworkPlayer_ToString_m6_389 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_externalIP()
extern "C" String_t* NetworkPlayer_get_externalIP_m6_390 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_externalPort()
extern "C" int32_t NetworkPlayer_get_externalPort_m6_391 (NetworkPlayer_t6_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkPlayer::get_unassigned()
extern "C" NetworkPlayer_t6_57  NetworkPlayer_get_unassigned_m6_392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Equality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C" bool NetworkPlayer_op_Equality_m6_393 (Object_t * __this /* static, unused */, NetworkPlayer_t6_57  ___lhs, NetworkPlayer_t6_57  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Inequality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C" bool NetworkPlayer_op_Inequality_m6_394 (Object_t * __this /* static, unused */, NetworkPlayer_t6_57  ___lhs, NetworkPlayer_t6_57  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
