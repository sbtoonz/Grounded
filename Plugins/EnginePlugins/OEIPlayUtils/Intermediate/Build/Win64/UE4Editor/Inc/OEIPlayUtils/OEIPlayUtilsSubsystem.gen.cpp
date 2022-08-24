// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPlayUtils/Public/OEIPlayUtilsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIPlayUtilsSubsystem() {}
// Cross Module References
	OEIPLAYUTILS_API UClass* Z_Construct_UClass_UOEIPlayUtilsSubsystem_NoRegister();
	OEIPLAYUTILS_API UClass* Z_Construct_UClass_UOEIPlayUtilsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_OEIPlayUtils();
// End Cross Module References
	DEFINE_FUNCTION(UOEIPlayUtilsSubsystem::execDisplayAspectRatio)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayAspectRatio(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIPlayUtilsSubsystem::execExecuteBeginPlayCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteBeginPlayCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIPlayUtilsSubsystem::execExecuteConsoleCommandsFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteConsoleCommandsFromFile(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIPlayUtilsSubsystem::execOnWorldBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldBeginPlay();
		P_NATIVE_END;
	}
	void UOEIPlayUtilsSubsystem::StaticRegisterNativesUOEIPlayUtilsSubsystem()
	{
		UClass* Class = UOEIPlayUtilsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayAspectRatio", &UOEIPlayUtilsSubsystem::execDisplayAspectRatio },
			{ "ExecuteBeginPlayCommands", &UOEIPlayUtilsSubsystem::execExecuteBeginPlayCommands },
			{ "ExecuteConsoleCommandsFromFile", &UOEIPlayUtilsSubsystem::execExecuteConsoleCommandsFromFile },
			{ "OnWorldBeginPlay", &UOEIPlayUtilsSubsystem::execOnWorldBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics
	{
		struct OEIPlayUtilsSubsystem_eventDisplayAspectRatio_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((OEIPlayUtilsSubsystem_eventDisplayAspectRatio_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIPlayUtilsSubsystem_eventDisplayAspectRatio_Parms), &Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIPlayUtilsSubsystem, nullptr, "DisplayAspectRatio", nullptr, nullptr, sizeof(OEIPlayUtilsSubsystem_eventDisplayAspectRatio_Parms), Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIPlayUtilsSubsystem, nullptr, "ExecuteBeginPlayCommands", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics
	{
		struct OEIPlayUtilsSubsystem_eventExecuteConsoleCommandsFromFile_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIPlayUtilsSubsystem_eventExecuteConsoleCommandsFromFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIPlayUtilsSubsystem, nullptr, "ExecuteConsoleCommandsFromFile", nullptr, nullptr, sizeof(OEIPlayUtilsSubsystem_eventExecuteConsoleCommandsFromFile_Parms), Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIPlayUtilsSubsystem, nullptr, "OnWorldBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIPlayUtilsSubsystem_NoRegister()
	{
		return UOEIPlayUtilsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectConsoleCommandListsBasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectConsoleCommandListsBasePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserConsoleCommandListsBasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserConsoleCommandListsBasePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginPlayCommandsFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeginPlayCommandsFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPlayUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIPlayUtilsSubsystem_DisplayAspectRatio, "DisplayAspectRatio" }, // 455125256
		{ &Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands, "ExecuteBeginPlayCommands" }, // 3415729758
		{ &Z_Construct_UFunction_UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile, "ExecuteConsoleCommandsFromFile" }, // 3550351213
		{ &Z_Construct_UFunction_UOEIPlayUtilsSubsystem_OnWorldBeginPlay, "OnWorldBeginPlay" }, // 2269507139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIPlayUtilsSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_ProjectConsoleCommandListsBasePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIPlayUtilsSubsystem" },
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_ProjectConsoleCommandListsBasePath = { "ProjectConsoleCommandListsBasePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIPlayUtilsSubsystem, ProjectConsoleCommandListsBasePath), METADATA_PARAMS(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_ProjectConsoleCommandListsBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_ProjectConsoleCommandListsBasePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_UserConsoleCommandListsBasePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIPlayUtilsSubsystem" },
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_UserConsoleCommandListsBasePath = { "UserConsoleCommandListsBasePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIPlayUtilsSubsystem, UserConsoleCommandListsBasePath), METADATA_PARAMS(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_UserConsoleCommandListsBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_UserConsoleCommandListsBasePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_BeginPlayCommandsFileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIPlayUtilsSubsystem" },
		{ "ModuleRelativePath", "Public/OEIPlayUtilsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_BeginPlayCommandsFileName = { "BeginPlayCommandsFileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIPlayUtilsSubsystem, BeginPlayCommandsFileName), METADATA_PARAMS(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_BeginPlayCommandsFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_BeginPlayCommandsFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_ProjectConsoleCommandListsBasePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_UserConsoleCommandListsBasePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::NewProp_BeginPlayCommandsFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIPlayUtilsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::ClassParams = {
		&UOEIPlayUtilsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIPlayUtilsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIPlayUtilsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIPlayUtilsSubsystem, 3866972797);
	template<> OEIPLAYUTILS_API UClass* StaticClass<UOEIPlayUtilsSubsystem>()
	{
		return UOEIPlayUtilsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIPlayUtilsSubsystem(Z_Construct_UClass_UOEIPlayUtilsSubsystem, &UOEIPlayUtilsSubsystem::StaticClass, TEXT("/Script/OEIPlayUtils"), TEXT("UOEIPlayUtilsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIPlayUtilsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
