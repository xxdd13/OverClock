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

// UnityEngine.NetworkView
struct NetworkView_t6_59;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Double UnityEngine.NetworkMessageInfo::get_timestamp()
extern "C" double NetworkMessageInfo_get_timestamp_m6_463 (NetworkMessageInfo_t6_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::get_sender()
extern "C" NetworkPlayer_t6_57  NetworkMessageInfo_get_sender_m6_464 (NetworkMessageInfo_t6_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::get_networkView()
extern "C" NetworkView_t6_59 * NetworkMessageInfo_get_networkView_m6_465 (NetworkMessageInfo_t6_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::NullNetworkView()
extern "C" NetworkView_t6_59 * NetworkMessageInfo_NullNetworkView_m6_466 (NetworkMessageInfo_t6_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
