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

// LitJson.JsonData
struct JsonData_t5_2;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_452;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// LitJson.JsonWriter
struct JsonWriter_t5_9;
// System.Collections.ICollection
struct ICollection_t1_805;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.Collections.IList
struct IList_t1_411;
// LitJson.IJsonWrapper
struct IJsonWrapper_t5_12;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_JsonType.h"

// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C" int32_t JsonData_System_Collections_ICollection_get_Count_m5_0 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool JsonData_System_Collections_ICollection_get_IsSynchronized_m5_1 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m5_2 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsArray_m5_3 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m5_4 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m5_5 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsInt_m5_6 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsLong_m5_7 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsObject_m5_8 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsString_m5_9 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C" bool JsonData_System_Collections_IList_get_IsFixedSize_m5_10 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C" bool JsonData_System_Collections_IList_get_IsReadOnly_m5_11 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Item_m5_12 (JsonData_t5_2 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void JsonData_System_Collections_IDictionary_set_Item_m5_13 (JsonData_t5_2 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * JsonData_System_Collections_IList_get_Item_m5_14 (JsonData_t5_2 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_set_Item_m5_15 (JsonData_t5_2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
extern "C" int32_t JsonData_get_Count_m5_16 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
extern "C" bool JsonData_get_IsArray_m5_17 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
extern "C" bool JsonData_get_IsBoolean_m5_18 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
extern "C" bool JsonData_get_IsDouble_m5_19 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
extern "C" bool JsonData_get_IsInt_m5_20 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
extern "C" bool JsonData_get_IsLong_m5_21 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
extern "C" bool JsonData_get_IsObject_m5_22 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
extern "C" bool JsonData_get_IsString_m5_23 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C" JsonData_t5_2 * JsonData_get_Item_m5_24 (JsonData_t5_2 * __this, String_t* ___prop_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C" void JsonData_set_Item_m5_25 (JsonData_t5_2 * __this, String_t* ___prop_name, JsonData_t5_2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern "C" JsonData_t5_2 * JsonData_get_Item_m5_26 (JsonData_t5_2 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C" void JsonData_set_Item_m5_27 (JsonData_t5_2 * __this, int32_t ___index, JsonData_t5_2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor()
extern "C" void JsonData__ctor_m5_28 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C" void JsonData__ctor_m5_29 (JsonData_t5_2 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
extern "C" void JsonData__ctor_m5_30 (JsonData_t5_2 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
extern "C" JsonData_t5_2 * JsonData_op_Implicit_m5_31 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" int32_t JsonData_op_Explicit_m5_32 (Object_t * __this /* static, unused */, JsonData_t5_2 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void JsonData_System_Collections_ICollection_CopyTo_m5_33 (JsonData_t5_2 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void JsonData_System_Collections_IDictionary_Add_m5_34 (JsonData_t5_2 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool JsonData_System_Collections_IDictionary_Contains_m5_35 (JsonData_t5_2 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m5_36 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern "C" void JsonData_System_Collections_IDictionary_Remove_m5_37 (JsonData_t5_2 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m5_38 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
extern "C" bool JsonData_LitJson_IJsonWrapper_GetBoolean_m5_39 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
extern "C" double JsonData_LitJson_IJsonWrapper_GetDouble_m5_40 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
extern "C" int32_t JsonData_LitJson_IJsonWrapper_GetInt_m5_41 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
extern "C" int64_t JsonData_LitJson_IJsonWrapper_GetLong_m5_42 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
extern "C" String_t* JsonData_LitJson_IJsonWrapper_GetString_m5_43 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C" void JsonData_LitJson_IJsonWrapper_SetBoolean_m5_44 (JsonData_t5_2 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C" void JsonData_LitJson_IJsonWrapper_SetDouble_m5_45 (JsonData_t5_2 * __this, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C" void JsonData_LitJson_IJsonWrapper_SetInt_m5_46 (JsonData_t5_2 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C" void JsonData_LitJson_IJsonWrapper_SetLong_m5_47 (JsonData_t5_2 * __this, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C" void JsonData_LitJson_IJsonWrapper_SetString_m5_48 (JsonData_t5_2 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
extern "C" String_t* JsonData_LitJson_IJsonWrapper_ToJson_m5_49 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
extern "C" void JsonData_LitJson_IJsonWrapper_ToJson_m5_50 (JsonData_t5_2 * __this, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_Add_m5_51 (JsonData_t5_2 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C" void JsonData_System_Collections_IList_Clear_m5_52 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C" bool JsonData_System_Collections_IList_Contains_m5_53 (JsonData_t5_2 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_IndexOf_m5_54 (JsonData_t5_2 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_Insert_m5_55 (JsonData_t5_2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C" void JsonData_System_Collections_IList_Remove_m5_56 (JsonData_t5_2 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void JsonData_System_Collections_IList_RemoveAt_m5_57 (JsonData_t5_2 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m5_58 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C" Object_t * JsonData_EnsureCollection_m5_59 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C" Object_t * JsonData_EnsureDictionary_m5_60 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C" Object_t * JsonData_EnsureList_m5_61 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C" JsonData_t5_2 * JsonData_ToJsonData_m5_62 (JsonData_t5_2 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
extern "C" void JsonData_WriteJson_m5_63 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C" int32_t JsonData_Add_m5_64 (JsonData_t5_2 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C" bool JsonData_Equals_m5_65 (JsonData_t5_2 * __this, JsonData_t5_2 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C" void JsonData_SetJsonType_m5_66 (JsonData_t5_2 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
extern "C" String_t* JsonData_ToJson_m5_67 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
extern "C" void JsonData_ToJson_m5_68 (JsonData_t5_2 * __this, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
extern "C" String_t* JsonData_ToString_m5_69 (JsonData_t5_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
