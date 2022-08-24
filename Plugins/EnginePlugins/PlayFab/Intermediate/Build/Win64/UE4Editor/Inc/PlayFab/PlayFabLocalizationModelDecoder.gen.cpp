// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabLocalizationModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabLocalizationModelDecoder::execdecodeGetLanguageListResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocalizationGetLanguageListResponse*)Z_Param__Result=UPlayFabLocalizationModelDecoder::decodeGetLanguageListResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabLocalizationModelDecoder::StaticRegisterNativesUPlayFabLocalizationModelDecoder()
	{
		UClass* Class = UPlayFabLocalizationModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeGetLanguageListResponseResponse", &UPlayFabLocalizationModelDecoder::execdecodeGetLanguageListResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics
	{
		struct PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FLocalizationGetLanguageListResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabLocalizationModelDecoder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationModelDecoder, nullptr, "decodeGetLanguageListResponseResponse", nullptr, nullptr, sizeof(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms), Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder_NoRegister()
	{
		return UPlayFabLocalizationModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse, "decodeGetLanguageListResponseResponse" }, // 3136198384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabLocalizationModelDecoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabLocalizationModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabLocalizationModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::ClassParams = {
		&UPlayFabLocalizationModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabLocalizationModelDecoder, 1204296505);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabLocalizationModelDecoder>()
	{
		return UPlayFabLocalizationModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabLocalizationModelDecoder(Z_Construct_UClass_UPlayFabLocalizationModelDecoder, &UPlayFabLocalizationModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabLocalizationModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabLocalizationModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
