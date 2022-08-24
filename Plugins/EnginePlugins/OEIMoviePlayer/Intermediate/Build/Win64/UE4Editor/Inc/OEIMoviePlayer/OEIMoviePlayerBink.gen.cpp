// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEIMoviePlayerBink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMoviePlayerBink() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMoviePlayerBink_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMoviePlayerBink();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleData_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIMoviePlayerBink::execOnMovieFinished_Impl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieFinished_Impl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBink::execOnMovieLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieLoaded(Z_Param_OpenedUrl);
		P_NATIVE_END;
	}
	void UOEIMoviePlayerBink::StaticRegisterNativesUOEIMoviePlayerBink()
	{
		UClass* Class = UOEIMoviePlayerBink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovieFinished_Impl", &UOEIMoviePlayerBink::execOnMovieFinished_Impl },
			{ "OnMovieLoaded", &UOEIMoviePlayerBink::execOnMovieLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBink, nullptr, "OnMovieFinished_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics
	{
		struct OEIMoviePlayerBink_eventOnMovieLoaded_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMoviePlayerBink_eventOnMovieLoaded_Parms, OpenedUrl), METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBink.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBink, nullptr, "OnMovieLoaded", nullptr, nullptr, sizeof(OEIMoviePlayerBink_eventOnMovieLoaded_Parms), Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIMoviePlayerBink_NoRegister()
	{
		return UOEIMoviePlayerBink::StaticClass();
	}
	struct Z_Construct_UClass_UOEIMoviePlayerBink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BinkPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BinkPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BinkTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BinkTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIMoviePlayerBink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIMoviePlayerBink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieFinished_Impl, "OnMovieFinished_Impl" }, // 5043387
		{ &Z_Construct_UFunction_UOEIMoviePlayerBink_OnMovieLoaded, "OnMovieLoaded" }, // 3542512006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIMoviePlayerBink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBink.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBink" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkPlayer = { "BinkPlayer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBink, BinkPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBink" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkTexture = { "BinkTexture", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBink, BinkTexture), Z_Construct_UClass_UBinkMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_Subtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBink" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBink, Subtitles), Z_Construct_UClass_UOEISubtitleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_Subtitles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIMoviePlayerBink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_BinkTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBink_Statics::NewProp_Subtitles,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOEIMoviePlayerBink_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(UOEIMoviePlayerBink, IOEIMediaPlayerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIMoviePlayerBink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIMoviePlayerBink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIMoviePlayerBink_Statics::ClassParams = {
		&UOEIMoviePlayerBink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIMoviePlayerBink_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIMoviePlayerBink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIMoviePlayerBink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIMoviePlayerBink, 1827436878);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEIMoviePlayerBink>()
	{
		return UOEIMoviePlayerBink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIMoviePlayerBink(Z_Construct_UClass_UOEIMoviePlayerBink, &UOEIMoviePlayerBink::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEIMoviePlayerBink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIMoviePlayerBink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
