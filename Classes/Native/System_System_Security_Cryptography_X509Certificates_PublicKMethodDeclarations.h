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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2_44;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3_0;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2_45;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_541;
// System.Security.Cryptography.Oid
struct Oid_t2_46;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Security.Cryptography.DSA
struct DSA_t1_105;
// System.Security.Cryptography.RSA
struct RSA_t1_117;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m2_214 (PublicKey_t2_44 * __this, X509Certificate_t3_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t2_45 * PublicKey_get_EncodedKeyValue_m2_215 (PublicKey_t2_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t2_45 * PublicKey_get_EncodedParameters_m2_216 (PublicKey_t2_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1_541 * PublicKey_get_Key_m2_217 (PublicKey_t2_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t2_46 * PublicKey_get_Oid_m2_218 (PublicKey_t2_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1_70* PublicKey_GetUnsignedBigInteger_m2_219 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1_105 * PublicKey_DecodeDSA_m2_220 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___rawPublicKey, ByteU5BU5D_t1_70* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1_117 * PublicKey_DecodeRSA_m2_221 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
