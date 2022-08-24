// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineLogoutCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineLogoutCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineLogoutCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineLogoutCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_OnlineLogoutResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineLogoutCallbackProxy::execOnlineLogout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLogoutCallbackProxy**)Z_Param__Result=UOnlineLogoutCallbackProxy::OnlineLogout(Z_Param_WorldContextObject,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	void UOnlineLogoutCallbackProxy::StaticRegisterNativesUOnlineLogoutCallbackProxy()
	{
		UClass* Class = UOnlineLogoutCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineLogout", &UOnlineLogoutCallbackProxy::execOnlineLogout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics
	{
		struct OnlineLogoutCallbackProxy_eventOnlineLogout_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			UOnlineLogoutCallbackProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLogoutCallbackProxy_eventOnlineLogout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLogoutCallbackProxy_eventOnlineLogout_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLogoutCallbackProxy_eventOnlineLogout_Parms, ReturnValue), Z_Construct_UClass_UOnlineLogoutCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLogoutCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLogoutCallbackProxy, nullptr, "OnlineLogout", nullptr, nullptr, sizeof(OnlineLogoutCallbackProxy_eventOnlineLogout_Parms), Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineLogoutCallbackProxy_NoRegister()
	{
		return UOnlineLogoutCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLogoutCallbackProxy_OnlineLogout, "OnlineLogout" }, // 3428713765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineLogoutCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineLogoutCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineLogoutCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineLogoutCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineLogoutCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_OnlineLogoutResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineLogoutCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineLogoutCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineLogoutCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_OnlineLogoutResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLogoutCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::ClassParams = {
		&UOnlineLogoutCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLogoutCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineLogoutCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineLogoutCallbackProxy, 4243364279);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineLogoutCallbackProxy>()
	{
		return UOnlineLogoutCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineLogoutCallbackProxy(Z_Construct_UClass_UOnlineLogoutCallbackProxy, &UOnlineLogoutCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineLogoutCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLogoutCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
