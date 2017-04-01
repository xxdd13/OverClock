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

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t1_585;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_541;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
extern "C" void RSAPKCS1SignatureFormatter__ctor_m1_3947 (RSAPKCS1SignatureFormatter_t1_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t1_70* RSAPKCS1SignatureFormatter_CreateSignature_m1_3948 (RSAPKCS1SignatureFormatter_t1_585 * __this, ByteU5BU5D_t1_70* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m1_3949 (RSAPKCS1SignatureFormatter_t1_585 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureFormatter_SetKey_m1_3950 (RSAPKCS1SignatureFormatter_t1_585 * __this, AsymmetricAlgorithm_t1_541 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
