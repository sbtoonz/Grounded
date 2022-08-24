// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEIMoviePlayerDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMoviePlayerDefault() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMoviePlayerDefault_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMoviePlayerDefault();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIMoviePlayerDefault::execOnMovieFinished_Impl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieFinished_Impl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerDefault::execOnMovieLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieLoaded(Z_Param_OpenedUrl);
		P_NATIVE_END;
	}
	void UOEIMoviePlayerDefault::StaticRegisterNativesUOEIMoviePlayerDefault()
	{
		UClass* Class = UOEIMoviePlayerDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovieFinished_Impl", &UOEIMoviePlayerDefault::execOnMovieFinished_Impl },
			{ "OnMovieLoaded", &UOEIMoviePlayerDefault::execOnMovieLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerDefault, nullptr, "OnMovieFinished_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics
	{
		struct OEIMoviePlayerDefault_eventOnMovieLoaded_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMoviePlayerDefault_eventOnMovieLoaded_Parms, OpenedUrl), METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::NewProp_OpenedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerDefault, nullptr, "OnMovieLoaded", nullptr, nullptr, sizeof(OEIMoviePlayerDefault_eventOnMovieLoaded_Parms), Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIMoviePlayerDefault_NoRegister()
	{
		return UOEIMoviePlayerDefault::StaticClass();
	}
	struct Z_Construct_UClass_UOEIMoviePlayerDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieFinished_Impl, "OnMovieFinished_Impl" }, // 2246422669
		{ &Z_Construct_UFunction_UOEIMoviePlayerDefault_OnMovieLoaded, "OnMovieLoaded" }, // 2611279000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIMoviePlayerDefault.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerDefault" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerDefault, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_Subtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerDefault" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerDefault, Subtitles), Z_Construct_UClass_UOEISubtitleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_Subtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerDefault" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaOwner = { "MediaOwner", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerDefault, MediaOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_SoundComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerDefault, SoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_SoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_SoundComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_MediaOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::NewProp_SoundComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(UOEIMoviePlayerDefault, IOEIMediaPlayerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIMoviePlayerDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::ClassParams = {
		&UOEIMoviePlayerDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIMoviePlayerDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIMoviePlayerDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIMoviePlayerDefault, 1967608366);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEIMoviePlayerDefault>()
	{
		return UOEIMoviePlayerDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIMoviePlayerDefault(Z_Construct_UClass_UOEIMoviePlayerDefault, &UOEIMoviePlayerDefault::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEIMoviePlayerDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIMoviePlayerDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
