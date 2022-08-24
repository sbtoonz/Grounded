// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineGetFriendListCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineGetFriendListCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineGetFriendListCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	ONLINEMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintFriendResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINEMANAGER_API UEnum* Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize();
	ONLINEMANAGER_API UFunction* Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineGetFriendListResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendDisplayName)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendDisplayName(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendInviteState)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendInviteState(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsJoinable)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsJoinable(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsOnline)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsOnline(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsPlaying)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsPlaying(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsPlayingThisGame)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsPlayingThisGame(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_ListName);
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGetFriendListCallbackProxy**)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendList(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_ListName,Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendPictureURI)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_GET_ENUM(EBlueprintProfilePictureSize,Z_Param_PictureSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendPictureURI(Z_Param_Out_Result,EBlueprintProfilePictureSize(Z_Param_PictureSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendUserID)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendUserID(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGetFriendListCallbackProxy::execOnlineGetFriendUserXUID)
	{
		P_GET_STRUCT_REF(FBlueprintFriendResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineGetFriendListCallbackProxy::OnlineGetFriendUserXUID(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void UOnlineGetFriendListCallbackProxy::StaticRegisterNativesUOnlineGetFriendListCallbackProxy()
	{
		UClass* Class = UOnlineGetFriendListCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineGetFriendDisplayName", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendDisplayName },
			{ "OnlineGetFriendInviteState", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendInviteState },
			{ "OnlineGetFriendIsJoinable", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsJoinable },
			{ "OnlineGetFriendIsOnline", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsOnline },
			{ "OnlineGetFriendIsPlaying", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsPlaying },
			{ "OnlineGetFriendIsPlayingThisGame", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendIsPlayingThisGame },
			{ "OnlineGetFriendList", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendList },
			{ "OnlineGetFriendPictureURI", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendPictureURI },
			{ "OnlineGetFriendUserID", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendUserID },
			{ "OnlineGetFriendUserXUID", &UOnlineGetFriendListCallbackProxy::execOnlineGetFriendUserXUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendDisplayName_Parms
		{
			FBlueprintFriendResult Result;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendDisplayName_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendDisplayName", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendDisplayName_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendInviteState_Parms
		{
			FBlueprintFriendResult Result;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendInviteState_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendInviteState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendInviteState", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendInviteState_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsJoinable_Parms
		{
			FBlueprintFriendResult Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsJoinable_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_Result_MetaData)) };
	void Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsJoinable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsJoinable_Parms), &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendIsJoinable", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsJoinable_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsOnline_Parms
		{
			FBlueprintFriendResult Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsOnline_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_Result_MetaData)) };
	void Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsOnline_Parms), &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendIsOnline", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsOnline_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlaying_Parms
		{
			FBlueprintFriendResult Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlaying_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_Result_MetaData)) };
	void Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlaying_Parms), &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendIsPlaying", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlaying_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlayingThisGame_Parms
		{
			FBlueprintFriendResult Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlayingThisGame_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_Result_MetaData)) };
	void Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlayingThisGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlayingThisGame_Parms), &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendIsPlayingThisGame", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendIsPlayingThisGame_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FString ListName;
			FName SubsystemName;
			UOnlineGetFriendListCallbackProxy* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ListName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ListName = { "ListName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms, ListName), METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ListName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ListName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms, ReturnValue), Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ListName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_SubsystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendList", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendList_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendPictureURI_Parms
		{
			FBlueprintFriendResult Result;
			EBlueprintProfilePictureSize PictureSize;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendPictureURI_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_PictureSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_PictureSize = { "PictureSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendPictureURI_Parms, PictureSize), Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendPictureURI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_PictureSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_PictureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendPictureURI", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendPictureURI_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserID_Parms
		{
			FBlueprintFriendResult Result;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserID_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendUserID", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserID_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics
	{
		struct OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserXUID_Parms
		{
			FBlueprintFriendResult Result;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserXUID_Parms, Result), Z_Construct_UScriptStruct_FBlueprintFriendResult, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserXUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, nullptr, "OnlineGetFriendUserXUID", nullptr, nullptr, sizeof(OnlineGetFriendListCallbackProxy_eventOnlineGetFriendUserXUID_Parms), Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_NoRegister()
	{
		return UOnlineGetFriendListCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName, "OnlineGetFriendDisplayName" }, // 2908079087
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState, "OnlineGetFriendInviteState" }, // 4220934896
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable, "OnlineGetFriendIsJoinable" }, // 3689334594
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline, "OnlineGetFriendIsOnline" }, // 4027459785
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying, "OnlineGetFriendIsPlaying" }, // 2918446202
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame, "OnlineGetFriendIsPlayingThisGame" }, // 1528754751
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendList, "OnlineGetFriendList" }, // 21882886
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI, "OnlineGetFriendPictureURI" }, // 2473219954
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserID, "OnlineGetFriendUserID" }, // 2577945580
		{ &Z_Construct_UFunction_UOnlineGetFriendListCallbackProxy_OnlineGetFriendUserXUID, "OnlineGetFriendUserXUID" }, // 3752280509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineGetFriendListCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineGetFriendListCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGetFriendListCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineGetFriendListResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineGetFriendListCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineGetFriendListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGetFriendListCallbackProxy, onFailure), Z_Construct_UDelegateFunction_OnlineManager_BlueprintOnlineGetFriendListResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGetFriendListCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::ClassParams = {
		&UOnlineGetFriendListCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGetFriendListCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineGetFriendListCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineGetFriendListCallbackProxy, 2084335035);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineGetFriendListCallbackProxy>()
	{
		return UOnlineGetFriendListCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineGetFriendListCallbackProxy(Z_Construct_UClass_UOnlineGetFriendListCallbackProxy, &UOnlineGetFriendListCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineGetFriendListCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGetFriendListCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
