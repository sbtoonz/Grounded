// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCreateBuildWithCustomContainerResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCreateBuildWithCustomContainerResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EContainerFlavor();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureVmSize();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCreateBuildWithCustomContainerResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerCreateBuildWithCustomContainerResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerCreateBuildWithCustomContainerResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCreateBuildWithCustomContainerResponse"), sizeof(FMultiplayerCreateBuildWithCustomContainerResponse), Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCreateBuildWithCustomContainerResponse>()
{
	return FMultiplayerCreateBuildWithCustomContainerResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse(FMultiplayerCreateBuildWithCustomContainerResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCreateBuildWithCustomContainerResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateBuildWithCustomContainerResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateBuildWithCustomContainerResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCreateBuildWithCustomContainerResponse>(FName(TEXT("MultiplayerCreateBuildWithCustomContainerResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateBuildWithCustomContainerResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerRunCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContainerRunCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGameContainerImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomGameContainerImage;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinuxInstrumentationConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinuxInstrumentationConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplayerServerCountPerVm_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiplayerServerCountPerVm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OsPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OsPlatform;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerType;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCreateBuildWithCustomContainerResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly_SetBit(void* Obj)
	{
		((FMultiplayerCreateBuildWithCustomContainerResponse*)Obj)->AreAssetsReadonly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly = { "AreAssetsReadonly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerCreateBuildWithCustomContainerResponse), &Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildName = { "BuildName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, BuildName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor = { "ContainerFlavor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, ContainerFlavor), Z_Construct_UEnum_PlayFab_EContainerFlavor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerRunCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerRunCommand = { "ContainerRunCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, ContainerRunCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerRunCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerRunCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CreationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, CreationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CreationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CustomGameContainerImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CustomGameContainerImage = { "CustomGameContainerImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, CustomGameContainerImage), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CustomGameContainerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CustomGameContainerImage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences_Inner = { "GameAssetReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences = { "GameAssetReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, GameAssetReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences_Inner = { "GameCertificateReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences = { "GameCertificateReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, GameCertificateReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_LinuxInstrumentationConfiguration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_LinuxInstrumentationConfiguration = { "LinuxInstrumentationConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, LinuxInstrumentationConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_LinuxInstrumentationConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_LinuxInstrumentationConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, MetaData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MultiplayerServerCountPerVm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MultiplayerServerCountPerVm = { "MultiplayerServerCountPerVm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, MultiplayerServerCountPerVm), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MultiplayerServerCountPerVm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MultiplayerServerCountPerVm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_OsPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_OsPlatform = { "OsPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, OsPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_OsPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_OsPlatform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports_Inner = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, Ports), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations_Inner = { "RegionConfigurations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations = { "RegionConfigurations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, RegionConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ServerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, ServerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ServerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ServerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads_SetBit(void* Obj)
	{
		((FMultiplayerCreateBuildWithCustomContainerResponse*)Obj)->UseStreamingForAssetDownloads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads = { "UseStreamingForAssetDownloads", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerCreateBuildWithCustomContainerResponse), &Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateBuildWithCustomContainerResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateBuildWithCustomContainerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize = { "VmSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateBuildWithCustomContainerResponse, VmSize), Z_Construct_UEnum_PlayFab_EAzureVmSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_AreAssetsReadonly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_BuildName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerFlavor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ContainerRunCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CreationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_CustomGameContainerImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameAssetReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_GameCertificateReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_LinuxInstrumentationConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_MultiplayerServerCountPerVm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_OsPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_Ports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_RegionConfigurations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_ServerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_UseStreamingForAssetDownloads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::NewProp_VmSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerCreateBuildWithCustomContainerResponse",
		sizeof(FMultiplayerCreateBuildWithCustomContainerResponse),
		alignof(FMultiplayerCreateBuildWithCustomContainerResponse),
		Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCreateBuildWithCustomContainerResponse"), sizeof(FMultiplayerCreateBuildWithCustomContainerResponse), Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateBuildWithCustomContainerResponse_Hash() { return 618149572U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
