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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1147;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_1604;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_1605;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_452;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7123_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7123(__this, method) (( void (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2__ctor_m1_7123_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7124_gshared (Dictionary_2_t1_1147 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7124(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7124_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7126_gshared (Dictionary_2_t1_1147 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7126(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1147 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7126_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7128_gshared (Dictionary_2_t1_1147 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7128(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1147 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2__ctor_m1_7128_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7130_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7130(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7130_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7132_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7132(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7132_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7134_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7134_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7136_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7136(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7138_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7138(__this, ___key, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7138_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7140_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7140(__this, method) (( bool (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7140_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7142_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7142(__this, method) (( Object_t * (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7144_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7144(__this, method) (( bool (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7146_gshared (Dictionary_2_t1_1147 * __this, KeyValuePair_2_t1_1149  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7146(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1147 *, KeyValuePair_2_t1_1149 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7146_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7148_gshared (Dictionary_2_t1_1147 * __this, KeyValuePair_2_t1_1149  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7148(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1147 *, KeyValuePair_2_t1_1149 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7148_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7150_gshared (Dictionary_2_t1_1147 * __this, KeyValuePair_2U5BU5D_t1_1604* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7150(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1147 *, KeyValuePair_2U5BU5D_t1_1604*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7150_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7152_gshared (Dictionary_2_t1_1147 * __this, KeyValuePair_2_t1_1149  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7152(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1147 *, KeyValuePair_2_t1_1149 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7154_gshared (Dictionary_2_t1_1147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1147 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7154_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7156_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7156(__this, method) (( Object_t * (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7156_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7158_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7158(__this, method) (( Object_t* (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7158_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7160_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7160(__this, method) (( Object_t * (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7160_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7162_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7162(__this, method) (( int32_t (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_get_Count_m1_7162_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_7164_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7164(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7164_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7166_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_7166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7168_gshared (Dictionary_2_t1_1147 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7168(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1147 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7168_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7170_gshared (Dictionary_2_t1_1147 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7170(__this, ___size, method) (( void (*) (Dictionary_2_t1_1147 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7170_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7172_gshared (Dictionary_2_t1_1147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1147 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1149  Dictionary_2_make_pair_m1_7174_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7174(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1149  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_7174_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_7176_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7176(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_7176_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7178_gshared (Dictionary_2_t1_1147 * __this, KeyValuePair_2U5BU5D_t1_1604* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1147 *, KeyValuePair_2U5BU5D_t1_1604*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7178_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_7180_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7180(__this, method) (( void (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_Resize_m1_7180_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7182_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7182(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_7182_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_7184_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7184(__this, method) (( void (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_Clear_m1_7184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7186_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7186(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7186_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7188_gshared (Dictionary_2_t1_1147 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7188(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1147 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_7188_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7190_gshared (Dictionary_2_t1_1147 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_508  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7190(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1147 *, SerializationInfo_t1_176 *, StreamingContext_t1_508 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7190_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7192_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7192(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7192_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7194_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7194(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7194_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7196_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7196(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1147 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_7196_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1151 * Dictionary_2_get_Values_m1_7198_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7198(__this, method) (( ValueCollection_t1_1151 * (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_get_Values_m1_7198_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7200_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7200(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7200_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_7202_gshared (Dictionary_2_t1_1147 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7202(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1147 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7202_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7204_gshared (Dictionary_2_t1_1147 * __this, KeyValuePair_2_t1_1149  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7204(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1147 *, KeyValuePair_2_t1_1149 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7204_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1153  Dictionary_2_GetEnumerator_m1_7206_gshared (Dictionary_2_t1_1147 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7206(__this, method) (( Enumerator_t1_1153  (*) (Dictionary_2_t1_1147 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7206_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_7208_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7208(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7208_gshared)(__this /* static, unused */, ___key, ___value, method)
