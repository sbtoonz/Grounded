// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerDeleteCharacterFromUserRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerDeleteCharacterFromUserRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerDeleteCharacterFromUserRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerDeleteCharacterFromUserRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerDeleteCharacterFromUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerDeleteCharacterFromUserRequest"), sizeof(FServerDeleteCharacterFromUserRequest), Get_Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerDeleteCharacterFromUserRequest>()
{
	return FServerDeleteCharacterFromUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerDeleteCharacterFromUserRequest(FServerDeleteCharacterFromUserRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerDeleteCharacterFromUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerDeleteCharacterFromUserRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerDeleteCharacterFromUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerDeleteCharacterFromUserRequest>(FName(TEXT("ServerDeleteCharacterFromUserRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerDeleteCharacterFromUserRequest;
	struct Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveCharacterInventory_MetaData[];
#endif
		static void NewProp_SaveCharacterInventory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveCharacterInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerDeleteCharacterFromUserRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerDeleteCharacterFromUserRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerDeleteCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerDeleteCharacterFromUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerDeleteCharacterFromUserRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerDeleteCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerDeleteCharacterFromUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerDeleteCharacterFromUserRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerDeleteCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerDeleteCharacterFromUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerDeleteCharacterFromUserRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerDeleteCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerDeleteCharacterFromUserRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory_SetBit(void* Obj)
	{
		((FServerDeleteCharacterFromUserRequest*)Obj)->SaveCharacterInventory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory = { "SaveCharacterInventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerDeleteCharacterFromUserRequest), &Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::NewProp_SaveCharacterInventory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerDeleteCharacterFromUserRequest",
		sizeof(FServerDeleteCharacterFromUserRequest),
		alignof(FServerDeleteCharacterFromUserRequest),
		Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerDeleteCharacterFromUserRequest"), sizeof(FServerDeleteCharacterFromUserRequest), Get_Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerDeleteCharacterFromUserRequest_Hash() { return 4094963789U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
