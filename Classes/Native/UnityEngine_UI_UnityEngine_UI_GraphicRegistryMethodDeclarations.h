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

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t7_81;
// UnityEngine.Canvas
struct Canvas_t6_171;
// UnityEngine.UI.Graphic
struct Graphic_t7_76;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t1_971;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C" void GraphicRegistry__ctor_m7_559 (GraphicRegistry_t7_81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C" void GraphicRegistry__cctor_m7_560 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C" GraphicRegistry_t7_81 * GraphicRegistry_get_instance_m7_561 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_RegisterGraphicForCanvas_m7_562 (Object_t * __this /* static, unused */, Canvas_t6_171 * ___c, Graphic_t7_76 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_UnregisterGraphicForCanvas_m7_563 (Object_t * __this /* static, unused */, Canvas_t6_171 * ___c, Graphic_t7_76 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C" Object_t* GraphicRegistry_GetGraphicsForCanvas_m7_564 (Object_t * __this /* static, unused */, Canvas_t6_171 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
