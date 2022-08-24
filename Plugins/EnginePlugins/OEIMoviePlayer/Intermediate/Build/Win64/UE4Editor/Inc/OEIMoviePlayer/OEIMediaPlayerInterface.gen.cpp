// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEIMediaPlayerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMediaPlayerInterface() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMediaPlayerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
// End Cross Module References
	DEFINE_FUNCTION(IOEIMediaPlayerInterface::execOnMovieFinished_Impl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieFinished_Impl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOEIMediaPlayerInterface::execOnMovieLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieLoaded(Z_Param_OpenedUrl);
		P_NATIVE_END;
	}
	void UOEIMediaPlayerInterface::StaticRegisterNativesUOEIMediaPlayerInterface()
	{
		UClass* Class = UOEIMediaPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovieFinished_Impl", &IOEIMediaPlayerInterface::execOnMovieFinished_Impl },
			{ "OnMovieLoaded", &IOEIMediaPlayerInterface::execOnMovieLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMediaPlayerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMediaPlayerInterface, nullptr, "OnMovieFinished_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics
	{
		struct OEIMediaPlayerInterface_eventOnMovieLoaded_Parms
		{
			FString OpenedUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenedUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMediaPlayerInterface_eventOnMovieLoaded_Parms, OpenedUrl), METADATA_PARAMS(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMediaPlayerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMediaPlayerInterface, nullptr, "OnMovieLoaded", nullptr, nullptr, sizeof(OEIMediaPlayerInterface_eventOnMovieLoaded_Parms), Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister()
	{
		return UOEIMediaPlayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOEIMediaPlayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieFinished_Impl, "OnMovieFinished_Impl" }, // 3190925945
		{ &Z_Construct_UFunction_UOEIMediaPlayerInterface_OnMovieLoaded, "OnMovieLoaded" }, // 3466557561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMediaPlayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOEIMediaPlayerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::ClassParams = {
		&UOEIMediaPlayerInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIMediaPlayerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIMediaPlayerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIMediaPlayerInterface, 219720557);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEIMediaPlayerInterface>()
	{
		return UOEIMediaPlayerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIMediaPlayerInterface(Z_Construct_UClass_UOEIMediaPlayerInterface, &UOEIMediaPlayerInterface::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEIMediaPlayerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIMediaPlayerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
