// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/OEITextLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEITextLibrary() {}
// Cross Module References
	OEITEXT_API UClass* Z_Construct_UClass_UOEITextLibrary_NoRegister();
	OEITEXT_API UClass* Z_Construct_UClass_UOEITextLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
// End Cross Module References
	DEFINE_FUNCTION(UOEITextLibrary::execGetLocStringText)
	{
		P_GET_STRUCT_REF(FLocString,Z_Param_Out_LocString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOEITextLibrary::GetLocStringText(Z_Param_Out_LocString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEITextLibrary::execMakeLocString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StringTableID);
		P_GET_PROPERTY(FIntProperty,Z_Param_StringID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocString*)Z_Param__Result=UOEITextLibrary::MakeLocString(Z_Param_StringTableID,Z_Param_StringID);
		P_NATIVE_END;
	}
	void UOEITextLibrary::StaticRegisterNativesUOEITextLibrary()
	{
		UClass* Class = UOEITextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocStringText", &UOEITextLibrary::execGetLocStringText },
			{ "MakeLocString", &UOEITextLibrary::execMakeLocString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics
	{
		struct OEITextLibrary_eventGetLocStringText_Parms
		{
			FLocString LocString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_LocString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_LocString = { "LocString", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEITextLibrary_eventGetLocStringText_Parms, LocString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_LocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_LocString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEITextLibrary_eventGetLocStringText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_LocString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEITextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEITextLibrary, nullptr, "GetLocStringText", nullptr, nullptr, sizeof(OEITextLibrary_eventGetLocStringText_Parms), Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEITextLibrary_GetLocStringText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEITextLibrary_GetLocStringText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics
	{
		struct OEITextLibrary_eventMakeLocString_Parms
		{
			int32 StringTableID;
			int32 StringID;
			FLocString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StringTableID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StringID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::NewProp_StringTableID = { "StringTableID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEITextLibrary_eventMakeLocString_Parms, StringTableID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::NewProp_StringID = { "StringID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEITextLibrary_eventMakeLocString_Parms, StringID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEITextLibrary_eventMakeLocString_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::NewProp_StringTableID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::NewProp_StringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEITextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEITextLibrary, nullptr, "MakeLocString", nullptr, nullptr, sizeof(OEITextLibrary_eventMakeLocString_Parms), Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEITextLibrary_MakeLocString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEITextLibrary_MakeLocString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEITextLibrary_NoRegister()
	{
		return UOEITextLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOEITextLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEITextLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEITextLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEITextLibrary_GetLocStringText, "GetLocStringText" }, // 2569550674
		{ &Z_Construct_UFunction_UOEITextLibrary_MakeLocString, "MakeLocString" }, // 1895482862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEITextLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEITextLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEITextLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEITextLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEITextLibrary_Statics::ClassParams = {
		&UOEITextLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEITextLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEITextLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEITextLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEITextLibrary, 266532187);
	template<> OEITEXT_API UClass* StaticClass<UOEITextLibrary>()
	{
		return UOEITextLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEITextLibrary(Z_Construct_UClass_UOEITextLibrary, &UOEITextLibrary::StaticClass, TEXT("/Script/OEIText"), TEXT("UOEITextLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEITextLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
