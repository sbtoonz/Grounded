// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineFindFriendSessionsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineFindFriendSessionsCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineFindFriendSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineFindFriendSessionsCallbackProxy::execOnlineFindFriendSessions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineFindFriendSessionsCallbackProxy**)Z_Param__Result=UOnlineFindFriendSessionsCallbackProxy::OnlineFindFriendSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	void UOnlineFindFriendSessionsCallbackProxy::StaticRegisterNativesUOnlineFindFriendSessionsCallbackProxy()
	{
		UClass* Class = UOnlineFindFriendSessionsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineFindFriendSessions", &UOnlineFindFriendSessionsCallbackProxy::execOnlineFindFriendSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics
	{
		struct OnlineFindFriendSessionsCallbackProxy_eventOnlineFindFriendSessions_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 MaxResults;
			UOnlineFindFriendSessionsCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineFindFriendSessionsCallbackProxy_eventOnlineFindFriendSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineFindFriendSessionsCallbackProxy_eventOnlineFindFriendSessions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineFindFriendSessionsCallbackProxy_eventOnlineFindFriendSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineFindFriendSessionsCallbackProxy_eventOnlineFindFriendSessions_Parms, ReturnValue), Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineFindFriendSessionsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy, nullptr, "OnlineFindFriendSessions", nullptr, nullptr, sizeof(OnlineFindFriendSessionsCallbackProxy_eventOnlineFindFriendSessions_Parms), Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_NoRegister()
	{
		return UOnlineFindFriendSessionsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions, "OnlineFindFriendSessions" }, // 431939715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineFindFriendSessionsCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineFindFriendSessionsCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineFindFriendSessionsCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineFindFriendSessionsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineFindFriendSessionsCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineFindFriendSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineFindFriendSessionsCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineFindFriendSessionsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineFindFriendSessionsCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineFindFriendSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineFindFriendSessionsCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::ClassParams = {
		&UOnlineFindFriendSessionsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineFindFriendSessionsCallbackProxy, 131686893);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineFindFriendSessionsCallbackProxy>()
	{
		return UOnlineFindFriendSessionsCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineFindFriendSessionsCallbackProxy(Z_Construct_UClass_UOnlineFindFriendSessionsCallbackProxy, &UOnlineFindFriendSessionsCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineFindFriendSessionsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineFindFriendSessionsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
