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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1277;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1276;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1632;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1633;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_452;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1279;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_8779_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8779(__this, method) (( void (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2__ctor_m1_8779_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_8781_gshared (Dictionary_2_t1_1277 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8781(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1277 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_8781_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_8783_gshared (Dictionary_2_t1_1277 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8783(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1277 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_8783_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_8785_gshared (Dictionary_2_t1_1277 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8785(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1277 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2__ctor_m1_8785_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_8787_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_8787(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_8787_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_8789_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_8789(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1277 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_8789_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_8791_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_8791(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1277 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_8791_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_8793_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_8793(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_8793_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_8795_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_8795(__this, ___key, method) (( void (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_8795_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8797_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8797(__this, method) (( bool (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8799_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8799(__this, method) (( Object_t * (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8801_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8801(__this, method) (( bool (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8803_gshared (Dictionary_2_t1_1277 * __this, KeyValuePair_2_t1_1272  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8803(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1277 *, KeyValuePair_2_t1_1272 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8803_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8805_gshared (Dictionary_2_t1_1277 * __this, KeyValuePair_2_t1_1272  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8805(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1277 *, KeyValuePair_2_t1_1272 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8805_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8807_gshared (Dictionary_2_t1_1277 * __this, KeyValuePair_2U5BU5D_t1_1632* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8807(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1277 *, KeyValuePair_2U5BU5D_t1_1632*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8807_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8809_gshared (Dictionary_2_t1_1277 * __this, KeyValuePair_2_t1_1272  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8809(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1277 *, KeyValuePair_2_t1_1272 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_8811_gshared (Dictionary_2_t1_1277 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_8811(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1277 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_8811_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8813_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8813(__this, method) (( Object_t * (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8813_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8815_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8815(__this, method) (( Object_t* (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8815_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8817_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8817(__this, method) (( Object_t * (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_8819_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_8819(__this, method) (( int32_t (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_get_Count_m1_8819_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_8821_gshared (Dictionary_2_t1_1277 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_8821(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1277 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_8821_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_8823_gshared (Dictionary_2_t1_1277 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_8823(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1277 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_8823_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_8825_gshared (Dictionary_2_t1_1277 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_8825(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1277 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_8825_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_8827_gshared (Dictionary_2_t1_1277 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_8827(__this, ___size, method) (( void (*) (Dictionary_2_t1_1277 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_8827_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_8829_gshared (Dictionary_2_t1_1277 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_8829(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1277 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_8829_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1272  Dictionary_2_make_pair_m1_8831_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_8831(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1272  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_8831_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_8833_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_8833(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_8833_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_8835_gshared (Dictionary_2_t1_1277 * __this, KeyValuePair_2U5BU5D_t1_1632* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_8835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1277 *, KeyValuePair_2U5BU5D_t1_1632*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_8835_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_8837_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_8837(__this, method) (( void (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_Resize_m1_8837_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_8839_gshared (Dictionary_2_t1_1277 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_8839(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1277 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_8839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_8841_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_8841(__this, method) (( void (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_Clear_m1_8841_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_8843_gshared (Dictionary_2_t1_1277 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_8843(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1277 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_8843_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_8845_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_8845(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_8845_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_8847_gshared (Dictionary_2_t1_1277 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_8847(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1277 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2_GetObjectData_m1_8847_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_8849_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_8849(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_8849_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_8851_gshared (Dictionary_2_t1_1277 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_8851(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1277 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_8851_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_8853_gshared (Dictionary_2_t1_1277 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_8853(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1277 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_8853_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1279 * Dictionary_2_get_Values_m1_8855_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_8855(__this, method) (( ValueCollection_t1_1279 * (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_get_Values_m1_8855_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_8857_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_8857(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_8857_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_8859_gshared (Dictionary_2_t1_1277 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_8859(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1277 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_8859_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_8861_gshared (Dictionary_2_t1_1277 * __this, KeyValuePair_2_t1_1272  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_8861(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1277 *, KeyValuePair_2_t1_1272 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_8861_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1281  Dictionary_2_GetEnumerator_m1_8863_gshared (Dictionary_2_t1_1277 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_8863(__this, method) (( Enumerator_t1_1281  (*) (Dictionary_2_t1_1277 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_8863_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_8865_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_8865(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_8865_gshared)(__this /* static, unused */, ___key, ___value, method)
