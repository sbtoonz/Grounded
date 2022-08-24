// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabLocalizationAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationAPI() {}
// Cross Module References
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationAPI();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationAPI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms, Error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics
	{
		struct PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms
		{
			FLocalizationGetLanguageListResponse Result;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms, Result), Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "DelegateOnSuccessGetLanguageList__DelegateSignature", nullptr, nullptr, sizeof(PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayFabLocalizationAPI::execGetLanguageList)
	{
		P_GET_STRUCT(FLocalizationGetLanguageListRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabLocalizationAPI**)Z_Param__Result=UPlayFabLocalizationAPI::GetLanguageList(Z_Param_Request,FDelegateOnSuccessGetLanguageList(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabLocalizationAPI::execHelperGetLanguageList)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetLanguageList(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	void UPlayFabLocalizationAPI::StaticRegisterNativesUPlayFabLocalizationAPI()
	{
		UClass* Class = UPlayFabLocalizationAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLanguageList", &UPlayFabLocalizationAPI::execGetLanguageList },
			{ "HelperGetLanguageList", &UPlayFabLocalizationAPI::execHelperGetLanguageList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics
	{
		struct PlayFabLocalizationAPI_eventGetLanguageList_Parms
		{
			FLocalizationGetLanguageListRequest Request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabLocalizationAPI* ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, Request), Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, ReturnValue), Z_Construct_UClass_UPlayFabLocalizationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "GetLanguageList", nullptr, nullptr, sizeof(PlayFabLocalizationAPI_eventGetLanguageList_Parms), Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics
	{
		struct PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms), &Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "HelperGetLanguageList", nullptr, nullptr, sizeof(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms), Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabLocalizationAPI_NoRegister()
	{
		return UPlayFabLocalizationAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 2327769924
		{ &Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature, "DelegateOnSuccessGetLanguageList__DelegateSignature" }, // 1886058650
		{ &Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList, "GetLanguageList" }, // 2495865087
		{ &Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList, "HelperGetLanguageList" }, // 1662253322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabLocalizationAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabLocalizationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabLocalizationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabLocalizationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabLocalizationAPI" },
		{ "ModuleRelativePath", "Public/PlayFabLocalizationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabLocalizationAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::ClassParams = {
		&UPlayFabLocalizationAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabLocalizationAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabLocalizationAPI, 1766806163);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabLocalizationAPI>()
	{
		return UPlayFabLocalizationAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabLocalizationAPI(Z_Construct_UClass_UPlayFabLocalizationAPI, &UPlayFabLocalizationAPI::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabLocalizationAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabLocalizationAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
