// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineVOIPBluePrintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineVOIPBluePrintFunctionLibrary() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ONLINEMANAGER_API UEnum* Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceEnableMic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceEnableMic(Z_Param_InPlayerController,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceEnablePlayerIncomingChannel)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_GET_ENUM(EOnlineVoiceIncomingChannel,Z_Param_IncomingChannel);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceEnablePlayerIncomingChannel(Z_Param_InPlayerController,Z_Param_TargetPlayerState,EOnlineVoiceIncomingChannel(Z_Param_IncomingChannel),Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceGetPlayerVolume)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceGetPlayerVolume(Z_Param_InPlayerController,Z_Param_TargetPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceIsLocalPlayerTalking)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsLocalPlayerTalking(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceIsPlayerIncomingChannelEnabled)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_GET_ENUM(EOnlineVoiceIncomingChannel,Z_Param_IncomingChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsPlayerIncomingChannelEnabled(Z_Param_InPlayerController,Z_Param_TargetPlayerState,EOnlineVoiceIncomingChannel(Z_Param_IncomingChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceIsPlayerTalking)
	{
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsPlayerTalking(Z_Param_TargetPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceMicIsEnabled)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceMicIsEnabled(Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceMutePlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_GET_UBOOL(Z_Param_bMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceMutePlayer(Z_Param_InPlayerController,Z_Param_TargetPlayerState,Z_Param_bMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoicePlayerIsMuted)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoicePlayerIsMuted(Z_Param_InPlayerController,Z_Param_TargetPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceSetPlayerVolume)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_GET_OBJECT(APlayerState,Z_Param_TargetPlayerState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceSetPlayerVolume(Z_Param_InPlayerController,Z_Param_TargetPlayerState,Z_Param_InVolume);
		P_NATIVE_END;
	}
	void UOnlineVOIPBluePrintFunctionLibrary::StaticRegisterNativesUOnlineVOIPBluePrintFunctionLibrary()
	{
		UClass* Class = UOnlineVOIPBluePrintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineVoiceEnableMic", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceEnableMic },
			{ "OnlineVoiceEnablePlayerIncomingChannel", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceEnablePlayerIncomingChannel },
			{ "OnlineVoiceGetPlayerVolume", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceGetPlayerVolume },
			{ "OnlineVoiceIsLocalPlayerTalking", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceIsLocalPlayerTalking },
			{ "OnlineVoiceIsPlayerIncomingChannelEnabled", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceIsPlayerIncomingChannelEnabled },
			{ "OnlineVoiceIsPlayerTalking", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceIsPlayerTalking },
			{ "OnlineVoiceMicIsEnabled", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceMicIsEnabled },
			{ "OnlineVoiceMutePlayer", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceMutePlayer },
			{ "OnlineVoicePlayerIsMuted", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoicePlayerIsMuted },
			{ "OnlineVoiceSetPlayerVolume", &UOnlineVOIPBluePrintFunctionLibrary::execOnlineVoiceSetPlayerVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnableMic_Parms
		{
			APlayerController* InPlayerController;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnableMic_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnableMic_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnableMic_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceEnableMic", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnableMic_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			EOnlineVoiceIncomingChannel IncomingChannel;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IncomingChannel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IncomingChannel;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_IncomingChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_IncomingChannel = { "IncomingChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms, IncomingChannel), Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_IncomingChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_IncomingChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceEnablePlayerIncomingChannel", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceEnablePlayerIncomingChannel_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceGetPlayerVolume_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceGetPlayerVolume_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceGetPlayerVolume_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceGetPlayerVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceGetPlayerVolume", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceGetPlayerVolume_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsLocalPlayerTalking_Parms
		{
			APlayerController* InPlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsLocalPlayerTalking_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsLocalPlayerTalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsLocalPlayerTalking_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceIsLocalPlayerTalking", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsLocalPlayerTalking_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			EOnlineVoiceIncomingChannel IncomingChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IncomingChannel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IncomingChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_IncomingChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_IncomingChannel = { "IncomingChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms, IncomingChannel), Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_IncomingChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_IncomingChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceIsPlayerIncomingChannelEnabled", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerIncomingChannelEnabled_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerTalking_Parms
		{
			APlayerState* TargetPlayerState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerTalking_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerTalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerTalking_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceIsPlayerTalking", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceIsPlayerTalking_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMicIsEnabled_Parms
		{
			APlayerController* InPlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMicIsEnabled_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMicIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMicIsEnabled_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceMicIsEnabled", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMicIsEnabled_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMutePlayer_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			bool bMute;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static void NewProp_bMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMutePlayer_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMutePlayer_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_bMute_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMutePlayer_Parms*)Obj)->bMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMutePlayer_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::NewProp_bMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceMutePlayer", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceMutePlayer_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoicePlayerIsMuted_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoicePlayerIsMuted_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoicePlayerIsMuted_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoicePlayerIsMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoicePlayerIsMuted_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoicePlayerIsMuted", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoicePlayerIsMuted_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics
	{
		struct OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms
		{
			APlayerController* InPlayerController;
			APlayerState* TargetPlayerState;
			float InVolume;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms, TargetPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms), &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_TargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_InVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, nullptr, "OnlineVoiceSetPlayerVolume", nullptr, nullptr, sizeof(OnlineVOIPBluePrintFunctionLibrary_eventOnlineVoiceSetPlayerVolume_Parms), Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_NoRegister()
	{
		return UOnlineVOIPBluePrintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic, "OnlineVoiceEnableMic" }, // 1283461480
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel, "OnlineVoiceEnablePlayerIncomingChannel" }, // 3204898740
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume, "OnlineVoiceGetPlayerVolume" }, // 3153073928
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking, "OnlineVoiceIsLocalPlayerTalking" }, // 3884345644
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled, "OnlineVoiceIsPlayerIncomingChannelEnabled" }, // 2593195959
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking, "OnlineVoiceIsPlayerTalking" }, // 2404386583
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled, "OnlineVoiceMicIsEnabled" }, // 41778987
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer, "OnlineVoiceMutePlayer" }, // 3022295504
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted, "OnlineVoicePlayerIsMuted" }, // 1306124219
		{ &Z_Construct_UFunction_UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume, "OnlineVoiceSetPlayerVolume" }, // 3403355789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineVOIPBluePrintFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineVOIPBluePrintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineVOIPBluePrintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::ClassParams = {
		&UOnlineVOIPBluePrintFunctionLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineVOIPBluePrintFunctionLibrary, 3012699190);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineVOIPBluePrintFunctionLibrary>()
	{
		return UOnlineVOIPBluePrintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineVOIPBluePrintFunctionLibrary(Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary, &UOnlineVOIPBluePrintFunctionLibrary::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineVOIPBluePrintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineVOIPBluePrintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
