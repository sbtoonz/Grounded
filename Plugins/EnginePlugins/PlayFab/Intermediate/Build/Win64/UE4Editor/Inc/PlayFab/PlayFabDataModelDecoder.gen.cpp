// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabDataModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeAbortFileUploadsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataAbortFileUploadsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeAbortFileUploadsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeDeleteFilesResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataDeleteFilesResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeDeleteFilesResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeFinalizeFileUploadsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataFinalizeFileUploadsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeFinalizeFileUploadsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeGetFilesResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataGetFilesResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeGetFilesResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeGetObjectsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataGetObjectsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeGetObjectsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeInitiateFileUploadsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataInitiateFileUploadsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeInitiateFileUploadsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeSetObjectsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataSetObjectsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeSetObjectsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabDataModelDecoder::StaticRegisterNativesUPlayFabDataModelDecoder()
	{
		UClass* Class = UPlayFabDataModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeAbortFileUploadsResponseResponse", &UPlayFabDataModelDecoder::execdecodeAbortFileUploadsResponseResponse },
			{ "decodeDeleteFilesResponseResponse", &UPlayFabDataModelDecoder::execdecodeDeleteFilesResponseResponse },
			{ "decodeFinalizeFileUploadsResponseResponse", &UPlayFabDataModelDecoder::execdecodeFinalizeFileUploadsResponseResponse },
			{ "decodeGetFilesResponseResponse", &UPlayFabDataModelDecoder::execdecodeGetFilesResponseResponse },
			{ "decodeGetObjectsResponseResponse", &UPlayFabDataModelDecoder::execdecodeGetObjectsResponseResponse },
			{ "decodeInitiateFileUploadsResponseResponse", &UPlayFabDataModelDecoder::execdecodeInitiateFileUploadsResponseResponse },
			{ "decodeSetObjectsResponseResponse", &UPlayFabDataModelDecoder::execdecodeSetObjectsResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataAbortFileUploadsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeAbortFileUploadsResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataDeleteFilesResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataDeleteFilesResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeDeleteFilesResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataFinalizeFileUploadsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeFinalizeFileUploadsResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataGetFilesResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataGetFilesResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeGetFilesResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataGetObjectsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataGetObjectsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeGetObjectsResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataInitiateFileUploadsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeInitiateFileUploadsResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataSetObjectsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataSetObjectsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeSetObjectsResponseResponse", nullptr, nullptr, sizeof(PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabDataModelDecoder_NoRegister()
	{
		return UPlayFabDataModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabDataModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse, "decodeAbortFileUploadsResponseResponse" }, // 3119570704
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse, "decodeDeleteFilesResponseResponse" }, // 2309573467
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse, "decodeFinalizeFileUploadsResponseResponse" }, // 1690823114
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse, "decodeGetFilesResponseResponse" }, // 3606841906
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse, "decodeGetObjectsResponseResponse" }, // 2828777974
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse, "decodeInitiateFileUploadsResponseResponse" }, // 4087922741
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse, "decodeSetObjectsResponseResponse" }, // 113697364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabDataModelDecoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabDataModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabDataModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::ClassParams = {
		&UPlayFabDataModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabDataModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabDataModelDecoder, 3356739209);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabDataModelDecoder>()
	{
		return UPlayFabDataModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabDataModelDecoder(Z_Construct_UClass_UPlayFabDataModelDecoder, &UPlayFabDataModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabDataModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabDataModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
