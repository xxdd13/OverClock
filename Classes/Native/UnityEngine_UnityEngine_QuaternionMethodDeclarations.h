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
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m6_245 (Quaternion_t6_46 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m6_246 (Object_t * __this /* static, unused */, Quaternion_t6_46  ___a, Quaternion_t6_46  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t6_46  Quaternion_Inverse_m6_247 (Object_t * __this /* static, unused */, Quaternion_t6_46  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C" void Quaternion_INTERNAL_CALL_Inverse_m6_248 (Object_t * __this /* static, unused */, Quaternion_t6_46 * ___rotation, Quaternion_t6_46 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m6_249 (Quaternion_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t6_44  Quaternion_get_eulerAngles_m6_250 (Quaternion_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t6_46  Quaternion_Euler_m6_251 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t6_46  Quaternion_Euler_m6_252 (Object_t * __this /* static, unused */, Vector3_t6_44  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t6_44  Quaternion_Internal_ToEulerRad_m6_253 (Object_t * __this /* static, unused */, Quaternion_t6_46  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6_254 (Object_t * __this /* static, unused */, Quaternion_t6_46 * ___rotation, Vector3_t6_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t6_46  Quaternion_Internal_FromEulerRad_m6_255 (Object_t * __this /* static, unused */, Vector3_t6_44  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6_256 (Object_t * __this /* static, unused */, Vector3_t6_44 * ___euler, Quaternion_t6_46 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m6_257 (Quaternion_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m6_258 (Quaternion_t6_46 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t6_46  Quaternion_op_Multiply_m6_259 (Object_t * __this /* static, unused */, Quaternion_t6_46  ___lhs, Quaternion_t6_46  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t6_44  Quaternion_op_Multiply_m6_260 (Object_t * __this /* static, unused */, Quaternion_t6_46  ___rotation, Vector3_t6_44  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m6_261 (Object_t * __this /* static, unused */, Quaternion_t6_46  ___lhs, Quaternion_t6_46  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
