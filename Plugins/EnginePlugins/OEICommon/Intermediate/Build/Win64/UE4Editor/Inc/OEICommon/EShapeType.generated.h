// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEICOMMON_EShapeType_generated_h
#error "EShapeType.generated.h already included, missing '#pragma once' in EShapeType.h"
#endif
#define OEICOMMON_EShapeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_EShapeType_h


#define FOREACH_ENUM_ESHAPETYPE(op) \
	op(EShapeType::Unknown) \
	op(EShapeType::Box) \
	op(EShapeType::Sphere) \
	op(EShapeType::Capsule) 

enum class EShapeType : uint8;
template<> OEICOMMON_API UEnum* StaticEnum<EShapeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
