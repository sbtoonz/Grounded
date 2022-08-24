// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIAchievements/Public/OEIAchievementLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIAchievementLibrary() {}
// Cross Module References
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UOEIAchievementLibrary_NoRegister();
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UOEIAchievementLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIAchievements();
	OEIACHIEVEMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UOEIAchievementLibrary::execGetAchievementID)
	{
		P_GET_STRUCT_REF(FAchievementReference,Z_Param_Out_Achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UOEIAchievementLibrary::GetAchievementID(Z_Param_Out_Achievement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIAchievementLibrary::execMakeAchievementReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAchievementReference*)Z_Param__Result=UOEIAchievementLibrary::MakeAchievementReference(Z_Param_ID);
		P_NATIVE_END;
	}
	void UOEIAchievementLibrary::StaticRegisterNativesUOEIAchievementLibrary()
	{
		UClass* Class = UOEIAchievementLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAchievementID", &UOEIAchievementLibrary::execGetAchievementID },
			{ "MakeAchievementReference", &UOEIAchievementLibrary::execMakeAchievementReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics
	{
		struct OEIAchievementLibrary_eventGetAchievementID_Parms
		{
			FAchievementReference Achievement;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Achievement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Achievement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_Achievement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIAchievementLibrary_eventGetAchievementID_Parms, Achievement), Z_Construct_UScriptStruct_FAchievementReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_Achievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_Achievement_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIAchievementLibrary_eventGetAchievementID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIAchievementLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIAchievementLibrary, nullptr, "GetAchievementID", nullptr, nullptr, sizeof(OEIAchievementLibrary_eventGetAchievementID_Parms), Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics
	{
		struct OEIAchievementLibrary_eventMakeAchievementReference_Parms
		{
			FGuid ID;
			FAchievementReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIAchievementLibrary_eventMakeAchievementReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIAchievementLibrary_eventMakeAchievementReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FAchievementReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIAchievementLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIAchievementLibrary, nullptr, "MakeAchievementReference", nullptr, nullptr, sizeof(OEIAchievementLibrary_eventMakeAchievementReference_Parms), Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIAchievementLibrary_NoRegister()
	{
		return UOEIAchievementLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOEIAchievementLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIAchievementLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIAchievements,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIAchievementLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIAchievementLibrary_GetAchievementID, "GetAchievementID" }, // 2319168082
		{ &Z_Construct_UFunction_UOEIAchievementLibrary_MakeAchievementReference, "MakeAchievementReference" }, // 3098032392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIAchievementLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIAchievementLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIAchievementLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIAchievementLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIAchievementLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIAchievementLibrary_Statics::ClassParams = {
		&UOEIAchievementLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIAchievementLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIAchievementLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIAchievementLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIAchievementLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIAchievementLibrary, 3418054081);
	template<> OEIACHIEVEMENTS_API UClass* StaticClass<UOEIAchievementLibrary>()
	{
		return UOEIAchievementLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIAchievementLibrary(Z_Construct_UClass_UOEIAchievementLibrary, &UOEIAchievementLibrary::StaticClass, TEXT("/Script/OEIAchievements"), TEXT("UOEIAchievementLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIAchievementLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
