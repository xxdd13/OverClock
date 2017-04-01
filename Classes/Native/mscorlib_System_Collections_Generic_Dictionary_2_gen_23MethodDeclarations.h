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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1_1230;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t1_1619;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t1_1620;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_452;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t1_1233;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m1_8108_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8108(__this, method) (( void (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2__ctor_m1_8108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_8110_gshared (Dictionary_2_t1_1230 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8110(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_8110_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_8112_gshared (Dictionary_2_t1_1230 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8112(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1230 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_8112_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_8114_gshared (Dictionary_2_t1_1230 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8114(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1230 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2__ctor_m1_8114_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_8116_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_8116(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_8116_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_8118_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_8118(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_8118_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_8120_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_8120(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_8120_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_8122_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_8122(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_8122_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_8124_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_8124(__this, ___key, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_8124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8126_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8126(__this, method) (( bool (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8126_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8128_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8128(__this, method) (( Object_t * (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8128_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8130_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8130(__this, method) (( bool (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8130_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8132_gshared (Dictionary_2_t1_1230 * __this, KeyValuePair_2_t1_1204  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8132(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1230 *, KeyValuePair_2_t1_1204 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8132_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8134_gshared (Dictionary_2_t1_1230 * __this, KeyValuePair_2_t1_1204  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8134(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1230 *, KeyValuePair_2_t1_1204 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8134_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8136_gshared (Dictionary_2_t1_1230 * __this, KeyValuePair_2U5BU5D_t1_1619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8136(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1230 *, KeyValuePair_2U5BU5D_t1_1619*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8136_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8138_gshared (Dictionary_2_t1_1230 * __this, KeyValuePair_2_t1_1204  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8138(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1230 *, KeyValuePair_2_t1_1204 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8138_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_8140_gshared (Dictionary_2_t1_1230 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_8140(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1230 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_8140_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8142_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8142(__this, method) (( Object_t * (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8142_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8144_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8144(__this, method) (( Object_t* (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8144_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8146_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8146(__this, method) (( Object_t * (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8146_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_8148_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_8148(__this, method) (( int32_t (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_get_Count_m1_8148_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t5_7  Dictionary_2_get_Item_m1_8150_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_8150(__this, ___key, method) (( ObjectMetadata_t5_7  (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_8150_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_8152_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, ObjectMetadata_t5_7  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_8152(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t *, ObjectMetadata_t5_7 , const MethodInfo*))Dictionary_2_set_Item_m1_8152_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_8154_gshared (Dictionary_2_t1_1230 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_8154(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1230 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_8154_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_8156_gshared (Dictionary_2_t1_1230 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_8156(__this, ___size, method) (( void (*) (Dictionary_2_t1_1230 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_8156_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_8158_gshared (Dictionary_2_t1_1230 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_8158(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1230 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_8158_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1204  Dictionary_2_make_pair_m1_8160_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t5_7  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_8160(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1204  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t5_7 , const MethodInfo*))Dictionary_2_make_pair_m1_8160_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t5_7  Dictionary_2_pick_value_m1_8162_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t5_7  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_8162(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t5_7  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t5_7 , const MethodInfo*))Dictionary_2_pick_value_m1_8162_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_8164_gshared (Dictionary_2_t1_1230 * __this, KeyValuePair_2U5BU5D_t1_1619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_8164(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1230 *, KeyValuePair_2U5BU5D_t1_1619*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_8164_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m1_8166_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_8166(__this, method) (( void (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_Resize_m1_8166_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_8168_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, ObjectMetadata_t5_7  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_8168(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t *, ObjectMetadata_t5_7 , const MethodInfo*))Dictionary_2_Add_m1_8168_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m1_8170_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_8170(__this, method) (( void (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_Clear_m1_8170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_8172_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_8172(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_8172_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_8174_gshared (Dictionary_2_t1_1230 * __this, ObjectMetadata_t5_7  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_8174(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1230 *, ObjectMetadata_t5_7 , const MethodInfo*))Dictionary_2_ContainsValue_m1_8174_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_8176_gshared (Dictionary_2_t1_1230 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_8176(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1230 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2_GetObjectData_m1_8176_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_8178_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_8178(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_8178_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_8180_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_8180(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_8180_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_8182_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, ObjectMetadata_t5_7 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_8182(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1230 *, Object_t *, ObjectMetadata_t5_7 *, const MethodInfo*))Dictionary_2_TryGetValue_m1_8182_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t1_1233 * Dictionary_2_get_Values_m1_8184_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_8184(__this, method) (( ValueCollection_t1_1233 * (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_get_Values_m1_8184_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_8186_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_8186(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_8186_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t5_7  Dictionary_2_ToTValue_m1_8188_gshared (Dictionary_2_t1_1230 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_8188(__this, ___value, method) (( ObjectMetadata_t5_7  (*) (Dictionary_2_t1_1230 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_8188_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_8190_gshared (Dictionary_2_t1_1230 * __this, KeyValuePair_2_t1_1204  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_8190(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1230 *, KeyValuePair_2_t1_1204 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_8190_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t1_1235  Dictionary_2_GetEnumerator_m1_8192_gshared (Dictionary_2_t1_1230 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_8192(__this, method) (( Enumerator_t1_1235  (*) (Dictionary_2_t1_1230 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_8192_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_8194_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t5_7  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_8194(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t5_7 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_8194_gshared)(__this /* static, unused */, ___key, ___value, method)
