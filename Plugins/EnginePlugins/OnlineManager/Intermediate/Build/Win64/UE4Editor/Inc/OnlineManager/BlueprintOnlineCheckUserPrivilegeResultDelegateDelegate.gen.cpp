// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintOnlineCheckUserPrivilegeResultDelegateDelegate() {}
// Cross Module References
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	OEIONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlineUserPrivilegeDenyReason();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms
		{
			bool bGranted;
			EOnlineUserPrivilegeDenyReason DenyReason;
		};
		static void NewProp_bGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGranted;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_bGranted_SetBit(void* Obj)
	{
		((_Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms*)Obj)->bGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_bGranted = { "bGranted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_bGranted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms, DenyReason), Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlineUserPrivilegeDenyReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_bGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_DenyReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::NewProp_DenyReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineManager, nullptr, "BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
