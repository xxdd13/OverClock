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

// UnityEngine.Collision
struct Collision_t6_124;
// UnityEngine.Rigidbody
struct Rigidbody_t6_125;
// UnityEngine.Collider
struct Collider_t6_123;
// UnityEngine.Transform
struct Transform_t6_70;
// UnityEngine.GameObject
struct GameObject_t6_99;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t6_126;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// UnityEngine.Component
struct Component_t6_25;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Collision::.ctor()
extern "C" void Collision__ctor_m6_964 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
extern "C" Vector3_t6_44  Collision_get_relativeVelocity_m6_965 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collision::get_rigidbody()
extern "C" Rigidbody_t6_125 * Collision_get_rigidbody_m6_966 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C" Collider_t6_123 * Collision_get_collider_m6_967 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
extern "C" Transform_t6_70 * Collision_get_transform_m6_968 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C" GameObject_t6_99 * Collision_get_gameObject_m6_969 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C" ContactPointU5BU5D_t6_126* Collision_get_contacts_m6_970 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Collision::GetEnumerator()
extern "C" Object_t * Collision_GetEnumerator_m6_971 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impulse()
extern "C" Vector3_t6_44  Collision_get_impulse_m6_972 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impactForceSum()
extern "C" Vector3_t6_44  Collision_get_impactForceSum_m6_973 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_frictionForceSum()
extern "C" Vector3_t6_44  Collision_get_frictionForceSum_m6_974 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Collision::get_other()
extern "C" Component_t6_25 * Collision_get_other_m6_975 (Collision_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
