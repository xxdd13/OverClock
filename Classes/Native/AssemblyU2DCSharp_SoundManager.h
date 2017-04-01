#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManagerData
struct GameManagerData_t8_2;
// UnityEngine.AudioSource
struct AudioSource_t6_143;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SoundManager
struct  SoundManager_t8_12  : public MonoBehaviour_t6_92
{
	// GameManagerData SoundManager::gameData
	GameManagerData_t8_2 * ___gameData_2;
	// UnityEngine.AudioSource SoundManager::audioSound
	AudioSource_t6_143 * ___audioSound_3;
};
