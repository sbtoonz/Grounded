// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlinePermissionToTargetCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePermissionToTargetCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPermissionResultDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlinePermissionToTargetCallbackProxy::execOnlineCheckUserPermissionTo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_InTargetPlayerState);
		P_GET_ENUM(EOnlinePermission,Z_Param_InPermissionToCheck);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePermissionToTargetCallbackProxy**)Z_Param__Result=UOnlinePermissionToTargetCallbackProxy::OnlineCheckUserPermissionTo(Z_Param_WorldContextObject,Z_Param_InPlayerController,Z_Param_InTargetPlayerState,EOnlinePermission(Z_Param_InPermissionToCheck),Z_Param_InSubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePermissionToTargetCallbackProxy::execOnlineCheckUserPermissionToCached)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_GET_ENUM(EOnlinePermission,Z_Param_InPermissionToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePermissionToTargetCallbackProxy::OnlineCheckUserPermissionToCached(Z_Param_InPlayerController,Z_Param_TargetPlayerState,EOnlinePermission(Z_Param_InPermissionToCheck));
		P_NATIVE_END;
	}
	void UOnlinePermissionToTargetCallbackProxy::StaticRegisterNativesUOnlinePermissionToTargetCallbackProxy()
	{
		UClass* Class = UOnlinePermissionToTargetCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineCheckUserPermissionTo", &UOnlinePermissionToTargetCallbackProxy::execOnlineCheckUserPermissionTo },
			{ "OnlineCheckUserPermissionToCached", &UOnlinePermissionToTargetCallbackProxy::execOnlineCheckUserPermissionToCached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics
	{
		struct OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			APlayerState* InTargetPlayerState;
			EOnlinePermission InPermissionToCheck;
			FName InSubsystemName;
			UOnlinePermissionToTargetCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTargetPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPermissionToCheck_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPermissionToCheck;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSubsystemName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InTargetPlayerState = { "InTargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms, InTargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InPermissionToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InPermissionToCheck = { "InPermissionToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms, InPermissionToCheck), Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InSubsystemName = { "InSubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms, InSubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms, ReturnValue), Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InTargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InPermissionToCheck_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InPermissionToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_InSubsystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePermissionToTargetCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy, nullptr, "OnlineCheckUserPermissionTo", nullptr, nullptr, sizeof(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionTo_Parms), Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics
	{
		struct OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			EOnlinePermission InPermissionToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPermissionToCheck_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPermissionToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_InPermissionToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_InPermissionToCheck = { "InPermissionToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms, InPermissionToCheck), Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms), &Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_InPermissionToCheck_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_InPermissionToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePermissionToTargetCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy, nullptr, "OnlineCheckUserPermissionToCached", nullptr, nullptr, sizeof(OnlinePermissionToTargetCallbackProxy_eventOnlineCheckUserPermissionToCached_Parms), Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_NoRegister()
	{
		return UOnlinePermissionToTargetCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo, "OnlineCheckUserPermissionTo" }, // 647406608
		{ &Z_Construct_UFunction_UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached, "OnlineCheckUserPermissionToCached" }, // 4200836001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlinePermissionToTargetCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlinePermissionToTargetCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlinePermissionToTargetCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlinePermissionToTargetCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePermissionToTargetCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPermissionResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlinePermissionToTargetCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlinePermissionToTargetCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePermissionToTargetCallbackProxy, onFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePermissionToTargetCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::ClassParams = {
		&UOnlinePermissionToTargetCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePermissionToTargetCallbackProxy, 1547696063);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlinePermissionToTargetCallbackProxy>()
	{
		return UOnlinePermissionToTargetCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePermissionToTargetCallbackProxy(Z_Construct_UClass_UOnlinePermissionToTargetCallbackProxy, &UOnlinePermissionToTargetCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlinePermissionToTargetCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePermissionToTargetCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
