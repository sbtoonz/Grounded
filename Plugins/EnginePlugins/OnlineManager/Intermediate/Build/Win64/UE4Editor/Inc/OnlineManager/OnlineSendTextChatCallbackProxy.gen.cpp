// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineSendTextChatCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSendTextChatCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineSendTextChatCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineSendTextChatCallbackProxy::execOnlineIsTTSEnabled)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineSendTextChatCallbackProxy::OnlineIsTTSEnabled(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSendTextChatCallbackProxy::execOnlineSendChatMessage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerControllerconst);
		P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineSendTextChatCallbackProxy**)Z_Param__Result=UOnlineSendTextChatCallbackProxy::OnlineSendChatMessage(Z_Param_WorldContextObject,Z_Param_PlayerControllerconst,Z_Param_InChatMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSendTextChatCallbackProxy::execOnlineSetTTSEnable)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineSendTextChatCallbackProxy::OnlineSetTTSEnable(Z_Param_InPlayerController,Z_Param_bEnable);
		P_NATIVE_END;
	}
	void UOnlineSendTextChatCallbackProxy::StaticRegisterNativesUOnlineSendTextChatCallbackProxy()
	{
		UClass* Class = UOnlineSendTextChatCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineIsTTSEnabled", &UOnlineSendTextChatCallbackProxy::execOnlineIsTTSEnabled },
			{ "OnlineSendChatMessage", &UOnlineSendTextChatCallbackProxy::execOnlineSendChatMessage },
			{ "OnlineSetTTSEnable", &UOnlineSendTextChatCallbackProxy::execOnlineSetTTSEnable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics
	{
		struct OnlineSendTextChatCallbackProxy_eventOnlineIsTTSEnabled_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineSendTextChatCallbackProxy_eventOnlineIsTTSEnabled_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineSendTextChatCallbackProxy_eventOnlineIsTTSEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineSendTextChatCallbackProxy_eventOnlineIsTTSEnabled_Parms), &Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineSendTextChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSendTextChatCallbackProxy, nullptr, "OnlineIsTTSEnabled", nullptr, nullptr, sizeof(OnlineSendTextChatCallbackProxy_eventOnlineIsTTSEnabled_Parms), Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics
	{
		struct OnlineSendTextChatCallbackProxy_eventOnlineSendChatMessage_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerControllerconst;
			FString InChatMessage;
			UOnlineSendTextChatCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerControllerconst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InChatMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineSendTextChatCallbackProxy_eventOnlineSendChatMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_PlayerControllerconst = { "PlayerControllerconst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineSendTextChatCallbackProxy_eventOnlineSendChatMessage_Parms, PlayerControllerconst), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_InChatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_InChatMessage = { "InChatMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineSendTextChatCallbackProxy_eventOnlineSendChatMessage_Parms, InChatMessage), METADATA_PARAMS(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_InChatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_InChatMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineSendTextChatCallbackProxy_eventOnlineSendChatMessage_Parms, ReturnValue), Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_PlayerControllerconst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_InChatMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineSendTextChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSendTextChatCallbackProxy, nullptr, "OnlineSendChatMessage", nullptr, nullptr, sizeof(OnlineSendTextChatCallbackProxy_eventOnlineSendChatMessage_Parms), Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics
	{
		struct OnlineSendTextChatCallbackProxy_eventOnlineSetTTSEnable_Parms
		{
			APlayerController* InPlayerController;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineSendTextChatCallbackProxy_eventOnlineSetTTSEnable_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((OnlineSendTextChatCallbackProxy_eventOnlineSetTTSEnable_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineSendTextChatCallbackProxy_eventOnlineSetTTSEnable_Parms), &Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineSendTextChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSendTextChatCallbackProxy, nullptr, "OnlineSetTTSEnable", nullptr, nullptr, sizeof(OnlineSendTextChatCallbackProxy_eventOnlineSetTTSEnable_Parms), Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_NoRegister()
	{
		return UOnlineSendTextChatCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled, "OnlineIsTTSEnabled" }, // 3505217142
		{ &Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage, "OnlineSendChatMessage" }, // 2261563760
		{ &Z_Construct_UFunction_UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable, "OnlineSetTTSEnable" }, // 3869949629
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineSendTextChatCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineSendTextChatCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineSendTextChatCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineSendTextChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSendTextChatCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineSendTextChatCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineSendTextChatCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSendTextChatCallbackProxy, onFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSendTextChatCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::ClassParams = {
		&UOnlineSendTextChatCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSendTextChatCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineSendTextChatCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineSendTextChatCallbackProxy, 765151762);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineSendTextChatCallbackProxy>()
	{
		return UOnlineSendTextChatCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineSendTextChatCallbackProxy(Z_Construct_UClass_UOnlineSendTextChatCallbackProxy, &UOnlineSendTextChatCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineSendTextChatCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSendTextChatCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
