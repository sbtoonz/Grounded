// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/ColorGradingProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorGradingProfileData() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UColorGradingProfileData_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UColorGradingProfileData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingProfile();
// End Cross Module References
	DEFINE_FUNCTION(UColorGradingProfileData::execIsValidIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void UColorGradingProfileData::StaticRegisterNativesUColorGradingProfileData()
	{
		UClass* Class = UColorGradingProfileData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValidIndex", &UColorGradingProfileData::execIsValidIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics
	{
		struct ColorGradingProfileData_eventIsValidIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorGradingProfileData_eventIsValidIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ColorGradingProfileData_eventIsValidIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ColorGradingProfileData_eventIsValidIndex_Parms), &Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorGradingProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorGradingProfileData, nullptr, "IsValidIndex", nullptr, nullptr, sizeof(ColorGradingProfileData_eventIsValidIndex_Parms), Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UColorGradingProfileData_NoRegister()
	{
		return UColorGradingProfileData::StaticClass();
	}
	struct Z_Construct_UClass_UColorGradingProfileData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorGradingProfileData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorGradingProfileData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorGradingProfileData_IsValidIndex, "IsValidIndex" }, // 2170555016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorGradingProfileData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ColorGradingProfileData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorGradingProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorGradingProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfileData" },
		{ "ModuleRelativePath", "Public/ColorGradingProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UColorGradingProfileData, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorGradingProfileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorGradingProfileData_Statics::NewProp_Profiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorGradingProfileData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorGradingProfileData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColorGradingProfileData_Statics::ClassParams = {
		&UColorGradingProfileData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UColorGradingProfileData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UColorGradingProfileData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UColorGradingProfileData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorGradingProfileData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorGradingProfileData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColorGradingProfileData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColorGradingProfileData, 2688574319);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UColorGradingProfileData>()
	{
		return UColorGradingProfileData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColorGradingProfileData(Z_Construct_UClass_UColorGradingProfileData, &UColorGradingProfileData::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UColorGradingProfileData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorGradingProfileData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
