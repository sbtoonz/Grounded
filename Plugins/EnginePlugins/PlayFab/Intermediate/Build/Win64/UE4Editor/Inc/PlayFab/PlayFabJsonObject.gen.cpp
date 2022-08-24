// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabJsonObject() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabJsonObject::execConstructJsonObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonObject**)Z_Param__Result=UPlayFabJsonObject::ConstructJsonObject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execDecodeJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execEncodeJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->EncodeJson();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPlayFabJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetBoolArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetFieldNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetNumberArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetObjectArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPlayFabJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execGetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execHasField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execMergeJsonObject)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_InJsonObject);
		P_GET_UBOOL(Z_Param_Overwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execRemoveField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(UPlayFabJsonValue*,Z_Param_Out_inArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_inArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetBoolArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UPlayFabJsonValue,Z_Param_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetFieldNull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFieldNull(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetNumberArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetObjectArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(UPlayFabJsonObject*,Z_Param_Out_ObjectArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonObject::execSetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue);
		P_NATIVE_END;
	}
	void UPlayFabJsonObject::StaticRegisterNativesUPlayFabJsonObject()
	{
		UClass* Class = UPlayFabJsonObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructJsonObject", &UPlayFabJsonObject::execConstructJsonObject },
			{ "DecodeJson", &UPlayFabJsonObject::execDecodeJson },
			{ "EncodeJson", &UPlayFabJsonObject::execEncodeJson },
			{ "GetArrayField", &UPlayFabJsonObject::execGetArrayField },
			{ "GetBoolArrayField", &UPlayFabJsonObject::execGetBoolArrayField },
			{ "GetBoolField", &UPlayFabJsonObject::execGetBoolField },
			{ "GetField", &UPlayFabJsonObject::execGetField },
			{ "GetFieldNames", &UPlayFabJsonObject::execGetFieldNames },
			{ "GetNumberArrayField", &UPlayFabJsonObject::execGetNumberArrayField },
			{ "GetNumberField", &UPlayFabJsonObject::execGetNumberField },
			{ "GetObjectArrayField", &UPlayFabJsonObject::execGetObjectArrayField },
			{ "GetObjectField", &UPlayFabJsonObject::execGetObjectField },
			{ "GetStringArrayField", &UPlayFabJsonObject::execGetStringArrayField },
			{ "GetStringField", &UPlayFabJsonObject::execGetStringField },
			{ "HasField", &UPlayFabJsonObject::execHasField },
			{ "MergeJsonObject", &UPlayFabJsonObject::execMergeJsonObject },
			{ "RemoveField", &UPlayFabJsonObject::execRemoveField },
			{ "Reset", &UPlayFabJsonObject::execReset },
			{ "SetArrayField", &UPlayFabJsonObject::execSetArrayField },
			{ "SetBoolArrayField", &UPlayFabJsonObject::execSetBoolArrayField },
			{ "SetBoolField", &UPlayFabJsonObject::execSetBoolField },
			{ "SetField", &UPlayFabJsonObject::execSetField },
			{ "SetFieldNull", &UPlayFabJsonObject::execSetFieldNull },
			{ "SetNumberArrayField", &UPlayFabJsonObject::execSetNumberArrayField },
			{ "SetNumberField", &UPlayFabJsonObject::execSetNumberField },
			{ "SetObjectArrayField", &UPlayFabJsonObject::execSetObjectArrayField },
			{ "SetObjectField", &UPlayFabJsonObject::execSetObjectField },
			{ "SetStringArrayField", &UPlayFabJsonObject::execSetStringArrayField },
			{ "SetStringField", &UPlayFabJsonObject::execSetStringField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics
	{
		struct PlayFabJsonObject_eventConstructJsonObject_Parms
		{
			UObject* WorldContextObject;
			UPlayFabJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventConstructJsonObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventConstructJsonObject_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "ConstructJsonObject", nullptr, nullptr, sizeof(PlayFabJsonObject_eventConstructJsonObject_Parms), Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics
	{
		struct PlayFabJsonObject_eventDecodeJson_Parms
		{
			FString JsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventDecodeJson_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_JsonString_MetaData)) };
	void Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayFabJsonObject_eventDecodeJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonObject_eventDecodeJson_Parms), &Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "DecodeJson", nullptr, nullptr, sizeof(PlayFabJsonObject_eventDecodeJson_Parms), Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics
	{
		struct PlayFabJsonObject_eventEncodeJson_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventEncodeJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "EncodeJson", nullptr, nullptr, sizeof(PlayFabJsonObject_eventEncodeJson_Parms), Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics
	{
		struct PlayFabJsonObject_eventGetArrayField_Parms
		{
			FString FieldName;
			TArray<UPlayFabJsonValue*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics
	{
		struct PlayFabJsonObject_eventGetBoolArrayField_Parms
		{
			FString FieldName;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetBoolArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetBoolArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetBoolArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetBoolArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics
	{
		struct PlayFabJsonObject_eventGetBoolField_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayFabJsonObject_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonObject_eventGetBoolField_Parms), &Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetBoolField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetBoolField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics
	{
		struct PlayFabJsonObject_eventGetField_Parms
		{
			FString FieldName;
			UPlayFabJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetField_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics
	{
		struct PlayFabJsonObject_eventGetFieldNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetFieldNames", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetFieldNames_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics
	{
		struct PlayFabJsonObject_eventGetNumberArrayField_Parms
		{
			FString FieldName;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetNumberArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetNumberArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetNumberArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics
	{
		struct PlayFabJsonObject_eventGetNumberField_Parms
		{
			FString FieldName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetNumberField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetNumberField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics
	{
		struct PlayFabJsonObject_eventGetObjectArrayField_Parms
		{
			FString FieldName;
			TArray<UPlayFabJsonObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetObjectArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetObjectArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetObjectArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetObjectArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics
	{
		struct PlayFabJsonObject_eventGetObjectField_Parms
		{
			FString FieldName;
			UPlayFabJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetObjectField_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetObjectField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetObjectField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics
	{
		struct PlayFabJsonObject_eventGetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetStringArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetStringArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetStringArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics
	{
		struct PlayFabJsonObject_eventGetStringField_Parms
		{
			FString FieldName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "GetStringField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventGetStringField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics
	{
		struct PlayFabJsonObject_eventHasField_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayFabJsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonObject_eventHasField_Parms), &Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "HasField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventHasField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics
	{
		struct PlayFabJsonObject_eventMergeJsonObject_Parms
		{
			UPlayFabJsonObject* InJsonObject;
			bool Overwrite;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InJsonObject;
		static void NewProp_Overwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Overwrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject = { "InJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventMergeJsonObject_Parms, InJsonObject), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit(void* Obj)
	{
		((PlayFabJsonObject_eventMergeJsonObject_Parms*)Obj)->Overwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::NewProp_Overwrite = { "Overwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonObject_eventMergeJsonObject_Parms), &Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::NewProp_Overwrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "MergeJsonObject", nullptr, nullptr, sizeof(PlayFabJsonObject_eventMergeJsonObject_Parms), Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics
	{
		struct PlayFabJsonObject_eventRemoveField_Parms
		{
			FString FieldName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventRemoveField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "RemoveField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventRemoveField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_RemoveField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_RemoveField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics
	{
		struct PlayFabJsonObject_eventSetArrayField_Parms
		{
			FString FieldName;
			TArray<UPlayFabJsonValue*> inArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray_Inner = { "inArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray = { "inArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetArrayField_Parms, inArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::NewProp_inArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics
	{
		struct PlayFabJsonObject_eventSetBoolArrayField_Parms
		{
			FString FieldName;
			TArray<bool> BoolArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetBoolArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetBoolArrayField_Parms, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetBoolArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetBoolArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics
	{
		struct PlayFabJsonObject_eventSetBoolField_Parms
		{
			FString FieldName;
			bool InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((PlayFabJsonObject_eventSetBoolField_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonObject_eventSetBoolField_Parms), &Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetBoolField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetBoolField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics
	{
		struct PlayFabJsonObject_eventSetField_Parms
		{
			FString FieldName;
			UPlayFabJsonValue* JsonValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetField_Parms, JsonValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::NewProp_JsonValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics
	{
		struct PlayFabJsonObject_eventSetFieldNull_Parms
		{
			FString FieldName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetFieldNull_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetFieldNull", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetFieldNull_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics
	{
		struct PlayFabJsonObject_eventSetNumberArrayField_Parms
		{
			FString FieldName;
			TArray<float> NumberArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumberArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NumberArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetNumberArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner = { "NumberArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray = { "NumberArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetNumberArrayField_Parms, NumberArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetNumberArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetNumberArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics
	{
		struct PlayFabJsonObject_eventSetNumberField_Parms
		{
			FString FieldName;
			float Number;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetNumberField_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetNumberField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetNumberField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics
	{
		struct PlayFabJsonObject_eventSetObjectArrayField_Parms
		{
			FString FieldName;
			TArray<UPlayFabJsonObject*> ObjectArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetObjectArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetObjectArrayField_Parms, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetObjectArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetObjectArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics
	{
		struct PlayFabJsonObject_eventSetObjectField_Parms
		{
			FString FieldName;
			UPlayFabJsonObject* JsonObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetObjectField_Parms, JsonObject), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetObjectField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetObjectField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics
	{
		struct PlayFabJsonObject_eventSetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> StringArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetStringArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetStringArrayField_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::NewProp_StringArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetStringArrayField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetStringArrayField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics
	{
		struct PlayFabJsonObject_eventSetStringField_Parms
		{
			FString FieldName;
			FString StringValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonObject_eventSetStringField_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::NewProp_StringValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonObject, nullptr, "SetStringField", nullptr, nullptr, sizeof(PlayFabJsonObject_eventSetStringField_Parms), Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonObject_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonObject_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister()
	{
		return UPlayFabJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabJsonObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabJsonObject_ConstructJsonObject, "ConstructJsonObject" }, // 1087431315
		{ &Z_Construct_UFunction_UPlayFabJsonObject_DecodeJson, "DecodeJson" }, // 910950786
		{ &Z_Construct_UFunction_UPlayFabJsonObject_EncodeJson, "EncodeJson" }, // 3754488393
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetArrayField, "GetArrayField" }, // 1163520386
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetBoolArrayField, "GetBoolArrayField" }, // 1645313492
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetBoolField, "GetBoolField" }, // 3366716779
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetField, "GetField" }, // 2048989
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetFieldNames, "GetFieldNames" }, // 62112971
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetNumberArrayField, "GetNumberArrayField" }, // 1888787942
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetNumberField, "GetNumberField" }, // 3582002437
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetObjectArrayField, "GetObjectArrayField" }, // 2995218464
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetObjectField, "GetObjectField" }, // 483801551
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetStringArrayField, "GetStringArrayField" }, // 3798606380
		{ &Z_Construct_UFunction_UPlayFabJsonObject_GetStringField, "GetStringField" }, // 920704242
		{ &Z_Construct_UFunction_UPlayFabJsonObject_HasField, "HasField" }, // 2039582679
		{ &Z_Construct_UFunction_UPlayFabJsonObject_MergeJsonObject, "MergeJsonObject" }, // 4196046015
		{ &Z_Construct_UFunction_UPlayFabJsonObject_RemoveField, "RemoveField" }, // 1611739334
		{ &Z_Construct_UFunction_UPlayFabJsonObject_Reset, "Reset" }, // 1407171690
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetArrayField, "SetArrayField" }, // 506847525
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetBoolArrayField, "SetBoolArrayField" }, // 940640617
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetBoolField, "SetBoolField" }, // 1040193559
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetField, "SetField" }, // 2772962292
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetFieldNull, "SetFieldNull" }, // 2497020314
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetNumberArrayField, "SetNumberArrayField" }, // 2571756550
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetNumberField, "SetNumberField" }, // 1274414703
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetObjectArrayField, "SetObjectArrayField" }, // 2936446080
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetObjectField, "SetObjectField" }, // 1729570672
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetStringArrayField, "SetStringArrayField" }, // 2451311119
		{ &Z_Construct_UFunction_UPlayFabJsonObject_SetStringField, "SetStringField" }, // 2380844806
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabJsonObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabJsonObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabJsonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabJsonObject_Statics::ClassParams = {
		&UPlayFabJsonObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabJsonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabJsonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabJsonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabJsonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabJsonObject, 1093707740);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabJsonObject>()
	{
		return UPlayFabJsonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabJsonObject(Z_Construct_UClass_UPlayFabJsonObject, &UPlayFabJsonObject::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabJsonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabJsonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
