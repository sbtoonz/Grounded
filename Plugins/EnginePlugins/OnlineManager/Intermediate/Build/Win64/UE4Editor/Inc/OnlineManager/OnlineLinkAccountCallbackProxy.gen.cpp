// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineLinkAccountCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineLinkAccountCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineLinkAccountCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_OnlineAccountLinkResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineLinkAccountCallbackProxy::execOnlineGetLinkedAccountDisplayName)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineLinkAccountCallbackProxy::OnlineGetLinkedAccountDisplayName(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLinkAccountCallbackProxy::execOnlineIsAccountLinkingEnabled)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineLinkAccountCallbackProxy::OnlineIsAccountLinkingEnabled(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLinkAccountCallbackProxy::execOnlineIsLinked)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineLinkAccountCallbackProxy::OnlineIsLinked(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLinkAccountCallbackProxy::execOnlineLinkAccount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLinkAccountCallbackProxy**)Z_Param__Result=UOnlineLinkAccountCallbackProxy::OnlineLinkAccount(Z_Param_WorldContextObject,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLinkAccountCallbackProxy::execOnlineUnlinkAccount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLinkAccountCallbackProxy**)Z_Param__Result=UOnlineLinkAccountCallbackProxy::OnlineUnlinkAccount(Z_Param_WorldContextObject,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	void UOnlineLinkAccountCallbackProxy::StaticRegisterNativesUOnlineLinkAccountCallbackProxy()
	{
		UClass* Class = UOnlineLinkAccountCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineGetLinkedAccountDisplayName", &UOnlineLinkAccountCallbackProxy::execOnlineGetLinkedAccountDisplayName },
			{ "OnlineIsAccountLinkingEnabled", &UOnlineLinkAccountCallbackProxy::execOnlineIsAccountLinkingEnabled },
			{ "OnlineIsLinked", &UOnlineLinkAccountCallbackProxy::execOnlineIsLinked },
			{ "OnlineLinkAccount", &UOnlineLinkAccountCallbackProxy::execOnlineLinkAccount },
			{ "OnlineUnlinkAccount", &UOnlineLinkAccountCallbackProxy::execOnlineUnlinkAccount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics
	{
		struct OnlineLinkAccountCallbackProxy_eventOnlineGetLinkedAccountDisplayName_Parms
		{
			APlayerController* InPlayerController;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineGetLinkedAccountDisplayName_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineGetLinkedAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLinkAccountCallbackProxy, nullptr, "OnlineGetLinkedAccountDisplayName", nullptr, nullptr, sizeof(OnlineLinkAccountCallbackProxy_eventOnlineGetLinkedAccountDisplayName_Parms), Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics
	{
		struct OnlineLinkAccountCallbackProxy_eventOnlineIsAccountLinkingEnabled_Parms
		{
			APlayerController* InPlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineIsAccountLinkingEnabled_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLinkAccountCallbackProxy_eventOnlineIsAccountLinkingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineLinkAccountCallbackProxy_eventOnlineIsAccountLinkingEnabled_Parms), &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLinkAccountCallbackProxy, nullptr, "OnlineIsAccountLinkingEnabled", nullptr, nullptr, sizeof(OnlineLinkAccountCallbackProxy_eventOnlineIsAccountLinkingEnabled_Parms), Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics
	{
		struct OnlineLinkAccountCallbackProxy_eventOnlineIsLinked_Parms
		{
			APlayerController* InPlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineIsLinked_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLinkAccountCallbackProxy_eventOnlineIsLinked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineLinkAccountCallbackProxy_eventOnlineIsLinked_Parms), &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLinkAccountCallbackProxy, nullptr, "OnlineIsLinked", nullptr, nullptr, sizeof(OnlineLinkAccountCallbackProxy_eventOnlineIsLinked_Parms), Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics
	{
		struct OnlineLinkAccountCallbackProxy_eventOnlineLinkAccount_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			UOnlineLinkAccountCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineLinkAccount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineLinkAccount_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineLinkAccount_Parms, ReturnValue), Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLinkAccountCallbackProxy, nullptr, "OnlineLinkAccount", nullptr, nullptr, sizeof(OnlineLinkAccountCallbackProxy_eventOnlineLinkAccount_Parms), Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics
	{
		struct OnlineLinkAccountCallbackProxy_eventOnlineUnlinkAccount_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			UOnlineLinkAccountCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineUnlinkAccount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineUnlinkAccount_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLinkAccountCallbackProxy_eventOnlineUnlinkAccount_Parms, ReturnValue), Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLinkAccountCallbackProxy, nullptr, "OnlineUnlinkAccount", nullptr, nullptr, sizeof(OnlineLinkAccountCallbackProxy_eventOnlineUnlinkAccount_Parms), Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_NoRegister()
	{
		return UOnlineLinkAccountCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName, "OnlineGetLinkedAccountDisplayName" }, // 2495467297
		{ &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled, "OnlineIsAccountLinkingEnabled" }, // 3858960099
		{ &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineIsLinked, "OnlineIsLinked" }, // 2179702138
		{ &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineLinkAccount, "OnlineLinkAccount" }, // 2075469608
		{ &Z_Construct_UFunction_UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount, "OnlineUnlinkAccount" }, // 20468591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineLinkAccountCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineLinkAccountCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineLinkAccountCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_OnlineAccountLinkResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineLinkAccountCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineLinkAccountCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineLinkAccountCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_OnlineAccountLinkResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLinkAccountCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::ClassParams = {
		&UOnlineLinkAccountCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLinkAccountCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineLinkAccountCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineLinkAccountCallbackProxy, 2964372696);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineLinkAccountCallbackProxy>()
	{
		return UOnlineLinkAccountCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineLinkAccountCallbackProxy(Z_Construct_UClass_UOnlineLinkAccountCallbackProxy, &UOnlineLinkAccountCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineLinkAccountCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLinkAccountCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
