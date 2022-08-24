// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCreateBuildWithManagedContainerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCreateBuildWithManagedContainerRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EContainerFlavor();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureVmSize();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCreateBuildWithManagedContainerRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerCreateBuildWithManagedContainerRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerCreateBuildWithManagedContainerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCreateBuildWithManagedContainerRequest"), sizeof(FMultiplayerCreateBuildWithManagedContainerRequest), Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCreateBuildWithManagedContainerRequest>()
{
	return FMultiplayerCreateBuildWithManagedContainerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest(FMultiplayerCreateBuildWithManagedContainerRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCreateBuildWithManagedContainerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateBuildWithManagedContainerRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateBuildWithManagedContainerRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCreateBuildWithManagedContainerRequest>(FName(TEXT("MultiplayerCreateBuildWithManagedContainerRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateBuildWithManagedContainerRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreAssetsReadonly_MetaData[];
#endif
		static void NewProp_AreAssetsReadonly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AreAssetsReadonly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContainerFlavor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerFlavor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContainerFlavor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameAssetReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameAssetReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameAssetReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameCertificateReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCertificateReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameCertificateReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWorkingDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameWorkingDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstrumentationConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstrumentationConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplayerServerCountPerVm_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiplayerServerCountPerVm;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ports_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ports_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ports;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegionConfigurations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionConfigurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegionConfigurations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMultiplayerServerCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartMultiplayerServerCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseStreamingForAssetDownloads_MetaData[];
#endif
		static void NewProp_UseStreamingForAssetDownloads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseStreamingForAssetDownloads;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VmSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VmSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VmSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCreateBuildWithManagedContainerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly_SetBit(void* Obj)
	{
		((FMultiplayerCreateBuildWithManagedContainerRequest*)Obj)->AreAssetsReadonly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly = { "AreAssetsReadonly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerCreateBuildWithManagedContainerRequest), &Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_BuildName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_BuildName = { "BuildName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, BuildName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_BuildName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_BuildName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor = { "ContainerFlavor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, ContainerFlavor), Z_Construct_UEnum_PlayFab_EContainerFlavor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences_Inner = { "GameAssetReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences = { "GameAssetReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, GameAssetReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences_Inner = { "GameCertificateReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences = { "GameCertificateReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, GameCertificateReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameWorkingDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameWorkingDirectory = { "GameWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, GameWorkingDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameWorkingDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameWorkingDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_InstrumentationConfiguration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_InstrumentationConfiguration = { "InstrumentationConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, InstrumentationConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_InstrumentationConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_InstrumentationConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, MetaData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MultiplayerServerCountPerVm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MultiplayerServerCountPerVm = { "MultiplayerServerCountPerVm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, MultiplayerServerCountPerVm), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MultiplayerServerCountPerVm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MultiplayerServerCountPerVm_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports_Inner = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, Ports), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations_Inner = { "RegionConfigurations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations = { "RegionConfigurations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, RegionConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_StartMultiplayerServerCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_StartMultiplayerServerCommand = { "StartMultiplayerServerCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, StartMultiplayerServerCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_StartMultiplayerServerCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_StartMultiplayerServerCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads_SetBit(void* Obj)
	{
		((FMultiplayerCreateBuildWithManagedContainerRequest*)Obj)->UseStreamingForAssetDownloads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads = { "UseStreamingForAssetDownloads", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerCreateBuildWithManagedContainerRequest), &Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithManagedContainerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithManagedContainerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize = { "VmSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithManagedContainerRequest, VmSize), Z_Construct_UEnum_PlayFab_EAzureVmSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_AreAssetsReadonly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_BuildName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_ContainerFlavor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameAssetReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameCertificateReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_GameWorkingDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_InstrumentationConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_MultiplayerServerCountPerVm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_Ports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_RegionConfigurations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_StartMultiplayerServerCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_UseStreamingForAssetDownloads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::NewProp_VmSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerCreateBuildWithManagedContainerRequest",
		sizeof(FMultiplayerCreateBuildWithManagedContainerRequest),
		alignof(FMultiplayerCreateBuildWithManagedContainerRequest),
		Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCreateBuildWithManagedContainerRequest"), sizeof(FMultiplayerCreateBuildWithManagedContainerRequest), Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithManagedContainerRequest_Hash() { return 48880219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
