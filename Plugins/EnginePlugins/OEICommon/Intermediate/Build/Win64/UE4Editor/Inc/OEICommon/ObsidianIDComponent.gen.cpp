// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/ObsidianIDComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsidianIDComponent() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UObsidianIDComponent_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UObsidianIDComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UObsidianIDComponent::execResetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetID();
		P_NATIVE_END;
	}
	void UObsidianIDComponent::StaticRegisterNativesUObsidianIDComponent()
	{
		UClass* Class = UObsidianIDComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetID", &UObsidianIDComponent::execResetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObsidianIDComponent_ResetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObsidianIDComponent_ResetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObsidianIDComponent_ResetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObsidianIDComponent, nullptr, "ResetID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObsidianIDComponent_ResetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObsidianIDComponent_ResetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObsidianIDComponent_ResetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObsidianIDComponent_ResetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObsidianIDComponent_NoRegister()
	{
		return UObsidianIDComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObsidianIDComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSavingOfDestruction_MetaData[];
#endif
		static void NewProp_bIgnoreSavingOfDestruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSavingOfDestruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstancesShareSavedState_MetaData[];
#endif
		static void NewProp_bInstancesShareSavedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstancesShareSavedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsidianIDComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObsidianIDComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObsidianIDComponent_ResetID, "ResetID" }, // 334159723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsidianIDComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObsidianIDComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObsidianIDComponent" },
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObsidianIDComponent, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_DataTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObsidianIDComponent" },
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObsidianIDComponent, DataTag), METADATA_PARAMS(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_DataTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_DataTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObsidianIDComponent" },
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
	void Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction_SetBit(void* Obj)
	{
		((UObsidianIDComponent*)Obj)->bIgnoreSavingOfDestruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction = { "bIgnoreSavingOfDestruction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObsidianIDComponent), &Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObsidianIDComponent" },
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
	void Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState_SetBit(void* Obj)
	{
		((UObsidianIDComponent*)Obj)->bInstancesShareSavedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState = { "bInstancesShareSavedState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObsidianIDComponent), &Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObsidianIDComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_DataTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bIgnoreSavingOfDestruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsidianIDComponent_Statics::NewProp_bInstancesShareSavedState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsidianIDComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsidianIDComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsidianIDComponent_Statics::ClassParams = {
		&UObsidianIDComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObsidianIDComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObsidianIDComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsidianIDComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsidianIDComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsidianIDComponent, 584022101);
	template<> OEICOMMON_API UClass* StaticClass<UObsidianIDComponent>()
	{
		return UObsidianIDComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsidianIDComponent(Z_Construct_UClass_UObsidianIDComponent, &UObsidianIDComponent::StaticClass, TEXT("/Script/OEICommon"), TEXT("UObsidianIDComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsidianIDComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
