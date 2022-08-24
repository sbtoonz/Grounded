// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/OnPhotoPawnSetupInputDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnPhotoPawnSetupInputDelegate() {}
// Cross Module References
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics
	{
		struct _Script_OEIPhotoMode_eventOnPhotoPawnSetupInput_Parms
		{
			APhotoPawn* Pawn;
			UInputComponent* InputComponent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIPhotoMode_eventOnPhotoPawnSetupInput_Parms, Pawn), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIPhotoMode_eventOnPhotoPawnSetupInput_Parms, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_InputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::NewProp_InputComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnPhotoPawnSetupInputDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode, nullptr, "OnPhotoPawnSetupInput__DelegateSignature", nullptr, nullptr, sizeof(_Script_OEIPhotoMode_eventOnPhotoPawnSetupInput_Parms), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
