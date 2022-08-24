// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFabCommon/Public/PlayFabAuthenticationContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationContext() {}
// Cross Module References
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlayFabCommon();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execClientAdminSecurityCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAdminSecurityCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execForgetAllCredentials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAllCredentials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetClientSessionTicket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetClientSessionTicket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetDeveloperSecretKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeveloperSecretKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetEntityToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEntityToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetPlayFabId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayFabId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetClientSessionTicket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTicket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClientSessionTicket(Z_Param_InTicket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetDeveloperSecretKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeveloperSecretKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetEntityToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntityToken(Z_Param_InToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetPlayFabId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayFabId(Z_Param_InKey);
		P_NATIVE_END;
	}
	void UPlayFabAuthenticationContext::StaticRegisterNativesUPlayFabAuthenticationContext()
	{
		UClass* Class = UPlayFabAuthenticationContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAdminSecurityCheck", &UPlayFabAuthenticationContext::execClientAdminSecurityCheck },
			{ "ForgetAllCredentials", &UPlayFabAuthenticationContext::execForgetAllCredentials },
			{ "GetClientSessionTicket", &UPlayFabAuthenticationContext::execGetClientSessionTicket },
			{ "GetDeveloperSecretKey", &UPlayFabAuthenticationContext::execGetDeveloperSecretKey },
			{ "GetEntityToken", &UPlayFabAuthenticationContext::execGetEntityToken },
			{ "GetPlayFabId", &UPlayFabAuthenticationContext::execGetPlayFabId },
			{ "SetClientSessionTicket", &UPlayFabAuthenticationContext::execSetClientSessionTicket },
			{ "SetDeveloperSecretKey", &UPlayFabAuthenticationContext::execSetDeveloperSecretKey },
			{ "SetEntityToken", &UPlayFabAuthenticationContext::execSetEntityToken },
			{ "SetPlayFabId", &UPlayFabAuthenticationContext::execSetPlayFabId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "ClientAdminSecurityCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "ForgetAllCredentials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics
	{
		struct PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetClientSessionTicket", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics
	{
		struct PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetDeveloperSecretKey", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics
	{
		struct PlayFabAuthenticationContext_eventGetEntityToken_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetEntityToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventGetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics
	{
		struct PlayFabAuthenticationContext_eventGetPlayFabId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetPlayFabId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetPlayFabId", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventGetPlayFabId_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics
	{
		struct PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms
		{
			FString InTicket;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTicket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket = { "InTicket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms, InTicket), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetClientSessionTicket", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics
	{
		struct PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms
		{
			FString InKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetDeveloperSecretKey", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics
	{
		struct PlayFabAuthenticationContext_eventSetEntityToken_Parms
		{
			FString InToken;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken = { "InToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetEntityToken_Parms, InToken), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventSetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics
	{
		struct PlayFabAuthenticationContext_eventSetPlayFabId_Parms
		{
			FString InKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetPlayFabId_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetPlayFabId", nullptr, nullptr, sizeof(PlayFabAuthenticationContext_eventSetPlayFabId_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister()
	{
		return UPlayFabAuthenticationContext::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabAuthenticationContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSessionTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSessionTicket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntityToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFabCommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck, "ClientAdminSecurityCheck" }, // 254814576
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials, "ForgetAllCredentials" }, // 537234045
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket, "GetClientSessionTicket" }, // 3005819522
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey, "GetDeveloperSecretKey" }, // 1791652790
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken, "GetEntityToken" }, // 1365240772
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId, "GetPlayFabId" }, // 1928373701
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket, "SetClientSessionTicket" }, // 2334859935
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey, "SetDeveloperSecretKey" }, // 2146688498
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken, "SetEntityToken" }, // 3800445395
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId, "SetPlayFabId" }, // 3058568084
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabAuthenticationContext.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationContext" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket = { "ClientSessionTicket", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, ClientSessionTicket), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationContext" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, EntityToken), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationContext" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey = { "DeveloperSecretKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, DeveloperSecretKey), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationContext" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, PlayFabId), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::ClassParams = {
		&UPlayFabAuthenticationContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabAuthenticationContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabAuthenticationContext, 1728815964);
	template<> PLAYFABCOMMON_API UClass* StaticClass<UPlayFabAuthenticationContext>()
	{
		return UPlayFabAuthenticationContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabAuthenticationContext(Z_Construct_UClass_UPlayFabAuthenticationContext, &UPlayFabAuthenticationContext::StaticClass, TEXT("/Script/PlayFabCommon"), TEXT("UPlayFabAuthenticationContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
