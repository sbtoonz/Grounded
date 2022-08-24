// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/OEIUtilitiesLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIUtilitiesLibrary() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIUtilitiesLibrary_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIUtilitiesLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIUtilitiesLibrary::execCameraLookAtActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCameraPos);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutCameraRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOEIUtilitiesLibrary::CameraLookAtActor(Z_Param_Out_Actors,Z_Param_Out_OutCameraPos,Z_Param_Out_OutCameraRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIUtilitiesLibrary::execDoesMapExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOEIUtilitiesLibrary::DoesMapExist(Z_Param_MapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIUtilitiesLibrary::execExecuteConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOEIUtilitiesLibrary::ExecuteConsoleCommand(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIUtilitiesLibrary::execGetLoadedSubLevels)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UOEIUtilitiesLibrary::GetLoadedSubLevels(Z_Param_World);
		P_NATIVE_END;
	}
	void UOEIUtilitiesLibrary::StaticRegisterNativesUOEIUtilitiesLibrary()
	{
		UClass* Class = UOEIUtilitiesLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CameraLookAtActor", &UOEIUtilitiesLibrary::execCameraLookAtActor },
			{ "DoesMapExist", &UOEIUtilitiesLibrary::execDoesMapExist },
			{ "ExecuteConsoleCommand", &UOEIUtilitiesLibrary::execExecuteConsoleCommand },
			{ "GetLoadedSubLevels", &UOEIUtilitiesLibrary::execGetLoadedSubLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics
	{
		struct OEIUtilitiesLibrary_eventCameraLookAtActor_Parms
		{
			TArray<AActor*> Actors;
			FVector OutCameraPos;
			FRotator OutCameraRot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCameraPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCameraRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventCameraLookAtActor_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_OutCameraPos = { "OutCameraPos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventCameraLookAtActor_Parms, OutCameraPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_OutCameraRot = { "OutCameraRot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventCameraLookAtActor_Parms, OutCameraRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_OutCameraPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::NewProp_OutCameraRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIUtilitiesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIUtilitiesLibrary, nullptr, "CameraLookAtActor", nullptr, nullptr, sizeof(OEIUtilitiesLibrary_eventCameraLookAtActor_Parms), Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics
	{
		struct OEIUtilitiesLibrary_eventDoesMapExist_Parms
		{
			FString MapName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventDoesMapExist_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_MapName_MetaData)) };
	void Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OEIUtilitiesLibrary_eventDoesMapExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIUtilitiesLibrary_eventDoesMapExist_Parms), &Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIUtilitiesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIUtilitiesLibrary, nullptr, "DoesMapExist", nullptr, nullptr, sizeof(OEIUtilitiesLibrary_eventDoesMapExist_Parms), Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics
	{
		struct OEIUtilitiesLibrary_eventExecuteConsoleCommand_Parms
		{
			FString Command;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventExecuteConsoleCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIUtilitiesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIUtilitiesLibrary, nullptr, "ExecuteConsoleCommand", nullptr, nullptr, sizeof(OEIUtilitiesLibrary_eventExecuteConsoleCommand_Parms), Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics
	{
		struct OEIUtilitiesLibrary_eventGetLoadedSubLevels_Parms
		{
			UWorld* World;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventGetLoadedSubLevels_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIUtilitiesLibrary_eventGetLoadedSubLevels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIUtilitiesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIUtilitiesLibrary, nullptr, "GetLoadedSubLevels", nullptr, nullptr, sizeof(OEIUtilitiesLibrary_eventGetLoadedSubLevels_Parms), Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIUtilitiesLibrary_NoRegister()
	{
		return UOEIUtilitiesLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOEIUtilitiesLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIUtilitiesLibrary_CameraLookAtActor, "CameraLookAtActor" }, // 376011547
		{ &Z_Construct_UFunction_UOEIUtilitiesLibrary_DoesMapExist, "DoesMapExist" }, // 180323545
		{ &Z_Construct_UFunction_UOEIUtilitiesLibrary_ExecuteConsoleCommand, "ExecuteConsoleCommand" }, // 3534994593
		{ &Z_Construct_UFunction_UOEIUtilitiesLibrary_GetLoadedSubLevels, "GetLoadedSubLevels" }, // 1061787035
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIUtilitiesLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIUtilitiesLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIUtilitiesLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::ClassParams = {
		&UOEIUtilitiesLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIUtilitiesLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIUtilitiesLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIUtilitiesLibrary, 2671855949);
	template<> OEICOMMON_API UClass* StaticClass<UOEIUtilitiesLibrary>()
	{
		return UOEIUtilitiesLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIUtilitiesLibrary(Z_Construct_UClass_UOEIUtilitiesLibrary, &UOEIUtilitiesLibrary::StaticClass, TEXT("/Script/OEICommon"), TEXT("UOEIUtilitiesLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIUtilitiesLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
