// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineRefreshFriendListCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineRefreshFriendListCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintRefreshFriendListResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineRefreshFriendListCallbackProxy::execOnlineRefreshFriendList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_ListName);
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineRefreshFriendListCallbackProxy**)Z_Param__Result=UOnlineRefreshFriendListCallbackProxy::OnlineRefreshFriendList(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_ListName,Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	void UOnlineRefreshFriendListCallbackProxy::StaticRegisterNativesUOnlineRefreshFriendListCallbackProxy()
	{
		UClass* Class = UOnlineRefreshFriendListCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineRefreshFriendList", &UOnlineRefreshFriendListCallbackProxy::execOnlineRefreshFriendList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics
	{
		struct OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FString ListName;
			FName SubsystemName;
			UOnlineRefreshFriendListCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ListName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ListName = { "ListName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms, ListName), METADATA_PARAMS(Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ListName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ListName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms, ReturnValue), Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ListName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_SubsystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineRefreshFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy, nullptr, "OnlineRefreshFriendList", nullptr, nullptr, sizeof(OnlineRefreshFriendListCallbackProxy_eventOnlineRefreshFriendList_Parms), Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_NoRegister()
	{
		return UOnlineRefreshFriendListCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList, "OnlineRefreshFriendList" }, // 3827868009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineRefreshFriendListCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineRefreshFriendListCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRefreshFriendListCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineRefreshFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineRefreshFriendListCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_BlueprintRefreshFriendListResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineRefreshFriendListCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineRefreshFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineRefreshFriendListCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_BlueprintRefreshFriendListResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineRefreshFriendListCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::ClassParams = {
		&UOnlineRefreshFriendListCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineRefreshFriendListCallbackProxy, 343785203);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineRefreshFriendListCallbackProxy>()
	{
		return UOnlineRefreshFriendListCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineRefreshFriendListCallbackProxy(Z_Construct_UClass_UOnlineRefreshFriendListCallbackProxy, &UOnlineRefreshFriendListCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineRefreshFriendListCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineRefreshFriendListCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
