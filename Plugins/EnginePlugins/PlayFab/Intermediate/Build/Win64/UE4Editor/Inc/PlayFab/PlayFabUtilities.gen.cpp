// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabUtilities() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabUtilities_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabUtilities::execgetErrorText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPlayFabUtilities::getErrorText(Z_Param_code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabUtilities::execgetPhotonAppId)
	{
		P_GET_UBOOL(Z_Param_Realtime);
		P_GET_UBOOL(Z_Param_Chat);
		P_GET_UBOOL(Z_Param_Turnbased);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPlayFabUtilities::getPhotonAppId(Z_Param_Realtime,Z_Param_Chat,Z_Param_Turnbased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabUtilities::execsetPlayFabSettings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameTitleId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayFabSecretApiKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductionUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotonRealtimeAppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotonTurnbasedAppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotonChatAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayFabUtilities::setPlayFabSettings(Z_Param_GameTitleId,Z_Param_PlayFabSecretApiKey,Z_Param_ProductionUrl,Z_Param_PhotonRealtimeAppId,Z_Param_PhotonTurnbasedAppId,Z_Param_PhotonChatAppId);
		P_NATIVE_END;
	}
	void UPlayFabUtilities::StaticRegisterNativesUPlayFabUtilities()
	{
		UClass* Class = UPlayFabUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getErrorText", &UPlayFabUtilities::execgetErrorText },
			{ "getPhotonAppId", &UPlayFabUtilities::execgetPhotonAppId },
			{ "setPlayFabSettings", &UPlayFabUtilities::execsetPlayFabSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics
	{
		struct PlayFabUtilities_eventgetErrorText_Parms
		{
			int32 code;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventgetErrorText_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventgetErrorText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "getErrorText", nullptr, nullptr, sizeof(PlayFabUtilities_eventgetErrorText_Parms), Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabUtilities_getErrorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics
	{
		struct PlayFabUtilities_eventgetPhotonAppId_Parms
		{
			bool Realtime;
			bool Chat;
			bool Turnbased;
			FString ReturnValue;
		};
		static void NewProp_Realtime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Realtime;
		static void NewProp_Chat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Chat;
		static void NewProp_Turnbased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Turnbased;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime_SetBit(void* Obj)
	{
		((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Realtime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime = { "Realtime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat_SetBit(void* Obj)
	{
		((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Chat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat = { "Chat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased_SetBit(void* Obj)
	{
		((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Turnbased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased = { "Turnbased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventgetPhotonAppId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "getPhotonAppId", nullptr, nullptr, sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics
	{
		struct PlayFabUtilities_eventsetPlayFabSettings_Parms
		{
			FString GameTitleId;
			FString PlayFabSecretApiKey;
			FString ProductionUrl;
			FString PhotonRealtimeAppId;
			FString PhotonTurnbasedAppId;
			FString PhotonChatAppId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameTitleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabSecretApiKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabSecretApiKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductionUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductionUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotonRealtimeAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotonRealtimeAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotonTurnbasedAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotonTurnbasedAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotonChatAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotonChatAppId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId = { "GameTitleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, GameTitleId), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey = { "PlayFabSecretApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PlayFabSecretApiKey), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl = { "ProductionUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, ProductionUrl), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId = { "PhotonRealtimeAppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonRealtimeAppId), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId = { "PhotonTurnbasedAppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonTurnbasedAppId), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId = { "PhotonChatAppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonChatAppId), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayFabUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "setPlayFabSettings", nullptr, nullptr, sizeof(PlayFabUtilities_eventsetPlayFabSettings_Parms), Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabUtilities_NoRegister()
	{
		return UPlayFabUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabUtilities_getErrorText, "getErrorText" }, // 2521912334
		{ &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId, "getPhotonAppId" }, // 847088860
		{ &Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings, "setPlayFabSettings" }, // 1766147554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabUtilities_Statics::ClassParams = {
		&UPlayFabUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabUtilities, 1367466433);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabUtilities>()
	{
		return UPlayFabUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabUtilities(Z_Construct_UClass_UPlayFabUtilities, &UPlayFabUtilities::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
