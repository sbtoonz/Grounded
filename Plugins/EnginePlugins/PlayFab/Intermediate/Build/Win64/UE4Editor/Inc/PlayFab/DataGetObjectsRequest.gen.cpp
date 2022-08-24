// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/DataGetObjectsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataGetObjectsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDataGetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataGetObjectsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsRequest"), sizeof(FDataGetObjectsRequest), Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsRequest>()
{
	return FDataGetObjectsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataGetObjectsRequest(FDataGetObjectsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataGetObjectsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataGetObjectsRequest>(FName(TEXT("DataGetObjectsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsRequest;
	struct Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeObject_MetaData[];
#endif
		static void NewProp_EscapeObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EscapeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataGetObjectsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataGetObjectsRequest" },
		{ "ModuleRelativePath", "Public/DataGetObjectsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataGetObjectsRequest" },
		{ "ModuleRelativePath", "Public/DataGetObjectsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataGetObjectsRequest" },
		{ "ModuleRelativePath", "Public/DataGetObjectsRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit(void* Obj)
	{
		((FDataGetObjectsRequest*)Obj)->EscapeObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject = { "EscapeObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDataGetObjectsRequest), &Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataGetObjectsRequest",
		sizeof(FDataGetObjectsRequest),
		alignof(FDataGetObjectsRequest),
		Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataGetObjectsRequest"), sizeof(FDataGetObjectsRequest), Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash() { return 3679052532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
