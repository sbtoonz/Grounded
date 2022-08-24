// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabProfilesModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProfilesModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetEntityProfileResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesGetEntityProfileResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetEntityProfileResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetEntityProfilesResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesGetEntityProfilesResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetEntityProfilesResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetGlobalPolicyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesGetGlobalPolicyResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetGlobalPolicyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetEntityProfilePolicyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesSetEntityProfilePolicyResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetEntityProfilePolicyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetGlobalPolicyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesSetGlobalPolicyResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetGlobalPolicyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetProfileLanguageResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProfilesSetProfileLanguageResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetProfileLanguageResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabProfilesModelDecoder::StaticRegisterNativesUPlayFabProfilesModelDecoder()
	{
		UClass* Class = UPlayFabProfilesModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeGetEntityProfileResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetEntityProfileResponseResponse },
			{ "decodeGetEntityProfilesResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetEntityProfilesResponseResponse },
			{ "decodeGetGlobalPolicyResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetGlobalPolicyResponseResponse },
			{ "decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse },
			{ "decodeSetEntityProfilePolicyResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetEntityProfilePolicyResponseResponse },
			{ "decodeSetGlobalPolicyResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetGlobalPolicyResponseResponse },
			{ "decodeSetProfileLanguageResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetProfileLanguageResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesGetEntityProfileResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetEntityProfileResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesGetEntityProfilesResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetEntityProfilesResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesGetGlobalPolicyResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetGlobalPolicyResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesSetEntityProfilePolicyResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetEntityProfilePolicyResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesSetGlobalPolicyResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetGlobalPolicyResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics
	{
		struct PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FProfilesSetProfileLanguageResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetProfileLanguageResponseResponse", nullptr, nullptr, sizeof(PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder_NoRegister()
	{
		return UPlayFabProfilesModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse, "decodeGetEntityProfileResponseResponse" }, // 3056681045
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse, "decodeGetEntityProfilesResponseResponse" }, // 3329237652
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse, "decodeGetGlobalPolicyResponseResponse" }, // 3425589615
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse, "decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse" }, // 2587432679
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse, "decodeSetEntityProfilePolicyResponseResponse" }, // 1300267275
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse, "decodeSetGlobalPolicyResponseResponse" }, // 2042837742
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse, "decodeSetProfileLanguageResponseResponse" }, // 4096079420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabProfilesModelDecoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabProfilesModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabProfilesModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::ClassParams = {
		&UPlayFabProfilesModelDecoder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabProfilesModelDecoder, 1998771542);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabProfilesModelDecoder>()
	{
		return UPlayFabProfilesModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabProfilesModelDecoder(Z_Construct_UClass_UPlayFabProfilesModelDecoder, &UPlayFabProfilesModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabProfilesModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabProfilesModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
