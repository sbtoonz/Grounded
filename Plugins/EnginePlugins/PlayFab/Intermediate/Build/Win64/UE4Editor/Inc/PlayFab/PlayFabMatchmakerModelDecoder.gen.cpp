// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabMatchmakerModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabMatchmakerModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodeAuthUserResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerAuthUserResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodeAuthUserResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodePlayerJoinedResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerPlayerJoinedResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodePlayerJoinedResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodePlayerLeftResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerPlayerLeftResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodePlayerLeftResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodeStartGameResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerStartGameResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodeStartGameResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodeUserInfoResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerUserInfoResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodeUserInfoResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabMatchmakerModelDecoder::StaticRegisterNativesUPlayFabMatchmakerModelDecoder()
	{
		UClass* Class = UPlayFabMatchmakerModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeAuthUserResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodeAuthUserResponseResponse },
			{ "decodePlayerJoinedResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodePlayerJoinedResponseResponse },
			{ "decodePlayerLeftResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodePlayerLeftResponseResponse },
			{ "decodeStartGameResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodeStartGameResponseResponse },
			{ "decodeUserInfoResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodeUserInfoResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerAuthUserResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodeAuthUserResponseResponse", nullptr, nullptr, sizeof(PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerPlayerJoinedResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodePlayerJoinedResponseResponse", nullptr, nullptr, sizeof(PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerPlayerLeftResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodePlayerLeftResponseResponse", nullptr, nullptr, sizeof(PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodeStartGameResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerStartGameResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeStartGameResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeStartGameResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerStartGameResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodeStartGameResponseResponse", nullptr, nullptr, sizeof(PlayFabMatchmakerModelDecoder_eventdecodeStartGameResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerUserInfoResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodeUserInfoResponseResponse", nullptr, nullptr, sizeof(PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_NoRegister()
	{
		return UPlayFabMatchmakerModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse, "decodeAuthUserResponseResponse" }, // 2982721522
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse, "decodePlayerJoinedResponseResponse" }, // 580738465
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse, "decodePlayerLeftResponseResponse" }, // 2189625339
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeStartGameResponseResponse, "decodeStartGameResponseResponse" }, // 3980390492
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse, "decodeUserInfoResponseResponse" }, // 2931942540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabMatchmakerModelDecoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabMatchmakerModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::ClassParams = {
		&UPlayFabMatchmakerModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabMatchmakerModelDecoder, 3270681029);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabMatchmakerModelDecoder>()
	{
		return UPlayFabMatchmakerModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabMatchmakerModelDecoder(Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, &UPlayFabMatchmakerModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabMatchmakerModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabMatchmakerModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
