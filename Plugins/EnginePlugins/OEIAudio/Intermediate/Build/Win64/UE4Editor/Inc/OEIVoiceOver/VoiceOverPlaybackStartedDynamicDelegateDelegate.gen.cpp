// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/VoiceOverPlaybackStartedDynamicDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceOverPlaybackStartedDynamicDelegateDelegate() {}
// Cross Module References
	OEIVOICEOVER_API UFunction* Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms
		{
			FVoiceOverData Data;
			bool bPlaybackStarted;
			float EstimatedDuration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bPlaybackStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaybackStarted;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EstimatedDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms, Data), Z_Construct_UScriptStruct_FVoiceOverData, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_bPlaybackStarted_SetBit(void* Obj)
	{
		((_Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms*)Obj)->bPlaybackStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_bPlaybackStarted = { "bPlaybackStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms), &Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_bPlaybackStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_EstimatedDuration = { "EstimatedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms, EstimatedDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_bPlaybackStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::NewProp_EstimatedDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoiceOverPlaybackStartedDynamicDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OEIVoiceOver, nullptr, "VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms), Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
