// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineGetUserAccountsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineGetUserAccountsCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	ONLINEMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult();
	ONLINEMANAGER_API UEnum* Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineGetUserAccountsResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountDisplayName)
	{
		P_GET_STRUCT_REF(FBlueprintUserOnlineAccountResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountDisplayName(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountPictureURI)
	{
		P_GET_STRUCT_REF(FBlueprintUserOnlineAccountResult,Z_Param_Out_Result);
		P_GET_ENUM(EBlueprintUserProfilePictureSize,Z_Param_PictureSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountPictureURI(Z_Param_Out_Result,EBlueprintUserProfilePictureSize(Z_Param_PictureSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountsList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_TARRAY_REF(FString,Z_Param_Out_UserIDs);
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGetUserAccountsCallbackProxy**)Z_Param__Result=UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountsList(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_UserIDs,Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountUserID)
	{
		P_GET_STRUCT_REF(FBlueprintUserOnlineAccountResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountUserID(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountUserXUID)
	{
		P_GET_STRUCT_REF(FBlueprintUserOnlineAccountResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountUserXUID(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void UOnlineGetUserAccountsCallbackProxy::StaticRegisterNativesUOnlineGetUserAccountsCallbackProxy()
	{
		UClass* Class = UOnlineGetUserAccountsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineGetUserAccountDisplayName", &UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountDisplayName },
			{ "OnlineGetUserAccountPictureURI", &UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountPictureURI },
			{ "OnlineGetUserAccountsList", &UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountsList },
			{ "OnlineGetUserAccountUserID", &UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountUserID },
			{ "OnlineGetUserAccountUserXUID", &UOnlineGetUserAccountsCallbackProxy::execOnlineGetUserAccountUserXUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics
	{
		struct OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountDisplayName_Parms
		{
			FBlueprintUserOnlineAccountResult Result;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountDisplayName_Parms, Result), Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy, nullptr, "OnlineGetUserAccountDisplayName", nullptr, nullptr, sizeof(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountDisplayName_Parms), Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics
	{
		struct OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountPictureURI_Parms
		{
			FBlueprintUserOnlineAccountResult Result;
			EBlueprintUserProfilePictureSize PictureSize;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PictureSize_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PictureSize;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountPictureURI_Parms, Result), Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_PictureSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_PictureSize = { "PictureSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountPictureURI_Parms, PictureSize), Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountPictureURI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_PictureSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_PictureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy, nullptr, "OnlineGetUserAccountPictureURI", nullptr, nullptr, sizeof(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountPictureURI_Parms), Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics
	{
		struct OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			TArray<FString> UserIDs;
			FName SubsystemName;
			UOnlineGetUserAccountsCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIDs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs_Inner = { "UserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs = { "UserIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms, UserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms, ReturnValue), Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_UserIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_SubsystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy, nullptr, "OnlineGetUserAccountsList", nullptr, nullptr, sizeof(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountsList_Parms), Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics
	{
		struct OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserID_Parms
		{
			FBlueprintUserOnlineAccountResult Result;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserID_Parms, Result), Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy, nullptr, "OnlineGetUserAccountUserID", nullptr, nullptr, sizeof(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserID_Parms), Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics
	{
		struct OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserXUID_Parms
		{
			FBlueprintUserOnlineAccountResult Result;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserXUID_Parms, Result), Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserXUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy, nullptr, "OnlineGetUserAccountUserXUID", nullptr, nullptr, sizeof(OnlineGetUserAccountsCallbackProxy_eventOnlineGetUserAccountUserXUID_Parms), Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_NoRegister()
	{
		return UOnlineGetUserAccountsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountDisplayName, "OnlineGetUserAccountDisplayName" }, // 539190963
		{ &Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountPictureURI, "OnlineGetUserAccountPictureURI" }, // 677719303
		{ &Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountsList, "OnlineGetUserAccountsList" }, // 1260503670
		{ &Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserID, "OnlineGetUserAccountUserID" }, // 725529022
		{ &Z_Construct_UFunction_UOnlineGetUserAccountsCallbackProxy_OnlineGetUserAccountUserXUID, "OnlineGetUserAccountUserXUID" }, // 2209634550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineGetUserAccountsCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineGetUserAccountsCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGetUserAccountsCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineGetUserAccountsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineGetUserAccountsCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineGetUserAccountsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGetUserAccountsCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineGetUserAccountsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGetUserAccountsCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::ClassParams = {
		&UOnlineGetUserAccountsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineGetUserAccountsCallbackProxy, 1082363537);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineGetUserAccountsCallbackProxy>()
	{
		return UOnlineGetUserAccountsCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineGetUserAccountsCallbackProxy(Z_Construct_UClass_UOnlineGetUserAccountsCallbackProxy, &UOnlineGetUserAccountsCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineGetUserAccountsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGetUserAccountsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
