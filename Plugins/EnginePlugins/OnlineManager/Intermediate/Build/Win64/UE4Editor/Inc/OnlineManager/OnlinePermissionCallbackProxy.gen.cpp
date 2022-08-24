// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlinePermissionCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePermissionCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlinePermissionCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlinePermissionCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlineUserPrivilege();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlinePermissionCallbackProxy::execOnlineCheckUserPrivilege)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_ENUM(EOnlineUserPrivilege,Z_Param_InPrivilegeToCheck);
		P_GET_UBOOL(Z_Param_bSilently);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePermissionCallbackProxy**)Z_Param__Result=UOnlinePermissionCallbackProxy::OnlineCheckUserPrivilege(Z_Param_WorldContextObject,Z_Param_InPlayerController,EOnlineUserPrivilege(Z_Param_InPrivilegeToCheck),Z_Param_bSilently,Z_Param_InSubsystemName);
		P_NATIVE_END;
	}
	void UOnlinePermissionCallbackProxy::StaticRegisterNativesUOnlinePermissionCallbackProxy()
	{
		UClass* Class = UOnlinePermissionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineCheckUserPrivilege", &UOnlinePermissionCallbackProxy::execOnlineCheckUserPrivilege },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics
	{
		struct OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			EOnlineUserPrivilege InPrivilegeToCheck;
			bool bSilently;
			FName InSubsystemName;
			UOnlinePermissionCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrivilegeToCheck_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrivilegeToCheck;
		static void NewProp_bSilently_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilently;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSubsystemName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InPrivilegeToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InPrivilegeToCheck = { "InPrivilegeToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms, InPrivilegeToCheck), Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlineUserPrivilege, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_bSilently_SetBit(void* Obj)
	{
		((OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms*)Obj)->bSilently = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_bSilently = { "bSilently", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms), &Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_bSilently_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InSubsystemName = { "InSubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms, InSubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms, ReturnValue), Z_Construct_UClass_UOnlinePermissionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InPrivilegeToCheck_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InPrivilegeToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_bSilently,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_InSubsystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePermissionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePermissionCallbackProxy, nullptr, "OnlineCheckUserPrivilege", nullptr, nullptr, sizeof(OnlinePermissionCallbackProxy_eventOnlineCheckUserPrivilege_Parms), Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePermissionCallbackProxy_NoRegister()
	{
		return UOnlinePermissionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege, "OnlineCheckUserPrivilege" }, // 1203219086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlinePermissionCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlinePermissionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlinePermissionCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlinePermissionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePermissionCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineCheckUserPrivilegeResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlinePermissionCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlinePermissionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePermissionCallbackProxy, onFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePermissionCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::ClassParams = {
		&UOnlinePermissionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePermissionCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePermissionCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePermissionCallbackProxy, 177765142);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlinePermissionCallbackProxy>()
	{
		return UOnlinePermissionCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePermissionCallbackProxy(Z_Construct_UClass_UOnlinePermissionCallbackProxy, &UOnlinePermissionCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlinePermissionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePermissionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
