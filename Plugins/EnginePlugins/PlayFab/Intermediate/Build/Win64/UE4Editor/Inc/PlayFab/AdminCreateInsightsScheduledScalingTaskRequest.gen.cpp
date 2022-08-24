// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreateInsightsScheduledScalingTaskRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreateInsightsScheduledScalingTaskRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreateInsightsScheduledScalingTaskRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminCreateInsightsScheduledScalingTaskRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminCreateInsightsScheduledScalingTaskRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreateInsightsScheduledScalingTaskRequest"), sizeof(FAdminCreateInsightsScheduledScalingTaskRequest), Get_Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreateInsightsScheduledScalingTaskRequest>()
{
	return FAdminCreateInsightsScheduledScalingTaskRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest(FAdminCreateInsightsScheduledScalingTaskRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreateInsightsScheduledScalingTaskRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateInsightsScheduledScalingTaskRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateInsightsScheduledScalingTaskRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreateInsightsScheduledScalingTaskRequest>(FName(TEXT("AdminCreateInsightsScheduledScalingTaskRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateInsightsScheduledScalingTaskRequest;
	struct Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schedule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Schedule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreateInsightsScheduledScalingTaskRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateInsightsScheduledScalingTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateInsightsScheduledScalingTaskRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateInsightsScheduledScalingTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateInsightsScheduledScalingTaskRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateInsightsScheduledScalingTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FAdminCreateInsightsScheduledScalingTaskRequest*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminCreateInsightsScheduledScalingTaskRequest), &Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateInsightsScheduledScalingTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateInsightsScheduledScalingTaskRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateInsightsScheduledScalingTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateInsightsScheduledScalingTaskRequest, Parameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Schedule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateInsightsScheduledScalingTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateInsightsScheduledScalingTaskRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Schedule = { "Schedule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateInsightsScheduledScalingTaskRequest, Schedule), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Schedule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Schedule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_IsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::NewProp_Schedule,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminCreateInsightsScheduledScalingTaskRequest",
		sizeof(FAdminCreateInsightsScheduledScalingTaskRequest),
		alignof(FAdminCreateInsightsScheduledScalingTaskRequest),
		Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreateInsightsScheduledScalingTaskRequest"), sizeof(FAdminCreateInsightsScheduledScalingTaskRequest), Get_Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreateInsightsScheduledScalingTaskRequest_Hash() { return 4009700240U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
