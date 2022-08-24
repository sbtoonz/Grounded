// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientDeviceInfoRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientDeviceInfoRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientDeviceInfoRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientDeviceInfoRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientDeviceInfoRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientDeviceInfoRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientDeviceInfoRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientDeviceInfoRequest"), sizeof(FClientDeviceInfoRequest), Get_Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientDeviceInfoRequest>()
{
	return FClientDeviceInfoRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientDeviceInfoRequest(FClientDeviceInfoRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientDeviceInfoRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientDeviceInfoRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientDeviceInfoRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientDeviceInfoRequest>(FName(TEXT("ClientDeviceInfoRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientDeviceInfoRequest;
	struct Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientDeviceInfoRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientDeviceInfoRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::NewProp_Info_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientDeviceInfoRequest" },
		{ "ModuleRelativePath", "Public/ClientDeviceInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientDeviceInfoRequest, Info), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::NewProp_Info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::NewProp_Info,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientDeviceInfoRequest",
		sizeof(FClientDeviceInfoRequest),
		alignof(FClientDeviceInfoRequest),
		Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientDeviceInfoRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientDeviceInfoRequest"), sizeof(FClientDeviceInfoRequest), Get_Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientDeviceInfoRequest_Hash() { return 244102931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif