// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineLoginCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineLoginCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineLoginCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineLoginCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_OnlineLoginResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineLoginCallbackProxy::execOnlineGetDisplayName)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSubsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineLoginCallbackProxy::OnlineGetDisplayName(Z_Param_InPlayerController,Z_Param_InSubsystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLoginCallbackProxy::execOnlineIsLoggedIn)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineLoginCallbackProxy::OnlineIsLoggedIn(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLoginCallbackProxy::execOnlineLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLoginCallbackProxy**)Z_Param__Result=UOnlineLoginCallbackProxy::OnlineLogin(Z_Param_WorldContextObject,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	void UOnlineLoginCallbackProxy::StaticRegisterNativesUOnlineLoginCallbackProxy()
	{
		UClass* Class = UOnlineLoginCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineGetDisplayName", &UOnlineLoginCallbackProxy::execOnlineGetDisplayName },
			{ "OnlineIsLoggedIn", &UOnlineLoginCallbackProxy::execOnlineIsLoggedIn },
			{ "OnlineLogin", &UOnlineLoginCallbackProxy::execOnlineLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics
	{
		struct OnlineLoginCallbackProxy_eventOnlineGetDisplayName_Parms
		{
			APlayerController* InPlayerController;
			FName InSubsystem;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSubsystem;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineGetDisplayName_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::NewProp_InSubsystem = { "InSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineGetDisplayName_Parms, InSubsystem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::NewProp_InSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLoginCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLoginCallbackProxy, nullptr, "OnlineGetDisplayName", nullptr, nullptr, sizeof(OnlineLoginCallbackProxy_eventOnlineGetDisplayName_Parms), Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics
	{
		struct OnlineLoginCallbackProxy_eventOnlineIsLoggedIn_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineIsLoggedIn_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLoginCallbackProxy_eventOnlineIsLoggedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineLoginCallbackProxy_eventOnlineIsLoggedIn_Parms), &Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLoginCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLoginCallbackProxy, nullptr, "OnlineIsLoggedIn", nullptr, nullptr, sizeof(OnlineLoginCallbackProxy_eventOnlineIsLoggedIn_Parms), Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics
	{
		struct OnlineLoginCallbackProxy_eventOnlineLogin_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			UOnlineLoginCallbackProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineLogin_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineLoginCallbackProxy_eventOnlineLogin_Parms, ReturnValue), Z_Construct_UClass_UOnlineLoginCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineLoginCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLoginCallbackProxy, nullptr, "OnlineLogin", nullptr, nullptr, sizeof(OnlineLoginCallbackProxy_eventOnlineLogin_Parms), Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineLoginCallbackProxy_NoRegister()
	{
		return UOnlineLoginCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineGetDisplayName, "OnlineGetDisplayName" }, // 1493661202
		{ &Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineIsLoggedIn, "OnlineIsLoggedIn" }, // 3586404823
		{ &Z_Construct_UFunction_UOnlineLoginCallbackProxy_OnlineLogin, "OnlineLogin" }, // 2201225164
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineLoginCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineLoginCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineLoginCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineLoginCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineLoginCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_OnlineLoginResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineLoginCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineLoginCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineLoginCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_OnlineLoginResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLoginCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::ClassParams = {
		&UOnlineLoginCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLoginCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineLoginCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineLoginCallbackProxy, 1366567560);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineLoginCallbackProxy>()
	{
		return UOnlineLoginCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineLoginCallbackProxy(Z_Construct_UClass_UOnlineLoginCallbackProxy, &UOnlineLoginCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineLoginCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLoginCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
