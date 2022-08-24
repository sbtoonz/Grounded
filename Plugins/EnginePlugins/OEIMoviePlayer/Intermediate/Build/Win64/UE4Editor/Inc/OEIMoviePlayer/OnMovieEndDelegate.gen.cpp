// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OnMovieEndDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnMovieEndDelegate() {}
// Cross Module References
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics
	{
		struct _Script_OEIMoviePlayer_eventOnMovieEnd_Parms
		{
			bool bWasSkipped;
		};
		static void NewProp_bWasSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSkipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::NewProp_bWasSkipped_SetBit(void* Obj)
	{
		((_Script_OEIMoviePlayer_eventOnMovieEnd_Parms*)Obj)->bWasSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::NewProp_bWasSkipped = { "bWasSkipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OEIMoviePlayer_eventOnMovieEnd_Parms), &Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::NewProp_bWasSkipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::NewProp_bWasSkipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnMovieEndDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OEIMoviePlayer, nullptr, "OnMovieEnd__DelegateSignature", nullptr, nullptr, sizeof(_Script_OEIMoviePlayer_eventOnMovieEnd_Parms), Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
