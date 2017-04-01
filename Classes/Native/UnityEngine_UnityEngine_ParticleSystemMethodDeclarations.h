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

// UnityEngine.ParticleSystem
struct ParticleSystem_t6_120;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t6_119;
// UnityEngine.Transform
struct Transform_t6_70;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C" bool ParticleSystem_Internal_Play_m6_942 (Object_t * __this /* static, unused */, ParticleSystem_t6_120 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Stop(UnityEngine.ParticleSystem)
extern "C" bool ParticleSystem_Internal_Stop_m6_943 (Object_t * __this /* static, unused */, ParticleSystem_t6_120 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m6_944 (ParticleSystem_t6_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m6_945 (ParticleSystem_t6_120 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m6_946 (ParticleSystem_t6_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m6_947 (ParticleSystem_t6_120 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C" bool ParticleSystem_IterateParticleSystems_m6_948 (ParticleSystem_t6_120 * __this, bool ___recurse, IteratorDelegate_t6_119 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C" bool ParticleSystem_IterateParticleSystemsRecursive_m6_949 (Object_t * __this /* static, unused */, Transform_t6_70 * ___transform, IteratorDelegate_t6_119 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C" bool ParticleSystem_U3CPlayU3Em__1_m6_950 (Object_t * __this /* static, unused */, ParticleSystem_t6_120 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Stop>m__2(UnityEngine.ParticleSystem)
extern "C" bool ParticleSystem_U3CStopU3Em__2_m6_951 (Object_t * __this /* static, unused */, ParticleSystem_t6_120 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
