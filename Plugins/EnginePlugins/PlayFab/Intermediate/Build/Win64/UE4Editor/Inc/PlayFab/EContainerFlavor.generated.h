// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EContainerFlavor_generated_h
#error "EContainerFlavor.generated.h already included, missing '#pragma once' in EContainerFlavor.h"
#endif
#define PLAYFAB_EContainerFlavor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EContainerFlavor_h


#define FOREACH_ENUM_ECONTAINERFLAVOR(op) \
	op(EContainerFlavor::pfenum_ManagedWindowsServerCore) \
	op(EContainerFlavor::pfenum_CustomLinux) \
	op(EContainerFlavor::pfenum_ManagedWindowsServerCorePreview) \
	op(EContainerFlavor::pfenum_Invalid) 

enum class EContainerFlavor : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EContainerFlavor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
