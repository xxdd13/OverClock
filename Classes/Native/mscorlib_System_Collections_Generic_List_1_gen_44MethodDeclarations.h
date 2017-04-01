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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t1_1180;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1598;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1_1609;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1_1610;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t1_1183;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1181;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t1_1188;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1_1191;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m1_7463_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1__ctor_m1_7463(__this, method) (( void (*) (List_1_t1_1180 *, const MethodInfo*))List_1__ctor_m1_7463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_7465_gshared (List_1_t1_1180 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_7465(__this, ___capacity, method) (( void (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1__ctor_m1_7465_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m1_7467_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_7467(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_7467_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_7469_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_7469(__this, method) (( Object_t* (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_7469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_7471_gshared (List_1_t1_1180 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_7471(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1180 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_7471_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_7473_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_7473(__this, method) (( Object_t * (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_7473_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_7475_gshared (List_1_t1_1180 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_7475(__this, ___item, method) (( int32_t (*) (List_1_t1_1180 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_7475_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_7477_gshared (List_1_t1_1180 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_7477(__this, ___item, method) (( bool (*) (List_1_t1_1180 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_7477_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_7479_gshared (List_1_t1_1180 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_7479(__this, ___item, method) (( int32_t (*) (List_1_t1_1180 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_7479_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_7481_gshared (List_1_t1_1180 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_7481(__this, ___index, ___item, method) (( void (*) (List_1_t1_1180 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_7481_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_7483_gshared (List_1_t1_1180 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_7483(__this, ___item, method) (( void (*) (List_1_t1_1180 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_7483_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_7485_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_7485(__this, method) (( bool (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_7485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_7487_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_7487(__this, method) (( bool (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_7487_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_7489_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_7489(__this, method) (( Object_t * (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_7489_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_7491_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_7491(__this, method) (( bool (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_7491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_7493_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_7493(__this, method) (( bool (*) (List_1_t1_1180 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_7493_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_7495_gshared (List_1_t1_1180 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_7495(__this, ___index, method) (( Object_t * (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_7495_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_7497_gshared (List_1_t1_1180 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_7497(__this, ___index, ___value, method) (( void (*) (List_1_t1_1180 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_7497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m1_7499_gshared (List_1_t1_1180 * __this, KeyValuePair_2_t1_1061  ___item, const MethodInfo* method);
#define List_1_Add_m1_7499(__this, ___item, method) (( void (*) (List_1_t1_1180 *, KeyValuePair_2_t1_1061 , const MethodInfo*))List_1_Add_m1_7499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_7501_gshared (List_1_t1_1180 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_7501(__this, ___newCount, method) (( void (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_7501_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_7503_gshared (List_1_t1_1180 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_7503(__this, ___collection, method) (( void (*) (List_1_t1_1180 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_7503_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_7505_gshared (List_1_t1_1180 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_7505(__this, ___enumerable, method) (( void (*) (List_1_t1_1180 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_7505_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_7507_gshared (List_1_t1_1180 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_7507(__this, ___collection, method) (( void (*) (List_1_t1_1180 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_7507_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1183 * List_1_AsReadOnly_m1_7509_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_7509(__this, method) (( ReadOnlyCollection_1_t1_1183 * (*) (List_1_t1_1180 *, const MethodInfo*))List_1_AsReadOnly_m1_7509_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m1_7511_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_Clear_m1_7511(__this, method) (( void (*) (List_1_t1_1180 *, const MethodInfo*))List_1_Clear_m1_7511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m1_7513_gshared (List_1_t1_1180 * __this, KeyValuePair_2_t1_1061  ___item, const MethodInfo* method);
#define List_1_Contains_m1_7513(__this, ___item, method) (( bool (*) (List_1_t1_1180 *, KeyValuePair_2_t1_1061 , const MethodInfo*))List_1_Contains_m1_7513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_7515_gshared (List_1_t1_1180 * __this, KeyValuePair_2U5BU5D_t1_1181* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_7515(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1180 *, KeyValuePair_2U5BU5D_t1_1181*, int32_t, const MethodInfo*))List_1_CopyTo_m1_7515_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1_1061  List_1_Find_m1_7517_gshared (List_1_t1_1180 * __this, Predicate_1_t1_1188 * ___match, const MethodInfo* method);
#define List_1_Find_m1_7517(__this, ___match, method) (( KeyValuePair_2_t1_1061  (*) (List_1_t1_1180 *, Predicate_1_t1_1188 *, const MethodInfo*))List_1_Find_m1_7517_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_7519_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1188 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_7519(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1188 *, const MethodInfo*))List_1_CheckMatch_m1_7519_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_7521_gshared (List_1_t1_1180 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1188 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_7521(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_1180 *, int32_t, int32_t, Predicate_1_t1_1188 *, const MethodInfo*))List_1_GetIndex_m1_7521_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1_1182  List_1_GetEnumerator_m1_7523_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_7523(__this, method) (( Enumerator_t1_1182  (*) (List_1_t1_1180 *, const MethodInfo*))List_1_GetEnumerator_m1_7523_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_7525_gshared (List_1_t1_1180 * __this, KeyValuePair_2_t1_1061  ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_7525(__this, ___item, method) (( int32_t (*) (List_1_t1_1180 *, KeyValuePair_2_t1_1061 , const MethodInfo*))List_1_IndexOf_m1_7525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_7527_gshared (List_1_t1_1180 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_7527(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1180 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_7527_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_7529_gshared (List_1_t1_1180 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_7529(__this, ___index, method) (( void (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_7529_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_7531_gshared (List_1_t1_1180 * __this, int32_t ___index, KeyValuePair_2_t1_1061  ___item, const MethodInfo* method);
#define List_1_Insert_m1_7531(__this, ___index, ___item, method) (( void (*) (List_1_t1_1180 *, int32_t, KeyValuePair_2_t1_1061 , const MethodInfo*))List_1_Insert_m1_7531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_7533_gshared (List_1_t1_1180 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_7533(__this, ___collection, method) (( void (*) (List_1_t1_1180 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_7533_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m1_7535_gshared (List_1_t1_1180 * __this, KeyValuePair_2_t1_1061  ___item, const MethodInfo* method);
#define List_1_Remove_m1_7535(__this, ___item, method) (( bool (*) (List_1_t1_1180 *, KeyValuePair_2_t1_1061 , const MethodInfo*))List_1_Remove_m1_7535_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_7537_gshared (List_1_t1_1180 * __this, Predicate_1_t1_1188 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_7537(__this, ___match, method) (( int32_t (*) (List_1_t1_1180 *, Predicate_1_t1_1188 *, const MethodInfo*))List_1_RemoveAll_m1_7537_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_7539_gshared (List_1_t1_1180 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_7539(__this, ___index, method) (( void (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_7539_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m1_7541_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_7541(__this, method) (( void (*) (List_1_t1_1180 *, const MethodInfo*))List_1_Reverse_m1_7541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m1_7543_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_Sort_m1_7543(__this, method) (( void (*) (List_1_t1_1180 *, const MethodInfo*))List_1_Sort_m1_7543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_7545_gshared (List_1_t1_1180 * __this, Comparison_1_t1_1191 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_7545(__this, ___comparison, method) (( void (*) (List_1_t1_1180 *, Comparison_1_t1_1191 *, const MethodInfo*))List_1_Sort_m1_7545_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t1_1181* List_1_ToArray_m1_7547_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_7547(__this, method) (( KeyValuePair_2U5BU5D_t1_1181* (*) (List_1_t1_1180 *, const MethodInfo*))List_1_ToArray_m1_7547_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_7549_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_7549(__this, method) (( void (*) (List_1_t1_1180 *, const MethodInfo*))List_1_TrimExcess_m1_7549_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_7551_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_7551(__this, method) (( int32_t (*) (List_1_t1_1180 *, const MethodInfo*))List_1_get_Capacity_m1_7551_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_7553_gshared (List_1_t1_1180 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_7553(__this, ___value, method) (( void (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_7553_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m1_7555_gshared (List_1_t1_1180 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_7555(__this, method) (( int32_t (*) (List_1_t1_1180 *, const MethodInfo*))List_1_get_Count_m1_7555_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1_1061  List_1_get_Item_m1_7557_gshared (List_1_t1_1180 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_7557(__this, ___index, method) (( KeyValuePair_2_t1_1061  (*) (List_1_t1_1180 *, int32_t, const MethodInfo*))List_1_get_Item_m1_7557_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_7559_gshared (List_1_t1_1180 * __this, int32_t ___index, KeyValuePair_2_t1_1061  ___value, const MethodInfo* method);
#define List_1_set_Item_m1_7559(__this, ___index, ___value, method) (( void (*) (List_1_t1_1180 *, int32_t, KeyValuePair_2_t1_1061 , const MethodInfo*))List_1_set_Item_m1_7559_gshared)(__this, ___index, ___value, method)
