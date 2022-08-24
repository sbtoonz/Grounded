// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhotoPawn;
class UInputComponent;
#ifdef OEIPHOTOMODE_OnPhotoPawnSetupInputDelegate_generated_h
#error "OnPhotoPawnSetupInputDelegate.generated.h already included, missing '#pragma once' in OnPhotoPawnSetupInputDelegate.h"
#endif
#define OEIPHOTOMODE_OnPhotoPawnSetupInputDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoPawnSetupInputDelegate_h_8_DELEGATE \
struct _Script_OEIPhotoMode_eventOnPhotoPawnSetupInput_Parms \
{ \
	APhotoPawn* Pawn; \
	UInputComponent* InputComponent; \
}; \
static inline void FOnPhotoPawnSetupInput_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoPawnSetupInput, APhotoPawn* Pawn, UInputComponent* InputComponent) \
{ \
	_Script_OEIPhotoMode_eventOnPhotoPawnSetupInput_Parms Parms; \
	Parms.Pawn=Pawn; \
	Parms.InputComponent=InputComponent; \
	OnPhotoPawnSetupInput.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoPawnSetupInputDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
