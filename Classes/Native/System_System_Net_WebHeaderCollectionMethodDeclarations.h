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

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_23;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2_10;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C" void WebHeaderCollection__ctor_m2_177 (WebHeaderCollection_t2_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection__ctor_m2_178 (WebHeaderCollection_t2_23 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_508  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C" void WebHeaderCollection__ctor_m2_179 (WebHeaderCollection_t2_23 * __this, bool ___internallyCreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C" void WebHeaderCollection__cctor_m2_180 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m2_181 (WebHeaderCollection_t2_23 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_508  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C" void WebHeaderCollection_Add_m2_182 (WebHeaderCollection_t2_23 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C" void WebHeaderCollection_AddWithoutValidate_m2_183 (WebHeaderCollection_t2_23 * __this, String_t* ___headerName, String_t* ___headerValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C" bool WebHeaderCollection_IsRestricted_m2_184 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C" void WebHeaderCollection_OnDeserialization_m2_185 (WebHeaderCollection_t2_23 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C" String_t* WebHeaderCollection_ToString_m2_186 (WebHeaderCollection_t2_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_GetObjectData_m2_187 (WebHeaderCollection_t2_23 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_508  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C" int32_t WebHeaderCollection_get_Count_m2_188 (WebHeaderCollection_t2_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C" KeysCollection_t2_10 * WebHeaderCollection_get_Keys_m2_189 (WebHeaderCollection_t2_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C" String_t* WebHeaderCollection_Get_m2_190 (WebHeaderCollection_t2_23 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C" String_t* WebHeaderCollection_GetKey_m2_191 (WebHeaderCollection_t2_23 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C" Object_t * WebHeaderCollection_GetEnumerator_m2_192 (WebHeaderCollection_t2_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C" bool WebHeaderCollection_IsHeaderValue_m2_193 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C" bool WebHeaderCollection_IsHeaderName_m2_194 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
