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

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1_584;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_541;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_70;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m1_3942 (RSAPKCS1SignatureDeformatter_t1_584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m1_3943 (RSAPKCS1SignatureDeformatter_t1_584 * __this, AsymmetricAlgorithm_t1_541 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m1_3944 (RSAPKCS1SignatureDeformatter_t1_584 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m1_3945 (RSAPKCS1SignatureDeformatter_t1_584 * __this, AsymmetricAlgorithm_t1_541 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m1_3946 (RSAPKCS1SignatureDeformatter_t1_584 * __this, ByteU5BU5D_t1_70* ___rgbHash, ByteU5BU5D_t1_70* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
