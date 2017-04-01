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

// UnityEngine.Object
struct Object_t6_5;
struct Object_t6_5_marshaled;
// UnityEngine.Object[]
struct ObjectU5BU5D_t6_279;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_HideFlags.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m6_670 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t6_5 * Object_Internal_CloneSingle_m6_671 (Object_t * __this /* static, unused */, Object_t6_5 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t6_5 * Object_Internal_InstantiateSingle_m6_672 (Object_t * __this /* static, unused */, Object_t6_5 * ___data, Vector3_t6_44  ___pos, Quaternion_t6_46  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t6_5 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m6_673 (Object_t * __this /* static, unused */, Object_t6_5 * ___data, Vector3_t6_44 * ___pos, Quaternion_t6_46 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m6_674 (Object_t * __this /* static, unused */, Object_t6_5 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m6_675 (Object_t * __this /* static, unused */, Object_t6_5 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m6_676 (Object_t * __this /* static, unused */, Object_t6_5 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m6_677 (Object_t * __this /* static, unused */, Object_t6_5 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t6_279* Object_FindObjectsOfType_m6_678 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m6_679 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m6_680 (Object_t6_5 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m6_681 (Object_t * __this /* static, unused */, Object_t6_5 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
extern "C" int32_t Object_get_hideFlags_m6_682 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m6_683 (Object_t6_5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m6_684 (Object_t * __this /* static, unused */, Object_t6_5 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" void Object_DestroyObject_m6_685 (Object_t * __this /* static, unused */, Object_t6_5 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindSceneObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t6_279* Object_FindSceneObjectsOfType_m6_686 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfTypeIncludingAssets(System.Type)
extern "C" ObjectU5BU5D_t6_279* Object_FindObjectsOfTypeIncludingAssets_m6_687 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m6_688 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::DoesObjectWithInstanceIDExist(System.Int32)
extern "C" bool Object_DoesObjectWithInstanceIDExist_m6_689 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m6_690 (Object_t6_5 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m6_691 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m6_692 (Object_t * __this /* static, unused */, Object_t6_5 * ___lhs, Object_t6_5 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m6_693 (Object_t * __this /* static, unused */, Object_t6_5 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m6_694 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m6_695 (Object_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t6_5 * Object_Instantiate_m6_696 (Object_t * __this /* static, unused */, Object_t6_5 * ___original, Vector3_t6_44  ___position, Quaternion_t6_46  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C" Object_t6_5 * Object_Instantiate_m6_697 (Object_t * __this /* static, unused */, Object_t6_5 * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m6_698 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t6_5 * Object_FindObjectOfType_m6_699 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m6_700 (Object_t * __this /* static, unused */, Object_t6_5 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m6_701 (Object_t * __this /* static, unused */, Object_t6_5 * ___x, Object_t6_5 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m6_702 (Object_t * __this /* static, unused */, Object_t6_5 * ___x, Object_t6_5 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Object_t6_5_marshal(const Object_t6_5& unmarshaled, Object_t6_5_marshaled& marshaled);
extern "C" void Object_t6_5_marshal_back(const Object_t6_5_marshaled& marshaled, Object_t6_5& unmarshaled);
extern "C" void Object_t6_5_marshal_cleanup(Object_t6_5_marshaled& marshaled);
