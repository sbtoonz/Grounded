// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/SettingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingInfo() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSettingInfo();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderSettings();
// End Cross Module References
class UScriptStruct* FSettingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FSettingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingInfo, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("SettingInfo"), sizeof(FSettingInfo), Get_Z_Construct_UScriptStruct_FSettingInfo_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FSettingInfo>()
{
	return FSettingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSettingInfo(FSettingInfo::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("SettingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFSettingInfo
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFSettingInfo()
	{
		UScriptStruct::DeferCppStructOps<FSettingInfo>(FName(TEXT("SettingInfo")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFSettingInfo;
	struct Z_Construct_UScriptStruct_FSettingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingTagToName_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingTagToName_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingTagToName_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SettingTagToName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SettingInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSettingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SettingInfo" },
		{ "ModuleRelativePath", "Public/SettingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingInfo, SettingName), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_ValueProp = { "SettingTagToName", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_Key_KeyProp = { "SettingTagToName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SettingInfo" },
		{ "ModuleRelativePath", "Public/SettingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName = { "SettingTagToName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingInfo, SettingTagToName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SettingInfo" },
		{ "ModuleRelativePath", "Public/SettingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingInfo, InputType), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SliderSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SettingInfo" },
		{ "ModuleRelativePath", "Public/SettingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SliderSettings = { "SliderSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingInfo, SliderSettings), Z_Construct_UScriptStruct_FSliderSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SliderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SliderSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SettingTagToName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingInfo_Statics::NewProp_SliderSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"SettingInfo",
		sizeof(FSettingInfo),
		alignof(FSettingInfo),
		Z_Construct_UScriptStruct_FSettingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSettingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSettingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SettingInfo"), sizeof(FSettingInfo), Get_Z_Construct_UScriptStruct_FSettingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSettingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSettingInfo_Hash() { return 626687202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
