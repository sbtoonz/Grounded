// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/SpringArmPhotoPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringArmPhotoPawn() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_ASpringArmPhotoPawn_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_ASpringArmPhotoPawn();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	DEFINE_FUNCTION(ASpringArmPhotoPawn::execSetBoomAdjustIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoomAdjustIn(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpringArmPhotoPawn::execSetBoomAdjustOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoomAdjustOut(Z_Param_Val);
		P_NATIVE_END;
	}
	void ASpringArmPhotoPawn::StaticRegisterNativesASpringArmPhotoPawn()
	{
		UClass* Class = ASpringArmPhotoPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBoomAdjustIn", &ASpringArmPhotoPawn::execSetBoomAdjustIn },
			{ "SetBoomAdjustOut", &ASpringArmPhotoPawn::execSetBoomAdjustOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics
	{
		struct SpringArmPhotoPawn_eventSetBoomAdjustIn_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpringArmPhotoPawn_eventSetBoomAdjustIn_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpringArmPhotoPawn, nullptr, "SetBoomAdjustIn", nullptr, nullptr, sizeof(SpringArmPhotoPawn_eventSetBoomAdjustIn_Parms), Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics
	{
		struct SpringArmPhotoPawn_eventSetBoomAdjustOut_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpringArmPhotoPawn_eventSetBoomAdjustOut_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpringArmPhotoPawn, nullptr, "SetBoomAdjustOut", nullptr, nullptr, sizeof(SpringArmPhotoPawn_eventSetBoomAdjustOut_Parms), Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpringArmPhotoPawn_NoRegister()
	{
		return ASpringArmPhotoPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASpringArmPhotoPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomNearSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomNearSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomFarSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomFarSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomMaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomMaxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingBoomLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingBoomLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoMinBoomLength_MetaData[];
#endif
		static void NewProp_bAutoMinBoomLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoMinBoomLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomMinLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomMinLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomPanSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomPanSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomAdjustAccumulatorIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomAdjustAccumulatorIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomAdjustAccumulatorOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoomAdjustAccumulatorOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpringArmPhotoPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhotoPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpringArmPhotoPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustIn, "SetBoomAdjustIn" }, // 1940936183
		{ &Z_Construct_UFunction_ASpringArmPhotoPawn_SetBoomAdjustOut, "SetBoomAdjustOut" }, // 2995429918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpringArmPhotoPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomNearSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomNearSpeed = { "BoomNearSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomNearSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomNearSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomNearSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomFarSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomFarSpeed = { "BoomFarSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomFarSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomFarSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomFarSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMaxLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMaxLength = { "BoomMaxLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomMaxLength), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMaxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_StartingBoomLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_StartingBoomLength = { "StartingBoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, StartingBoomLength), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_StartingBoomLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_StartingBoomLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	void Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength_SetBit(void* Obj)
	{
		((ASpringArmPhotoPawn*)Obj)->bAutoMinBoomLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength = { "bAutoMinBoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpringArmPhotoPawn), &Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMinLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMinLength = { "BoomMinLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomMinLength), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMinLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMinLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomPanSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomPanSpeed = { "BoomPanSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomPanSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomPanSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomPanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_MaxVerticalOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_MaxVerticalOffset = { "MaxVerticalOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, MaxVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_MaxVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_MaxVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorIn = { "BoomAdjustAccumulatorIn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomAdjustAccumulatorIn), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpringArmPhotoPawn" },
		{ "ModuleRelativePath", "Public/SpringArmPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorOut = { "BoomAdjustAccumulatorOut", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringArmPhotoPawn, BoomAdjustAccumulatorOut), METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpringArmPhotoPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomNearSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomFarSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMaxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_StartingBoomLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_bAutoMinBoomLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomMinLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomPanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_MaxVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringArmPhotoPawn_Statics::NewProp_BoomAdjustAccumulatorOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpringArmPhotoPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpringArmPhotoPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpringArmPhotoPawn_Statics::ClassParams = {
		&ASpringArmPhotoPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpringArmPhotoPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpringArmPhotoPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpringArmPhotoPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpringArmPhotoPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpringArmPhotoPawn, 496872258);
	template<> OEIPHOTOMODE_API UClass* StaticClass<ASpringArmPhotoPawn>()
	{
		return ASpringArmPhotoPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpringArmPhotoPawn(Z_Construct_UClass_ASpringArmPhotoPawn, &ASpringArmPhotoPawn::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("ASpringArmPhotoPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpringArmPhotoPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
