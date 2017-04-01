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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_7948_gshared (Enumerator_t1_1214 * __this, Dictionary_2_t1_1209 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_7948(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1214 *, Dictionary_2_t1_1209 *, const MethodInfo*))Enumerator__ctor_m1_7948_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_7949_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_7949(__this, method) (( Object_t * (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_7949_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_7950_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_7950(__this, method) (( void (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_7950_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7951_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7951(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7952_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7952(__this, method) (( Object_t * (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7952_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7953_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7953(__this, method) (( Object_t * (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7953_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_7954_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_7954(__this, method) (( bool (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_MoveNext_m1_7954_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t1_1202  Enumerator_get_Current_m1_7955_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_7955(__this, method) (( KeyValuePair_2_t1_1202  (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_get_Current_m1_7955_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_7956_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_7956(__this, method) (( Object_t * (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_7956_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t5_6  Enumerator_get_CurrentValue_m1_7957_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_7957(__this, method) (( ArrayMetadata_t5_6  (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_7957_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m1_7958_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_7958(__this, method) (( void (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_Reset_m1_7958_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_7959_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_7959(__this, method) (( void (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_VerifyState_m1_7959_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_7960_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_7960(__this, method) (( void (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_7960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m1_7961_gshared (Enumerator_t1_1214 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_7961(__this, method) (( void (*) (Enumerator_t1_1214 *, const MethodInfo*))Enumerator_Dispose_m1_7961_gshared)(__this, method)
