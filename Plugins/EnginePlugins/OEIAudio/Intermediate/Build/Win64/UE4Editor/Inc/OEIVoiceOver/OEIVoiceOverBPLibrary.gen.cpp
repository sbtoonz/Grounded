// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverBPLibrary() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverBPLibrary_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverData();
	OEIVOICEOVER_API UFunction* Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOEIVoiceOverBPLibrary::execPauseVoiceOver)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOEIVoiceOverBPLibrary::PauseVoiceOver(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverBPLibrary::execPlayVoiceOver)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FVoiceOverData,Z_Param_Out_Data);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PlaybackStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOEIVoiceOverBPLibrary::PlayVoiceOver(Z_Param_Actor,Z_Param_Out_Data,Z_Param_StartTime,FVoiceOverPlaybackStartedDynamicDelegate(Z_Param_Out_PlaybackStarted));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverBPLibrary::execResumeVoiceOver)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOEIVoiceOverBPLibrary::ResumeVoiceOver(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIVoiceOverBPLibrary::execStopVoiceOver)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOEIVoiceOverBPLibrary::StopVoiceOver(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UOEIVoiceOverBPLibrary::StaticRegisterNativesUOEIVoiceOverBPLibrary()
	{
		UClass* Class = UOEIVoiceOverBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseVoiceOver", &UOEIVoiceOverBPLibrary::execPauseVoiceOver },
			{ "PlayVoiceOver", &UOEIVoiceOverBPLibrary::execPlayVoiceOver },
			{ "ResumeVoiceOver", &UOEIVoiceOverBPLibrary::execResumeVoiceOver },
			{ "StopVoiceOver", &UOEIVoiceOverBPLibrary::execStopVoiceOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics
	{
		struct OEIVoiceOverBPLibrary_eventPauseVoiceOver_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventPauseVoiceOver_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OEIVoiceOverBPLibrary_eventPauseVoiceOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIVoiceOverBPLibrary_eventPauseVoiceOver_Parms), &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverBPLibrary, nullptr, "PauseVoiceOver", nullptr, nullptr, sizeof(OEIVoiceOverBPLibrary_eventPauseVoiceOver_Parms), Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics
	{
		struct OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms
		{
			AActor* Actor;
			FVoiceOverData Data;
			float StartTime;
			FScriptDelegate PlaybackStarted;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PlaybackStarted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms, Data), Z_Construct_UScriptStruct_FVoiceOverData, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_PlaybackStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_PlaybackStarted = { "PlaybackStarted", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms, PlaybackStarted), Z_Construct_UDelegateFunction_OEIVoiceOver_VoiceOverPlaybackStartedDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_PlaybackStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_PlaybackStarted_MetaData)) };
	void Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms), &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_PlaybackStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverBPLibrary, nullptr, "PlayVoiceOver", nullptr, nullptr, sizeof(OEIVoiceOverBPLibrary_eventPlayVoiceOver_Parms), Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics
	{
		struct OEIVoiceOverBPLibrary_eventResumeVoiceOver_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventResumeVoiceOver_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OEIVoiceOverBPLibrary_eventResumeVoiceOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIVoiceOverBPLibrary_eventResumeVoiceOver_Parms), &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverBPLibrary, nullptr, "ResumeVoiceOver", nullptr, nullptr, sizeof(OEIVoiceOverBPLibrary_eventResumeVoiceOver_Parms), Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics
	{
		struct OEIVoiceOverBPLibrary_eventStopVoiceOver_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIVoiceOverBPLibrary_eventStopVoiceOver_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OEIVoiceOverBPLibrary_eventStopVoiceOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIVoiceOverBPLibrary_eventStopVoiceOver_Parms), &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIVoiceOverBPLibrary, nullptr, "StopVoiceOver", nullptr, nullptr, sizeof(OEIVoiceOverBPLibrary_eventStopVoiceOver_Parms), Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIVoiceOverBPLibrary_NoRegister()
	{
		return UOEIVoiceOverBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PauseVoiceOver, "PauseVoiceOver" }, // 3998802530
		{ &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_PlayVoiceOver, "PlayVoiceOver" }, // 3463667547
		{ &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_ResumeVoiceOver, "ResumeVoiceOver" }, // 1323500391
		{ &Z_Construct_UFunction_UOEIVoiceOverBPLibrary_StopVoiceOver, "StopVoiceOver" }, // 3125111094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIVoiceOverBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIVoiceOverBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::ClassParams = {
		&UOEIVoiceOverBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVoiceOverBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVoiceOverBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVoiceOverBPLibrary, 468442582);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVoiceOverBPLibrary>()
	{
		return UOEIVoiceOverBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVoiceOverBPLibrary(Z_Construct_UClass_UOEIVoiceOverBPLibrary, &UOEIVoiceOverBPLibrary::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVoiceOverBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVoiceOverBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
