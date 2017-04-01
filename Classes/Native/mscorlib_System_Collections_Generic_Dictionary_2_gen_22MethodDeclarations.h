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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t1_1209;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t1_1612;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t1_1613;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_452;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t1_1212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7835_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7835(__this, method) (( void (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2__ctor_m1_7835_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7837_gshared (Dictionary_2_t1_1209 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7837(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7837_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7839_gshared (Dictionary_2_t1_1209 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7839(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1209 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7839_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7841_gshared (Dictionary_2_t1_1209 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7841(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1209 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2__ctor_m1_7841_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7843_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7843(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7843_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7845_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7845(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7845_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7847_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7847(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7847_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7849_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7849(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7849_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7851_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7851(__this, ___key, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7851_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7853_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7853(__this, method) (( bool (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7853_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7855_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7855(__this, method) (( Object_t * (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7855_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7857_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7857(__this, method) (( bool (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7857_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7859_gshared (Dictionary_2_t1_1209 * __this, KeyValuePair_2_t1_1202  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7859(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1209 *, KeyValuePair_2_t1_1202 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7859_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7861_gshared (Dictionary_2_t1_1209 * __this, KeyValuePair_2_t1_1202  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7861(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1209 *, KeyValuePair_2_t1_1202 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7861_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7863_gshared (Dictionary_2_t1_1209 * __this, KeyValuePair_2U5BU5D_t1_1612* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7863(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1209 *, KeyValuePair_2U5BU5D_t1_1612*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7863_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7865_gshared (Dictionary_2_t1_1209 * __this, KeyValuePair_2_t1_1202  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7865(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1209 *, KeyValuePair_2_t1_1202 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7865_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7867_gshared (Dictionary_2_t1_1209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7867(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1209 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7867_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7869_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7869(__this, method) (( Object_t * (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7869_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7871_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7871(__this, method) (( Object_t* (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7871_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7873_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7873(__this, method) (( Object_t * (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7873_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7875_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7875(__this, method) (( int32_t (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_get_Count_m1_7875_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t5_6  Dictionary_2_get_Item_m1_7877_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7877(__this, ___key, method) (( ArrayMetadata_t5_6  (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7879_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7879(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_set_Item_m1_7879_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7881_gshared (Dictionary_2_t1_1209 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7881(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1209 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7881_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7883_gshared (Dictionary_2_t1_1209 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7883(__this, ___size, method) (( void (*) (Dictionary_2_t1_1209 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7883_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7885_gshared (Dictionary_2_t1_1209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7885(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1209 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7885_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1202  Dictionary_2_make_pair_m1_7887_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7887(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1202  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_make_pair_m1_7887_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t5_6  Dictionary_2_pick_value_m1_7889_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7889(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t5_6  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_pick_value_m1_7889_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7891_gshared (Dictionary_2_t1_1209 * __this, KeyValuePair_2U5BU5D_t1_1612* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1209 *, KeyValuePair_2U5BU5D_t1_1612*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7891_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m1_7893_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7893(__this, method) (( void (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_Resize_m1_7893_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7895_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7895(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_Add_m1_7895_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m1_7897_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7897(__this, method) (( void (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_Clear_m1_7897_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7899_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7899(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7901_gshared (Dictionary_2_t1_1209 * __this, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7901(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1209 *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_ContainsValue_m1_7901_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7903_gshared (Dictionary_2_t1_1209 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7903(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1209 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7903_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7905_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7905(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7905_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7907_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7907(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7907_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7909_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, ArrayMetadata_t5_6 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7909(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1209 *, Object_t *, ArrayMetadata_t5_6 *, const MethodInfo*))Dictionary_2_TryGetValue_m1_7909_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t1_1212 * Dictionary_2_get_Values_m1_7911_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7911(__this, method) (( ValueCollection_t1_1212 * (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_get_Values_m1_7911_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7913_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7913(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7913_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t5_6  Dictionary_2_ToTValue_m1_7915_gshared (Dictionary_2_t1_1209 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7915(__this, ___value, method) (( ArrayMetadata_t5_6  (*) (Dictionary_2_t1_1209 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7915_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7917_gshared (Dictionary_2_t1_1209 * __this, KeyValuePair_2_t1_1202  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7917(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1209 *, KeyValuePair_2_t1_1202 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7917_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t1_1214  Dictionary_2_GetEnumerator_m1_7919_gshared (Dictionary_2_t1_1209 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7919(__this, method) (( Enumerator_t1_1214  (*) (Dictionary_2_t1_1209 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7919_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_7921_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7921(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7921_gshared)(__this /* static, unused */, ___key, ___value, method)
