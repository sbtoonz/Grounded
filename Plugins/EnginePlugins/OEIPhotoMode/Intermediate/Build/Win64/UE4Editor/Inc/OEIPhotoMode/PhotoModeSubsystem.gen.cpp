// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSubsystem() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSubsystem_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeGeneralOptions();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeUIOptions();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeValues();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeUIDelegates_NoRegister();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeConfig();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModePrePause__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_PhotoModeEntryAllowed__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeEntryUnallowed__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_PhotoModeExitAllowed__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModePreEntered__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeEntered__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModePreExit__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeExited__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnChanged__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_TakePhotoOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoTaken__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_SpawnPoseableCloneOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_DestroyPoseableCloneOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_HideOriginalPawnOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_ShowOriginalPawnOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_HidePoseableCloneOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_ShowPoseableCloneOverride__DelegateSignature();
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeSubsystem::execChangePawnType)
	{
		P_GET_ENUM(EPhotoPawnType,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APhotoPawn**)Z_Param__Result=P_THIS->ChangePawnType(EPhotoPawnType(Z_Param_NewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execEnterPhotoMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnterPhotoMode(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execExitPhotoMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExitPhotoMode(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetActivatingPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetActivatingPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetGlobalActivatingPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UPhotoModeSubsystem::GetGlobalActivatingPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetGlobalOriginalPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UPhotoModeSubsystem::GetGlobalOriginalPawn(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetGlobalPhotoModePawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APhotoPawn**)Z_Param__Result=UPhotoModeSubsystem::GetGlobalPhotoModePawn(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetGlobalPoseableClone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=UPhotoModeSubsystem::GetGlobalPoseableClone(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetOriginalPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOriginalPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPhotoBaseFilename)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPhotoBaseFilename();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPhotoModeGeneralOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPhotoModeGeneralOptions*)Z_Param__Result=P_THIS->GetPhotoModeGeneralOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPhotoModeMPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialParameterCollection**)Z_Param__Result=P_THIS->GetPhotoModeMPC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPhotoModePawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APhotoPawn**)Z_Param__Result=P_THIS->GetPhotoModePawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPhotoModeUIOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPhotoModeUIOptions*)Z_Param__Result=P_THIS->GetPhotoModeUIOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPhotoOutputPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPhotoOutputPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPoseableClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetPoseableClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetPrePhotoModeSettingValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPhotoModeValues*)Z_Param__Result=P_THIS->GetPrePhotoModeSettingValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execGetUIDelegatesObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeUIDelegates**)Z_Param__Result=P_THIS->GetUIDelegatesObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execHideOriginalPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideOriginalPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execHidePoseableClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePoseableClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execIsInPhotoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInPhotoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execIsTimePaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTimePaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execOnRequestEnterPhotoMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(APawn,Z_Param_InstigatingPossessedPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnRequestEnterPhotoMode(Z_Param_PlayerController,Z_Param_InstigatingPossessedPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execOnRequestExitPhotoMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnRequestExitPhotoMode(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execPauseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execResumeTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execSetPhotoModeConfig)
	{
		P_GET_STRUCT_REF(FPhotoModeConfig,Z_Param_Out_InConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhotoModeConfig(Z_Param_Out_InConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execSetPhotoModeQualityCVars)
	{
		P_GET_UBOOL(Z_Param_Reset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhotoModeQualityCVars(Z_Param_Reset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execSetPoseableClone)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InClone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoseableClone(Z_Param_InClone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execShowOriginalPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOriginalPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execShowPoseableClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPoseableClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execTogglePhotoMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TogglePhotoMode(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSubsystem::execToggleTIme)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleTIme();
		P_NATIVE_END;
	}
	void UPhotoModeSubsystem::StaticRegisterNativesUPhotoModeSubsystem()
	{
		UClass* Class = UPhotoModeSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePawnType", &UPhotoModeSubsystem::execChangePawnType },
			{ "EnterPhotoMode", &UPhotoModeSubsystem::execEnterPhotoMode },
			{ "ExitPhotoMode", &UPhotoModeSubsystem::execExitPhotoMode },
			{ "GetActivatingPlayerController", &UPhotoModeSubsystem::execGetActivatingPlayerController },
			{ "GetGlobalActivatingPlayerController", &UPhotoModeSubsystem::execGetGlobalActivatingPlayerController },
			{ "GetGlobalOriginalPawn", &UPhotoModeSubsystem::execGetGlobalOriginalPawn },
			{ "GetGlobalPhotoModePawn", &UPhotoModeSubsystem::execGetGlobalPhotoModePawn },
			{ "GetGlobalPoseableClone", &UPhotoModeSubsystem::execGetGlobalPoseableClone },
			{ "GetOriginalPawn", &UPhotoModeSubsystem::execGetOriginalPawn },
			{ "GetPhotoBaseFilename", &UPhotoModeSubsystem::execGetPhotoBaseFilename },
			{ "GetPhotoModeGeneralOptions", &UPhotoModeSubsystem::execGetPhotoModeGeneralOptions },
			{ "GetPhotoModeMPC", &UPhotoModeSubsystem::execGetPhotoModeMPC },
			{ "GetPhotoModePawn", &UPhotoModeSubsystem::execGetPhotoModePawn },
			{ "GetPhotoModeUIOptions", &UPhotoModeSubsystem::execGetPhotoModeUIOptions },
			{ "GetPhotoOutputPath", &UPhotoModeSubsystem::execGetPhotoOutputPath },
			{ "GetPoseableClone", &UPhotoModeSubsystem::execGetPoseableClone },
			{ "GetPrePhotoModeSettingValues", &UPhotoModeSubsystem::execGetPrePhotoModeSettingValues },
			{ "GetUIDelegatesObject", &UPhotoModeSubsystem::execGetUIDelegatesObject },
			{ "HideOriginalPawn", &UPhotoModeSubsystem::execHideOriginalPawn },
			{ "HidePoseableClone", &UPhotoModeSubsystem::execHidePoseableClone },
			{ "IsInPhotoMode", &UPhotoModeSubsystem::execIsInPhotoMode },
			{ "IsTimePaused", &UPhotoModeSubsystem::execIsTimePaused },
			{ "OnRequestEnterPhotoMode", &UPhotoModeSubsystem::execOnRequestEnterPhotoMode },
			{ "OnRequestExitPhotoMode", &UPhotoModeSubsystem::execOnRequestExitPhotoMode },
			{ "PauseTime", &UPhotoModeSubsystem::execPauseTime },
			{ "ResumeTime", &UPhotoModeSubsystem::execResumeTime },
			{ "SetPhotoModeConfig", &UPhotoModeSubsystem::execSetPhotoModeConfig },
			{ "SetPhotoModeQualityCVars", &UPhotoModeSubsystem::execSetPhotoModeQualityCVars },
			{ "SetPoseableClone", &UPhotoModeSubsystem::execSetPoseableClone },
			{ "ShowOriginalPawn", &UPhotoModeSubsystem::execShowOriginalPawn },
			{ "ShowPoseableClone", &UPhotoModeSubsystem::execShowPoseableClone },
			{ "TogglePhotoMode", &UPhotoModeSubsystem::execTogglePhotoMode },
			{ "ToggleTIme", &UPhotoModeSubsystem::execToggleTIme },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics
	{
		struct PhotoModeSubsystem_eventChangePawnType_Parms
		{
			EPhotoPawnType NewType;
			APhotoPawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventChangePawnType_Parms, NewType), Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventChangePawnType_Parms, ReturnValue), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::NewProp_NewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::NewProp_NewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "ChangePawnType", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventChangePawnType_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics
	{
		struct PhotoModeSubsystem_eventEnterPhotoMode_Parms
		{
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventEnterPhotoMode_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventEnterPhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventEnterPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "EnterPhotoMode", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventEnterPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics
	{
		struct PhotoModeSubsystem_eventExitPhotoMode_Parms
		{
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventExitPhotoMode_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventExitPhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventExitPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "ExitPhotoMode", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventExitPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics
	{
		struct PhotoModeSubsystem_eventGetActivatingPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetActivatingPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetActivatingPlayerController", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetActivatingPlayerController_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics
	{
		struct PhotoModeSubsystem_eventGetGlobalActivatingPlayerController_Parms
		{
			UObject* WorldContextObject;
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalActivatingPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalActivatingPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetGlobalActivatingPlayerController", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetGlobalActivatingPlayerController_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics
	{
		struct PhotoModeSubsystem_eventGetGlobalOriginalPawn_Parms
		{
			UObject* WorldContextObject;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalOriginalPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalOriginalPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetGlobalOriginalPawn", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetGlobalOriginalPawn_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics
	{
		struct PhotoModeSubsystem_eventGetGlobalPhotoModePawn_Parms
		{
			UObject* WorldContextObject;
			APhotoPawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalPhotoModePawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalPhotoModePawn_Parms, ReturnValue), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetGlobalPhotoModePawn", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetGlobalPhotoModePawn_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics
	{
		struct PhotoModeSubsystem_eventGetGlobalPoseableClone_Parms
		{
			const UObject* WorldContextObject;
			ACharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalPoseableClone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetGlobalPoseableClone_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetGlobalPoseableClone", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetGlobalPoseableClone_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics
	{
		struct PhotoModeSubsystem_eventGetOriginalPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetOriginalPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetOriginalPawn", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetOriginalPawn_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics
	{
		struct PhotoModeSubsystem_eventGetPhotoBaseFilename_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPhotoBaseFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPhotoBaseFilename", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPhotoBaseFilename_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics
	{
		struct PhotoModeSubsystem_eventGetPhotoModeGeneralOptions_Parms
		{
			FPhotoModeGeneralOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPhotoModeGeneralOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FPhotoModeGeneralOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPhotoModeGeneralOptions", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPhotoModeGeneralOptions_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics
	{
		struct PhotoModeSubsystem_eventGetPhotoModeMPC_Parms
		{
			UMaterialParameterCollection* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPhotoModeMPC_Parms, ReturnValue), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPhotoModeMPC", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPhotoModeMPC_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics
	{
		struct PhotoModeSubsystem_eventGetPhotoModePawn_Parms
		{
			APhotoPawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPhotoModePawn_Parms, ReturnValue), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPhotoModePawn", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPhotoModePawn_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics
	{
		struct PhotoModeSubsystem_eventGetPhotoModeUIOptions_Parms
		{
			FPhotoModeUIOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPhotoModeUIOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FPhotoModeUIOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPhotoModeUIOptions", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPhotoModeUIOptions_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics
	{
		struct PhotoModeSubsystem_eventGetPhotoOutputPath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPhotoOutputPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPhotoOutputPath", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPhotoOutputPath_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics
	{
		struct PhotoModeSubsystem_eventGetPoseableClone_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPoseableClone_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPoseableClone", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPoseableClone_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics
	{
		struct PhotoModeSubsystem_eventGetPrePhotoModeSettingValues_Parms
		{
			FPhotoModeValues ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetPrePhotoModeSettingValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FPhotoModeValues, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetPrePhotoModeSettingValues", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetPrePhotoModeSettingValues_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics
	{
		struct PhotoModeSubsystem_eventGetUIDelegatesObject_Parms
		{
			UPhotoModeUIDelegates* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventGetUIDelegatesObject_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeUIDelegates_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "GetUIDelegatesObject", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventGetUIDelegatesObject_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "HideOriginalPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "HidePoseableClone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics
	{
		struct PhotoModeSubsystem_eventIsInPhotoMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventIsInPhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventIsInPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "IsInPhotoMode", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventIsInPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics
	{
		struct PhotoModeSubsystem_eventIsTimePaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventIsTimePaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventIsTimePaused_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "IsTimePaused", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventIsTimePaused_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics
	{
		struct PhotoModeSubsystem_eventOnRequestEnterPhotoMode_Parms
		{
			APlayerController* PlayerController;
			APawn* InstigatingPossessedPawn;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatingPossessedPawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventOnRequestEnterPhotoMode_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_InstigatingPossessedPawn = { "InstigatingPossessedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventOnRequestEnterPhotoMode_Parms, InstigatingPossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventOnRequestEnterPhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventOnRequestEnterPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_InstigatingPossessedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "OnRequestEnterPhotoMode", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventOnRequestEnterPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics
	{
		struct PhotoModeSubsystem_eventOnRequestExitPhotoMode_Parms
		{
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventOnRequestExitPhotoMode_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventOnRequestExitPhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventOnRequestExitPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "OnRequestExitPhotoMode", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventOnRequestExitPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "PauseTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "ResumeTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics
	{
		struct PhotoModeSubsystem_eventSetPhotoModeConfig_Parms
		{
			FPhotoModeConfig InConfig;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventSetPhotoModeConfig_Parms, InConfig), Z_Construct_UScriptStruct_FPhotoModeConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::NewProp_InConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "SetPhotoModeConfig", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventSetPhotoModeConfig_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics
	{
		struct PhotoModeSubsystem_eventSetPhotoModeQualityCVars_Parms
		{
			bool Reset;
		};
		static void NewProp_Reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::NewProp_Reset_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventSetPhotoModeQualityCVars_Parms*)Obj)->Reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventSetPhotoModeQualityCVars_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::NewProp_Reset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "SetPhotoModeQualityCVars", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventSetPhotoModeQualityCVars_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics
	{
		struct PhotoModeSubsystem_eventSetPoseableClone_Parms
		{
			ACharacter* InClone;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InClone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::NewProp_InClone = { "InClone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventSetPoseableClone_Parms, InClone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::NewProp_InClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "SetPoseableClone", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventSetPoseableClone_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "ShowOriginalPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "ShowPoseableClone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics
	{
		struct PhotoModeSubsystem_eventTogglePhotoMode_Parms
		{
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSubsystem_eventTogglePhotoMode_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSubsystem_eventTogglePhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSubsystem_eventTogglePhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "TogglePhotoMode", nullptr, nullptr, sizeof(PhotoModeSubsystem_eventTogglePhotoMode_Parms), Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSubsystem, nullptr, "ToggleTIme", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeSubsystem_NoRegister()
	{
		return UPhotoModeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModePrePause_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModePrePause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoModeEntryAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PhotoModeEntryAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModeEntryUnallowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModeEntryUnallowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoModeExitAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PhotoModeExitAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModePreEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModePreEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModeEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModeEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModePreExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModePreExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModeExited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModeExited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoPawnChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoPawnChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakePhotoOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TakePhotoOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoTaken_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoTaken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoPawnSetupInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoPawnSetupInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoseableCloneOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SpawnPoseableCloneOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyPoseableCloneOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DestroyPoseableCloneOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideOriginalPawnOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HideOriginalPawnOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOriginalPawnOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowOriginalPawnOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HidePoseableCloneOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HidePoseableCloneOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPoseableCloneOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowPoseableCloneOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPhotoModeSettingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhotoModeSettingChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCameraSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UserCameraSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhotoPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoModeMPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhotoModeMPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseableClone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseableClone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIDelegateObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIDelegateObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UISettingsInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_UISettingsInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePhotoModeValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrePhotoModeValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_ChangePawnType, "ChangePawnType" }, // 270942976
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_EnterPhotoMode, "EnterPhotoMode" }, // 1050864388
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_ExitPhotoMode, "ExitPhotoMode" }, // 216383164
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetActivatingPlayerController, "GetActivatingPlayerController" }, // 3845133286
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalActivatingPlayerController, "GetGlobalActivatingPlayerController" }, // 3380229265
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalOriginalPawn, "GetGlobalOriginalPawn" }, // 3762536320
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPhotoModePawn, "GetGlobalPhotoModePawn" }, // 2360783104
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetGlobalPoseableClone, "GetGlobalPoseableClone" }, // 411845936
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetOriginalPawn, "GetOriginalPawn" }, // 2978003374
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoBaseFilename, "GetPhotoBaseFilename" }, // 2683168431
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeGeneralOptions, "GetPhotoModeGeneralOptions" }, // 585782806
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeMPC, "GetPhotoModeMPC" }, // 1459302449
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModePawn, "GetPhotoModePawn" }, // 3935015529
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoModeUIOptions, "GetPhotoModeUIOptions" }, // 1296507546
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPhotoOutputPath, "GetPhotoOutputPath" }, // 3601436037
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPoseableClone, "GetPoseableClone" }, // 1775100282
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetPrePhotoModeSettingValues, "GetPrePhotoModeSettingValues" }, // 2510193018
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_GetUIDelegatesObject, "GetUIDelegatesObject" }, // 3151128820
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_HideOriginalPawn, "HideOriginalPawn" }, // 1862824910
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_HidePoseableClone, "HidePoseableClone" }, // 3245242645
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_IsInPhotoMode, "IsInPhotoMode" }, // 1901692177
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_IsTimePaused, "IsTimePaused" }, // 3448548750
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestEnterPhotoMode, "OnRequestEnterPhotoMode" }, // 2935759848
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_OnRequestExitPhotoMode, "OnRequestExitPhotoMode" }, // 106152667
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_PauseTime, "PauseTime" }, // 3742151259
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_ResumeTime, "ResumeTime" }, // 3952782609
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeConfig, "SetPhotoModeConfig" }, // 2056796654
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_SetPhotoModeQualityCVars, "SetPhotoModeQualityCVars" }, // 3285196337
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_SetPoseableClone, "SetPoseableClone" }, // 1285431984
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_ShowOriginalPawn, "ShowOriginalPawn" }, // 3392560912
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_ShowPoseableClone, "ShowPoseableClone" }, // 1875300628
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_TogglePhotoMode, "TogglePhotoMode" }, // 1772072459
		{ &Z_Construct_UFunction_UPhotoModeSubsystem_ToggleTIme, "ToggleTIme" }, // 2331083728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePrePause_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePrePause = { "OnPhotoModePrePause", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModePrePause), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModePrePause__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePrePause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePrePause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeEntryAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeEntryAllowed = { "PhotoModeEntryAllowed", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, PhotoModeEntryAllowed), Z_Construct_UDelegateFunction_OEIPhotoMode_PhotoModeEntryAllowed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeEntryAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeEntryAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntryUnallowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntryUnallowed = { "OnPhotoModeEntryUnallowed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModeEntryUnallowed), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeEntryUnallowed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntryUnallowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntryUnallowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeExitAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeExitAllowed = { "PhotoModeExitAllowed", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, PhotoModeExitAllowed), Z_Construct_UDelegateFunction_OEIPhotoMode_PhotoModeExitAllowed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeExitAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeExitAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreEntered = { "OnPhotoModePreEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModePreEntered), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModePreEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntered = { "OnPhotoModeEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModeEntered), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreExit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreExit = { "OnPhotoModePreExit", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModePreExit), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModePreExit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeExited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeExited = { "OnPhotoModeExited", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModeExited), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeExited__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeExited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeExited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnChanged = { "OnPhotoPawnChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoPawnChanged), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_TakePhotoOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_TakePhotoOverride = { "TakePhotoOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, TakePhotoOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_TakePhotoOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_TakePhotoOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_TakePhotoOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoTaken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoTaken = { "OnPhotoTaken", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoTaken), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoTaken__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoTaken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnSetupInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnSetupInput = { "OnPhotoPawnSetupInput", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoPawnSetupInput), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoPawnSetupInput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnSetupInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnSetupInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_SpawnPoseableCloneOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_SpawnPoseableCloneOverride = { "SpawnPoseableCloneOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, SpawnPoseableCloneOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_SpawnPoseableCloneOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_SpawnPoseableCloneOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_SpawnPoseableCloneOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_DestroyPoseableCloneOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_DestroyPoseableCloneOverride = { "DestroyPoseableCloneOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, DestroyPoseableCloneOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_DestroyPoseableCloneOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_DestroyPoseableCloneOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_DestroyPoseableCloneOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HideOriginalPawnOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HideOriginalPawnOverride = { "HideOriginalPawnOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, HideOriginalPawnOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_HideOriginalPawnOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HideOriginalPawnOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HideOriginalPawnOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowOriginalPawnOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowOriginalPawnOverride = { "ShowOriginalPawnOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, ShowOriginalPawnOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_ShowOriginalPawnOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowOriginalPawnOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowOriginalPawnOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HidePoseableCloneOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HidePoseableCloneOverride = { "HidePoseableCloneOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, HidePoseableCloneOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_HidePoseableCloneOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HidePoseableCloneOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HidePoseableCloneOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowPoseableCloneOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowPoseableCloneOverride = { "ShowPoseableCloneOverride", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, ShowPoseableCloneOverride), Z_Construct_UDelegateFunction_OEIPhotoMode_ShowPoseableCloneOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowPoseableCloneOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowPoseableCloneOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeSettingChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeSettingChanged = { "OnPhotoModeSettingChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, OnPhotoModeSettingChanged), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeSettingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeSettingChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UserCameraSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UserCameraSpeedMultiplier = { "UserCameraSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, UserCameraSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UserCameraSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UserCameraSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_Config_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, Config), Z_Construct_UScriptStruct_FPhotoModeConfig, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoPawn = { "PhotoPawn", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, PhotoPawn), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeMPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeMPC = { "PhotoModeMPC", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, PhotoModeMPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeMPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeMPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PoseableClone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PoseableClone = { "PoseableClone", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, PoseableClone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PoseableClone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PoseableClone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UIDelegateObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UIDelegateObject = { "UIDelegateObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, UIDelegateObject), Z_Construct_UClass_UPhotoModeUIDelegates_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UIDelegateObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UIDelegateObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UISettingsInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UISettingsInterface = { "UISettingsInterface", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, UISettingsInterface), Z_Construct_UClass_UPhotoModeSettingsInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UISettingsInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UISettingsInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PrePhotoModeValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSubsystem" },
		{ "ModuleRelativePath", "Public/PhotoModeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PrePhotoModeValues = { "PrePhotoModeValues", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSubsystem, PrePhotoModeValues), Z_Construct_UScriptStruct_FPhotoModeValues, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PrePhotoModeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PrePhotoModeValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePrePause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeEntryAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntryUnallowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeExitAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModePreExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeExited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_TakePhotoOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoTaken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoPawnSetupInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_SpawnPoseableCloneOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_DestroyPoseableCloneOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HideOriginalPawnOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowOriginalPawnOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_HidePoseableCloneOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_ShowPoseableCloneOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_OnPhotoModeSettingChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UserCameraSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PhotoModeMPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PoseableClone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UIDelegateObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_UISettingsInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSubsystem_Statics::NewProp_PrePhotoModeValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSubsystem_Statics::ClassParams = {
		&UPhotoModeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSubsystem, 1307416263);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSubsystem>()
	{
		return UPhotoModeSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSubsystem(Z_Construct_UClass_UPhotoModeSubsystem, &UPhotoModeSubsystem::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
