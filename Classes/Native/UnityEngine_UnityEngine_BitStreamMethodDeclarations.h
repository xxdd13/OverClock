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

// UnityEngine.BitStream
struct BitStream_t6_60;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_NetworkViewID.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Void UnityEngine.BitStream::.ctor()
extern "C" void BitStream__ctor_m6_414 (BitStream_t6_60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeb(System.Int32&)
extern "C" void BitStream_Serializeb_m6_415 (BitStream_t6_60 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializec(System.Char&)
extern "C" void BitStream_Serializec_m6_416 (BitStream_t6_60 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializes(System.Int16&)
extern "C" void BitStream_Serializes_m6_417 (BitStream_t6_60 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializei(System.Int32&)
extern "C" void BitStream_Serializei_m6_418 (BitStream_t6_60 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializef(System.Single&,System.Single)
extern "C" void BitStream_Serializef_m6_419 (BitStream_t6_60 * __this, float* ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeq(UnityEngine.Quaternion&,System.Single)
extern "C" void BitStream_Serializeq_m6_420 (BitStream_t6_60 * __this, Quaternion_t6_46 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializeq(UnityEngine.BitStream,UnityEngine.Quaternion&,System.Single)
extern "C" void BitStream_INTERNAL_CALL_Serializeq_m6_421 (Object_t * __this /* static, unused */, BitStream_t6_60 * ___self, Quaternion_t6_46 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializev(UnityEngine.Vector3&,System.Single)
extern "C" void BitStream_Serializev_m6_422 (BitStream_t6_60 * __this, Vector3_t6_44 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializev(UnityEngine.BitStream,UnityEngine.Vector3&,System.Single)
extern "C" void BitStream_INTERNAL_CALL_Serializev_m6_423 (Object_t * __this /* static, unused */, BitStream_t6_60 * ___self, Vector3_t6_44 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializen(UnityEngine.NetworkViewID&)
extern "C" void BitStream_Serializen_m6_424 (BitStream_t6_60 * __this, NetworkViewID_t6_58 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializen(UnityEngine.BitStream,UnityEngine.NetworkViewID&)
extern "C" void BitStream_INTERNAL_CALL_Serializen_m6_425 (Object_t * __this /* static, unused */, BitStream_t6_60 * ___self, NetworkViewID_t6_58 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Boolean&)
extern "C" void BitStream_Serialize_m6_426 (BitStream_t6_60 * __this, bool* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Char&)
extern "C" void BitStream_Serialize_m6_427 (BitStream_t6_60 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int16&)
extern "C" void BitStream_Serialize_m6_428 (BitStream_t6_60 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int32&)
extern "C" void BitStream_Serialize_m6_429 (BitStream_t6_60 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&)
extern "C" void BitStream_Serialize_m6_430 (BitStream_t6_60 * __this, float* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&,System.Single)
extern "C" void BitStream_Serialize_m6_431 (BitStream_t6_60 * __this, float* ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&)
extern "C" void BitStream_Serialize_m6_432 (BitStream_t6_60 * __this, Quaternion_t6_46 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&,System.Single)
extern "C" void BitStream_Serialize_m6_433 (BitStream_t6_60 * __this, Quaternion_t6_46 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&)
extern "C" void BitStream_Serialize_m6_434 (BitStream_t6_60 * __this, Vector3_t6_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&,System.Single)
extern "C" void BitStream_Serialize_m6_435 (BitStream_t6_60 * __this, Vector3_t6_44 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkPlayer&)
extern "C" void BitStream_Serialize_m6_436 (BitStream_t6_60 * __this, NetworkPlayer_t6_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkViewID&)
extern "C" void BitStream_Serialize_m6_437 (BitStream_t6_60 * __this, NetworkViewID_t6_58 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isReading()
extern "C" bool BitStream_get_isReading_m6_438 (BitStream_t6_60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isWriting()
extern "C" bool BitStream_get_isWriting_m6_439 (BitStream_t6_60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.String&)
extern "C" void BitStream_Serialize_m6_440 (BitStream_t6_60 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
