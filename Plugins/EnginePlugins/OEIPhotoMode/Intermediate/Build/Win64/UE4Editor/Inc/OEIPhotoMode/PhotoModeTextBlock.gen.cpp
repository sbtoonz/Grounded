// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeTextBlock() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeTextBlock_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeTextBlock::execSetLocalizedString)
	{
		P_GET_STRUCT(FLocString,Z_Param_LocString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalizedString(Z_Param_LocString);
		P_NATIVE_END;
	}
	void UPhotoModeTextBlock::StaticRegisterNativesUPhotoModeTextBlock()
	{
		UClass* Class = UPhotoModeTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLocalizedString", &UPhotoModeTextBlock::execSetLocalizedString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics
	{
		struct PhotoModeTextBlock_eventSetLocalizedString_Parms
		{
			FLocString LocString;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::NewProp_LocString = { "LocString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeTextBlock_eventSetLocalizedString_Parms, LocString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::NewProp_LocString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeTextBlock, nullptr, "SetLocalizedString", nullptr, nullptr, sizeof(PhotoModeTextBlock_eventSetLocalizedString_Parms), Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeTextBlock_NoRegister()
	{
		return UPhotoModeTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceAllUpperCase_MetaData[];
#endif
		static void NewProp_ForceAllUpperCase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceAllUpperCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeTextBlock_SetLocalizedString, "SetLocalizedString" }, // 2825305581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeTextBlock" },
		{ "ModuleRelativePath", "Public/PhotoModeTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase_SetBit(void* Obj)
	{
		((UPhotoModeTextBlock*)Obj)->ForceAllUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase = { "ForceAllUpperCase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeTextBlock), &Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_LocalizedString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeTextBlock" },
		{ "ModuleRelativePath", "Public/PhotoModeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_LocalizedString = { "LocalizedString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeTextBlock, LocalizedString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_LocalizedString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_LocalizedString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_TextBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeTextBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeTextBlock, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_TextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_ForceAllUpperCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_LocalizedString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeTextBlock_Statics::NewProp_TextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeTextBlock_Statics::ClassParams = {
		&UPhotoModeTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeTextBlock, 2323245110);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeTextBlock>()
	{
		return UPhotoModeTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeTextBlock(Z_Construct_UClass_UPhotoModeTextBlock, &UPhotoModeTextBlock::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
