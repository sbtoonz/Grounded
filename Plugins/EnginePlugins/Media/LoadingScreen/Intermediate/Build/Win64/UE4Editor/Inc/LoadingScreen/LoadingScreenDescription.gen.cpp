// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingScreen/Public/LoadingScreenDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenDescription() {}
// Cross Module References
	LOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingScreenDescription();
	UPackage* Z_Construct_UPackage__Script_LoadingScreen();
	MOVIEPLAYER_API UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
// End Cross Module References
class UScriptStruct* FLoadingScreenDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FLoadingScreenDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingScreenDescription, Z_Construct_UPackage__Script_LoadingScreen(), TEXT("LoadingScreenDescription"), sizeof(FLoadingScreenDescription), Get_Z_Construct_UScriptStruct_FLoadingScreenDescription_Hash());
	}
	return Singleton;
}
template<> LOADINGSCREEN_API UScriptStruct* StaticStruct<FLoadingScreenDescription>()
{
	return FLoadingScreenDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingScreenDescription(FLoadingScreenDescription::StaticStruct, TEXT("/Script/LoadingScreen"), TEXT("LoadingScreenDescription"), false, nullptr, nullptr);
static struct FScriptStruct_LoadingScreen_StaticRegisterNativesFLoadingScreenDescription
{
	FScriptStruct_LoadingScreen_StaticRegisterNativesFLoadingScreenDescription()
	{
		UScriptStruct::DeferCppStructOps<FLoadingScreenDescription>(FName(TEXT("LoadingScreenDescription")));
	}
} ScriptStruct_LoadingScreen_StaticRegisterNativesFLoadingScreenDescription;
	struct Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumLoadingScreenDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumLoadingScreenDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[];
#endif
		static void NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCompleteWhenLoadingCompletes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[];
#endif
		static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForManualStop_MetaData[];
#endif
		static void NewProp_bWaitForManualStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForManualStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForLevelStreamingToComplete_MetaData[];
#endif
		static void NewProp_bWaitForLevelStreamingToComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForLevelStreamingToComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaybackType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoviePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoviePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowUIOverlay_MetaData[];
#endif
		static void NewProp_bShowUIOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowUIOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingText;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Images;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageStretch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImageStretch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingScreenDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MinimumLoadingScreenDisplayTime = { "MinimumLoadingScreenDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreenDescription, MinimumLoadingScreenDisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj)
	{
		((FLoadingScreenDescription*)Obj)->bAutoCompleteWhenLoadingCompletes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes = { "bAutoCompleteWhenLoadingCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingScreenDescription), &Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
	{
		((FLoadingScreenDescription*)Obj)->bMoviesAreSkippable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable = { "bMoviesAreSkippable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingScreenDescription), &Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop_SetBit(void* Obj)
	{
		((FLoadingScreenDescription*)Obj)->bWaitForManualStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop = { "bWaitForManualStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingScreenDescription), &Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete_SetBit(void* Obj)
	{
		((FLoadingScreenDescription*)Obj)->bWaitForLevelStreamingToComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete = { "bWaitForLevelStreamingToComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingScreenDescription), &Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_PlaybackType_MetaData[] = {
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_PlaybackType = { "PlaybackType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreenDescription, PlaybackType), Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_PlaybackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_PlaybackType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths_Inner = { "MoviePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths = { "MoviePaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreenDescription, MoviePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay_SetBit(void* Obj)
	{
		((FLoadingScreenDescription*)Obj)->bShowUIOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay = { "bShowUIOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingScreenDescription), &Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_LoadingText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_LoadingText = { "LoadingText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreenDescription, LoadingText), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_LoadingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_LoadingText_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreenDescription, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_ImageStretch_MetaData[] = {
		{ "Category", "LoadingScreenDescription" },
		{ "ModuleRelativePath", "Public/LoadingScreenDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_ImageStretch = { "ImageStretch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreenDescription, ImageStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_ImageStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_ImageStretch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MinimumLoadingScreenDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bAutoCompleteWhenLoadingCompletes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bMoviesAreSkippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForManualStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bWaitForLevelStreamingToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_PlaybackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_MoviePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_bShowUIOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_LoadingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_Images,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::NewProp_ImageStretch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LoadingScreen,
		nullptr,
		&NewStructOps,
		"LoadingScreenDescription",
		sizeof(FLoadingScreenDescription),
		alignof(FLoadingScreenDescription),
		Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingScreenDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingScreenDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingScreenDescription"), sizeof(FLoadingScreenDescription), Get_Z_Construct_UScriptStruct_FLoadingScreenDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingScreenDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingScreenDescription_Hash() { return 878455478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
