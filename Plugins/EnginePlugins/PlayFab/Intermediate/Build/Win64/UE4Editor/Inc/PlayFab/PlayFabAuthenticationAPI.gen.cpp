// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabAuthenticationAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationAPI() {}
// Cross Module References
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms
		{
			FPlayFabError Error;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms, Error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms
		{
			FAuthenticationGetEntityTokenResponse Result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms, Result), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnSuccessGetEntityToken__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms
		{
			FAuthenticationValidateEntityTokenResponse Result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms, Result), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnSuccessValidateEntityToken__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execGetEntityToken)
	{
		P_GET_STRUCT(FAuthenticationGetEntityTokenRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabAuthenticationAPI**)Z_Param__Result=UPlayFabAuthenticationAPI::GetEntityToken(Z_Param_Request,FDelegateOnSuccessGetEntityToken(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execHelperGetEntityToken)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetEntityToken(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execHelperValidateEntityToken)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperValidateEntityToken(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execValidateEntityToken)
	{
		P_GET_STRUCT(FAuthenticationValidateEntityTokenRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabAuthenticationAPI**)Z_Param__Result=UPlayFabAuthenticationAPI::ValidateEntityToken(Z_Param_Request,FDelegateOnSuccessValidateEntityToken(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabAuthenticationAPI::StaticRegisterNativesUPlayFabAuthenticationAPI()
	{
		UClass* Class = UPlayFabAuthenticationAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntityToken", &UPlayFabAuthenticationAPI::execGetEntityToken },
			{ "HelperGetEntityToken", &UPlayFabAuthenticationAPI::execHelperGetEntityToken },
			{ "HelperValidateEntityToken", &UPlayFabAuthenticationAPI::execHelperValidateEntityToken },
			{ "ValidateEntityToken", &UPlayFabAuthenticationAPI::execValidateEntityToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventGetEntityToken_Parms
		{
			FAuthenticationGetEntityTokenRequest Request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabAuthenticationAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, Request), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, ReturnValue), Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "GetEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventGetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms), &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "HelperGetEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms), &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "HelperValidateEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventValidateEntityToken_Parms
		{
			FAuthenticationValidateEntityTokenRequest Request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabAuthenticationAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, Request), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, ReturnValue), Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "ValidateEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister()
	{
		return UPlayFabAuthenticationAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayFabResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallAuthenticationContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 3937429004
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature, "DelegateOnSuccessGetEntityToken__DelegateSignature" }, // 3925912194
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature, "DelegateOnSuccessValidateEntityToken__DelegateSignature" }, // 1957761003
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken, "GetEntityToken" }, // 269114913
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken, "HelperGetEntityToken" }, // 2572022739
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken, "HelperValidateEntityToken" }, // 4173861264
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken, "ValidateEntityToken" }, // 2682174735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabAuthenticationAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabAuthenticationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::ClassParams = {
		&UPlayFabAuthenticationAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabAuthenticationAPI, 3188572881);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabAuthenticationAPI>()
	{
		return UPlayFabAuthenticationAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabAuthenticationAPI(Z_Construct_UClass_UPlayFabAuthenticationAPI, &UPlayFabAuthenticationAPI::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabAuthenticationAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
