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

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3_94;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Exception
struct Exception_t1_33;
// System.Threading.WaitHandle
struct WaitHandle_t1_436;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void InternalAsyncResult__ctor_m3_674 (InternalAsyncResult_t3_94 * __this, AsyncCallback_t1_28 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1_70* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C" bool InternalAsyncResult_get_ProceedAfterHandshake_m3_675 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C" bool InternalAsyncResult_get_FromWrite_m3_676 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t1_70* InternalAsyncResult_get_Buffer_m3_677 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C" int32_t InternalAsyncResult_get_Offset_m3_678 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C" int32_t InternalAsyncResult_get_Count_m3_679 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C" int32_t InternalAsyncResult_get_BytesRead_m3_680 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C" Object_t * InternalAsyncResult_get_AsyncState_m3_681 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C" Exception_t1_33 * InternalAsyncResult_get_AsyncException_m3_682 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C" bool InternalAsyncResult_get_CompletedWithError_m3_683 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_436 * InternalAsyncResult_get_AsyncWaitHandle_m3_684 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C" bool InternalAsyncResult_get_IsCompleted_m3_685 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m3_686 (InternalAsyncResult_t3_94 * __this, Exception_t1_33 * ___ex, int32_t ___bytesRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C" void InternalAsyncResult_SetComplete_m3_687 (InternalAsyncResult_t3_94 * __this, Exception_t1_33 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m3_688 (InternalAsyncResult_t3_94 * __this, int32_t ___bytesRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C" void InternalAsyncResult_SetComplete_m3_689 (InternalAsyncResult_t3_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
