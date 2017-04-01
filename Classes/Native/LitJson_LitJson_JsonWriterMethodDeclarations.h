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

// LitJson.JsonWriter
struct JsonWriter_t5_9;
// System.IO.TextWriter
struct TextWriter_t1_252;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_Condition.h"
#include "mscorlib_System_Decimal.h"

// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C" TextWriter_t1_252 * JsonWriter_get_TextWriter_m5_138 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_Validate()
extern "C" bool JsonWriter_get_Validate_m5_139 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
extern "C" void JsonWriter_set_Validate_m5_140 (JsonWriter_t5_9 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.cctor()
extern "C" void JsonWriter__cctor_m5_141 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor()
extern "C" void JsonWriter__ctor_m5_142 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
extern "C" void JsonWriter__ctor_m5_143 (JsonWriter_t5_9 * __this, TextWriter_t1_252 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" void JsonWriter_DoValidation_m5_144 (JsonWriter_t5_9 * __this, int32_t ___cond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C" void JsonWriter_Init_m5_145 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C" void JsonWriter_IntToHex_m5_146 (Object_t * __this /* static, unused */, int32_t ___n, CharU5BU5D_t1_16* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
extern "C" void JsonWriter_Indent_m5_147 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" void JsonWriter_Put_m5_148 (JsonWriter_t5_9 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" void JsonWriter_PutNewline_m5_149 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" void JsonWriter_PutNewline_m5_150 (JsonWriter_t5_9 * __this, bool ___add_comma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" void JsonWriter_PutString_m5_151 (JsonWriter_t5_9 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Unindent()
extern "C" void JsonWriter_Unindent_m5_152 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C" String_t* JsonWriter_ToString_m5_153 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
extern "C" void JsonWriter_Reset_m5_154 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C" void JsonWriter_Write_m5_155 (JsonWriter_t5_9 * __this, bool ___boolean, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" void JsonWriter_Write_m5_156 (JsonWriter_t5_9 * __this, Decimal_t1_19  ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C" void JsonWriter_Write_m5_157 (JsonWriter_t5_9 * __this, double ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" void JsonWriter_Write_m5_158 (JsonWriter_t5_9 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C" void JsonWriter_Write_m5_159 (JsonWriter_t5_9 * __this, int64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" void JsonWriter_Write_m5_160 (JsonWriter_t5_9 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" void JsonWriter_Write_m5_161 (JsonWriter_t5_9 * __this, uint64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C" void JsonWriter_WriteArrayEnd_m5_162 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C" void JsonWriter_WriteArrayStart_m5_163 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C" void JsonWriter_WriteObjectEnd_m5_164 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C" void JsonWriter_WriteObjectStart_m5_165 (JsonWriter_t5_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C" void JsonWriter_WritePropertyName_m5_166 (JsonWriter_t5_9 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
