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

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1_660;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Text.Decoder
struct Decoder_t1_219;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C" void UnicodeEncoding__ctor_m1_4446 (UnicodeEncoding_t1_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UnicodeEncoding__ctor_m1_4447 (UnicodeEncoding_t1_660 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C" void UnicodeEncoding__ctor_m1_4448 (UnicodeEncoding_t1_660 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UnicodeEncoding_GetByteCount_m1_4449 (UnicodeEncoding_t1_660 * __this, CharU5BU5D_t1_16* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
extern "C" int32_t UnicodeEncoding_GetByteCount_m1_4450 (UnicodeEncoding_t1_660 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetByteCount_m1_4451 (UnicodeEncoding_t1_660 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m1_4452 (UnicodeEncoding_t1_660 * __this, CharU5BU5D_t1_16* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m1_4453 (UnicodeEncoding_t1_660 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m1_4454 (UnicodeEncoding_t1_660 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytesInternal_m1_4455 (UnicodeEncoding_t1_660 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnicodeEncoding_GetCharCount_m1_4456 (UnicodeEncoding_t1_660 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetChars_m1_4457 (UnicodeEncoding_t1_660 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1_16* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UnicodeEncoding_GetString_m1_4458 (UnicodeEncoding_t1_660 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetCharsInternal_m1_4459 (UnicodeEncoding_t1_660 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UnicodeEncoding_GetMaxByteCount_m1_4460 (UnicodeEncoding_t1_660 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UnicodeEncoding_GetMaxCharCount_m1_4461 (UnicodeEncoding_t1_660 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
extern "C" Decoder_t1_219 * UnicodeEncoding_GetDecoder_m1_4462 (UnicodeEncoding_t1_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
extern "C" ByteU5BU5D_t1_70* UnicodeEncoding_GetPreamble_m1_4463 (UnicodeEncoding_t1_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
extern "C" bool UnicodeEncoding_Equals_m1_4464 (UnicodeEncoding_t1_660 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
extern "C" int32_t UnicodeEncoding_GetHashCode_m1_4465 (UnicodeEncoding_t1_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
extern "C" void UnicodeEncoding_CopyChars_m1_4466 (Object_t * __this /* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
