// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverComponent() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverComponent_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverData();
	OEIVOICEOVER_API UFunction* Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature();
	OEIVOICEOVER_API UFunction* Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverLoadFinishedDynamicDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverComponentSetupData();
// End Cross Module References
	DEFINE_FUNCTION(UOEIVoiceOverComponent::execCancelPrepared)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelPrepared();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverComponent::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverComponent::execPlay)
	{
		P_GET_STRUCT_REF(FVoiceOverData,Z_Param_Out_Data);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PlaybackStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_Out_Data,Z_Param_StartTime,FVoiceOverPlaybackStartedDynamicDelegate(Z_Param_Out_PlaybackStarted));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverComponent::execPrepare)
	{
		P_GET_STRUCT_REF(FVoiceOverData,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_LoadingFinished);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prepare(Z_Param_Out_Data,FVoiceOverLoadFinishedDynamicDelegate(Z_Param_Out_LoadingFinished));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverComponent::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverComponent::execStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_FadeOutDuration);
		P_NATIVE_END;
	}
	void UOEIVoiceOverComponent::StaticRegisterNativesUOEIVoiceOverComponent()
	{
		UClass* Class = UOEIVoiceOverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelPrepared", &UOEIVoiceOverComponent::execCancelPrepared },
			{ "Pause", &UOEIVoiceOverComponent::execPause },
			{ "Play", &UOEIVoiceOverComponent::execPlay },
			{ "Prepare", &UOEIVoiceOverComponent::execPrepare },
			{ "Resume", &UOEIVoiceOverComponent::execResume },
			{ "Stop", &UOEIVoiceOverComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverComponent, nullptr, "CancelPrepared", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverComponent_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverComponent, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics
	{
		struct OEIVoiceOverComponent_eventPlay_Parms
		{
			FVoiceOverData Data;
			float StartTime;
			FScriptDelegate PlaybackStarted;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PlaybackStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverComponent_eventPlay_Parms, Data), Z_Construct_UScriptStruct_FVoiceOverData, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_PlaybackStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_PlaybackStarted = { "PlaybackStarted", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverComponent_eventPlay_Parms, PlaybackStarted), Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_PlaybackStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_PlaybackStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::NewProp_PlaybackStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverComponent, nullptr, "Play", nullptr, nullptr, sizeof(OEIVoiceOverComponent_eventPlay_Parms), Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics
	{
		struct OEIVoiceOverComponent_eventPrepare_Parms
		{
			FVoiceOverData Data;
			FScriptDelegate LoadingFinished;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_LoadingFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverComponent_eventPrepare_Parms, Data), Z_Construct_UScriptStruct_FVoiceOverData, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_LoadingFinished_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_LoadingFinished = { "LoadingFinished", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverComponent_eventPrepare_Parms, LoadingFinished), Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverLoadFinishedDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_LoadingFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_LoadingFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::NewProp_LoadingFinished,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverComponent, nullptr, "Prepare", nullptr, nullptr, sizeof(OEIVoiceOverComponent_eventPrepare_Parms), Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverComponent_Resume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Resume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverComponent_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverComponent, nullptr, "Resume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverComponent_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverComponent_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics
	{
		struct OEIVoiceOverComponent_eventStop_Parms
		{
			float FadeOutDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverComponent_eventStop_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverComponent, nullptr, "Stop", nullptr, nullptr, sizeof(OEIVoiceOverComponent_eventStop_Parms), Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIVoiceOverComponent_NoRegister()
	{
		return UOEIVoiceOverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVoiceOverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacialAnimationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FacialAnimationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVoiceOverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIVoiceOverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIVoiceOverComponent_CancelPrepared, "CancelPrepared" }, // 2524234941
		{ &Z_Construct_UFunction_UOEIVoiceOverComponent_Pause, "Pause" }, // 7387452
		{ &Z_Construct_UFunction_UOEIVoiceOverComponent_Play, "Play" }, // 3484206655
		{ &Z_Construct_UFunction_UOEIVoiceOverComponent_Prepare, "Prepare" }, // 1359345157
		{ &Z_Construct_UFunction_UOEIVoiceOverComponent_Resume, "Resume" }, // 3182440884
		{ &Z_Construct_UFunction_UOEIVoiceOverComponent_Stop, "Stop" }, // 2824493652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OEIVoiceOverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverComponent, AudioComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_FacialAnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_FacialAnimationComponent = { "FacialAnimationComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverComponent, FacialAnimationComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_FacialAnimationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_FacialAnimationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_SetupData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverComponent" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_SetupData = { "SetupData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverComponent, SetupData), Z_Construct_UScriptStruct_FVoiceOverComponentSetupData, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_SetupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_SetupData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIVoiceOverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_FacialAnimationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverComponent_Statics::NewProp_SetupData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVoiceOverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIVoiceOverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVoiceOverComponent_Statics::ClassParams = {
		&UOEIVoiceOverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIVoiceOverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVoiceOverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVoiceOverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVoiceOverComponent, 3449952703);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVoiceOverComponent>()
	{
		return UOEIVoiceOverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVoiceOverComponent(Z_Construct_UClass_UOEIVoiceOverComponent, &UOEIVoiceOverComponent::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVoiceOverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVoiceOverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
