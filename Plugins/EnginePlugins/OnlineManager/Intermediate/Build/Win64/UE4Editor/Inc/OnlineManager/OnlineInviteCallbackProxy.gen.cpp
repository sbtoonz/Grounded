// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineInviteCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineInviteCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineInviteCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineInviteCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINEMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintFriendResult();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineInviteCallbackProxy::execOnlineHasInvitationWaitingLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineInviteCallbackProxy::OnlineHasInvitationWaitingLogin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineInviteCallbackProxy::execOnlineSendInvite)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_TargetPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineInviteCallbackProxy**)Z_Param__Result=UOnlineInviteCallbackProxy::OnlineSendInvite(Z_Param_WorldContextObject,Z_Param_InPlayerController,Z_Param_Out_TargetPlayer);
		P_NATIVE_END;
	}
	void UOnlineInviteCallbackProxy::StaticRegisterNativesUOnlineInviteCallbackProxy()
	{
		UClass* Class = UOnlineInviteCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineHasInvitationWaitingLogin", &UOnlineInviteCallbackProxy::execOnlineHasInvitationWaitingLogin },
			{ "OnlineSendInvite", &UOnlineInviteCallbackProxy::execOnlineSendInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics
	{
		struct OnlineInviteCallbackProxy_eventOnlineHasInvitationWaitingLogin_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineInviteCallbackProxy_eventOnlineHasInvitationWaitingLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineInviteCallbackProxy_eventOnlineHasInvitationWaitingLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineInviteCallbackProxy_eventOnlineHasInvitationWaitingLogin_Parms), &Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineInviteCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineInviteCallbackProxy, nullptr, "OnlineHasInvitationWaitingLogin", nullptr, nullptr, sizeof(OnlineInviteCallbackProxy_eventOnlineHasInvitationWaitingLogin_Parms), Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics
	{
		struct OnlineInviteCallbackProxy_eventOnlineSendInvite_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			FBlueprintFriendResult TargetPlayer;
			UOnlineInviteCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineInviteCallbackProxy_eventOnlineSendInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineInviteCallbackProxy_eventOnlineSendInvite_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_TargetPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineInviteCallbackProxy_eventOnlineSendInvite_Parms, TargetPlayer), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_TargetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_TargetPlayer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineInviteCallbackProxy_eventOnlineSendInvite_Parms, ReturnValue), Z_Construct_UClass_UOnlineInviteCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_TargetPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineInviteCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineInviteCallbackProxy, nullptr, "OnlineSendInvite", nullptr, nullptr, sizeof(OnlineInviteCallbackProxy_eventOnlineSendInvite_Parms), Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineInviteCallbackProxy_NoRegister()
	{
		return UOnlineInviteCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin, "OnlineHasInvitationWaitingLogin" }, // 507596059
		{ &Z_Construct_UFunction_UOnlineInviteCallbackProxy_OnlineSendInvite, "OnlineSendInvite" }, // 663336411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineInviteCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineInviteCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineInviteCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineInviteCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineInviteCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineInviteCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineInviteCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineInviteCallbackProxy, onFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineInviteCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::ClassParams = {
		&UOnlineInviteCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineInviteCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineInviteCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineInviteCallbackProxy, 1075642616);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineInviteCallbackProxy>()
	{
		return UOnlineInviteCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineInviteCallbackProxy(Z_Construct_UClass_UOnlineInviteCallbackProxy, &UOnlineInviteCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineInviteCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineInviteCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
