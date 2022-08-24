// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineCheckTimeSyncCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineCheckTimeSyncCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics
	{
		struct OnlineCheckTimeSyncCallbackProxy_eventOnCompletedDelegate_Parms
		{
			float TimeOffsetSec;
			float NetworkDelaySec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOffsetSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkDelaySec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::NewProp_TimeOffsetSec = { "TimeOffsetSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineCheckTimeSyncCallbackProxy_eventOnCompletedDelegate_Parms, TimeOffsetSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::NewProp_NetworkDelaySec = { "NetworkDelaySec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineCheckTimeSyncCallbackProxy_eventOnCompletedDelegate_Parms, NetworkDelaySec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::NewProp_TimeOffsetSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::NewProp_NetworkDelaySec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineCheckTimeSyncCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy, nullptr, "OnCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(OnlineCheckTimeSyncCallbackProxy_eventOnCompletedDelegate_Parms), Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineCheckTimeSyncCallbackProxy::execOnlineCheckTimeSync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineCheckTimeSyncCallbackProxy**)Z_Param__Result=UOnlineCheckTimeSyncCallbackProxy::OnlineCheckTimeSync(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UOnlineCheckTimeSyncCallbackProxy::StaticRegisterNativesUOnlineCheckTimeSyncCallbackProxy()
	{
		UClass* Class = UOnlineCheckTimeSyncCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineCheckTimeSync", &UOnlineCheckTimeSyncCallbackProxy::execOnlineCheckTimeSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics
	{
		struct OnlineCheckTimeSyncCallbackProxy_eventOnlineCheckTimeSync_Parms
		{
			UObject* WorldContextObject;
			UOnlineCheckTimeSyncCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineCheckTimeSyncCallbackProxy_eventOnlineCheckTimeSync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineCheckTimeSyncCallbackProxy_eventOnlineCheckTimeSync_Parms, ReturnValue), Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineCheckTimeSyncCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy, nullptr, "OnlineCheckTimeSync", nullptr, nullptr, sizeof(OnlineCheckTimeSyncCallbackProxy_eventOnlineCheckTimeSync_Parms), Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_NoRegister()
	{
		return UOnlineCheckTimeSyncCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature, "OnCompletedDelegate__DelegateSignature" }, // 2460305762
		{ &Z_Construct_UFunction_UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync, "OnlineCheckTimeSync" }, // 3001172778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineCheckTimeSyncCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineCheckTimeSyncCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineCheckTimeSyncCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineCheckTimeSyncCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineCheckTimeSyncCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineCheckTimeSyncCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineCheckTimeSyncCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineCheckTimeSyncCallbackProxy, onFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineCheckTimeSyncCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::ClassParams = {
		&UOnlineCheckTimeSyncCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineCheckTimeSyncCallbackProxy, 2039229756);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineCheckTimeSyncCallbackProxy>()
	{
		return UOnlineCheckTimeSyncCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineCheckTimeSyncCallbackProxy(Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy, &UOnlineCheckTimeSyncCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineCheckTimeSyncCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineCheckTimeSyncCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
