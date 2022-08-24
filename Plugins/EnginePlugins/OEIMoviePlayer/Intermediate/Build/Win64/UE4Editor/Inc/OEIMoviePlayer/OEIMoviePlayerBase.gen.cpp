// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEIMoviePlayerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMoviePlayerBase() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMoviePlayerBase_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMoviePlayerBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieFailedToOpen__DelegateSignature();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieResourceLoaded__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execClearMovie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMovie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execOnMovieFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execOnMovieSourceOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieSourceOpened(Z_Param_OpenedUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execPauseMovie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseMovie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execPlayMovieFromMediaObject)
	{
		P_GET_OBJECT(UObject,Z_Param_InMediaObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMovieFromMediaObject(Z_Param_InMediaObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execPlayMovieFromMediaObjectDelayed)
	{
		P_GET_OBJECT(UObject,Z_Param_InMediaObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMovieFromMediaObjectDelayed(Z_Param_InMediaObject,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execResumeMovie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeMovie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bShouldLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bShouldLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execStartDelayedPlayback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDelayedPlayback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIMoviePlayerBase::execStopMovie)
	{
		P_GET_UBOOL(Z_Param_bWasSkipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMovie(Z_Param_bWasSkipped);
		P_NATIVE_END;
	}
	void UOEIMoviePlayerBase::StaticRegisterNativesUOEIMoviePlayerBase()
	{
		UClass* Class = UOEIMoviePlayerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMovie", &UOEIMoviePlayerBase::execClearMovie },
			{ "OnMovieFinished", &UOEIMoviePlayerBase::execOnMovieFinished },
			{ "OnMovieSourceOpened", &UOEIMoviePlayerBase::execOnMovieSourceOpened },
			{ "PauseMovie", &UOEIMoviePlayerBase::execPauseMovie },
			{ "PlayMovieFromMediaObject", &UOEIMoviePlayerBase::execPlayMovieFromMediaObject },
			{ "PlayMovieFromMediaObjectDelayed", &UOEIMoviePlayerBase::execPlayMovieFromMediaObjectDelayed },
			{ "ResumeMovie", &UOEIMoviePlayerBase::execResumeMovie },
			{ "SetLooping", &UOEIMoviePlayerBase::execSetLooping },
			{ "StartDelayedPlayback", &UOEIMoviePlayerBase::execStartDelayedPlayback },
			{ "StopMovie", &UOEIMoviePlayerBase::execStopMovie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "ClearMovie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "OnMovieFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics
	{
		struct OEIMoviePlayerBase_eventOnMovieSourceOpened_Parms
		{
			FString OpenedUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenedUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMoviePlayerBase_eventOnMovieSourceOpened_Parms, OpenedUrl), METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::NewProp_OpenedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::NewProp_OpenedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "OnMovieSourceOpened", nullptr, nullptr, sizeof(OEIMoviePlayerBase_eventOnMovieSourceOpened_Parms), Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "PauseMovie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics
	{
		struct OEIMoviePlayerBase_eventPlayMovieFromMediaObject_Parms
		{
			UObject* InMediaObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMediaObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::NewProp_InMediaObject = { "InMediaObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMoviePlayerBase_eventPlayMovieFromMediaObject_Parms, InMediaObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::NewProp_InMediaObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "PlayMovieFromMediaObject", nullptr, nullptr, sizeof(OEIMoviePlayerBase_eventPlayMovieFromMediaObject_Parms), Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics
	{
		struct OEIMoviePlayerBase_eventPlayMovieFromMediaObjectDelayed_Parms
		{
			UObject* InMediaObject;
			float DelayTime;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMediaObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::NewProp_InMediaObject = { "InMediaObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMoviePlayerBase_eventPlayMovieFromMediaObjectDelayed_Parms, InMediaObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIMoviePlayerBase_eventPlayMovieFromMediaObjectDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::NewProp_InMediaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "PlayMovieFromMediaObjectDelayed", nullptr, nullptr, sizeof(OEIMoviePlayerBase_eventPlayMovieFromMediaObjectDelayed_Parms), Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "ResumeMovie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics
	{
		struct OEIMoviePlayerBase_eventSetLooping_Parms
		{
			bool bShouldLoop;
		};
		static void NewProp_bShouldLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
	{
		((OEIMoviePlayerBase_eventSetLooping_Parms*)Obj)->bShouldLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIMoviePlayerBase_eventSetLooping_Parms), &Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::NewProp_bShouldLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "SetLooping", nullptr, nullptr, sizeof(OEIMoviePlayerBase_eventSetLooping_Parms), Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "StartDelayedPlayback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics
	{
		struct OEIMoviePlayerBase_eventStopMovie_Parms
		{
			bool bWasSkipped;
		};
		static void NewProp_bWasSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSkipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::NewProp_bWasSkipped_SetBit(void* Obj)
	{
		((OEIMoviePlayerBase_eventStopMovie_Parms*)Obj)->bWasSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::NewProp_bWasSkipped = { "bWasSkipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIMoviePlayerBase_eventStopMovie_Parms), &Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::NewProp_bWasSkipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::NewProp_bWasSkipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIMoviePlayerBase, nullptr, "StopMovie", nullptr, nullptr, sizeof(OEIMoviePlayerBase_eventStopMovie_Parms), Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIMoviePlayerBase_NoRegister()
	{
		return UOEIMoviePlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_UOEIMoviePlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieFailedToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieFailedToOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieResourceLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieResourceLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLoopVideo_MetaData[];
#endif
		static void NewProp_bShouldLoopVideo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLoopVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_MediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIMoviePlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIMoviePlayerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_ClearMovie, "ClearMovie" }, // 2739041556
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieFinished, "OnMovieFinished" }, // 1608737860
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_OnMovieSourceOpened, "OnMovieSourceOpened" }, // 3051330601
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_PauseMovie, "PauseMovie" }, // 478343413
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObject, "PlayMovieFromMediaObject" }, // 1759107792
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_PlayMovieFromMediaObjectDelayed, "PlayMovieFromMediaObjectDelayed" }, // 690769257
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_ResumeMovie, "ResumeMovie" }, // 245744509
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_SetLooping, "SetLooping" }, // 1293689187
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_StartDelayedPlayback, "StartDelayedPlayback" }, // 3148694890
		{ &Z_Construct_UFunction_UOEIMoviePlayerBase_StopMovie, "StopMovie" }, // 564139078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIMoviePlayerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieEnd = { "OnMovieEnd", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBase, OnMovieEnd), Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieFailedToOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieFailedToOpen = { "OnMovieFailedToOpen", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBase, OnMovieFailedToOpen), Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieFailedToOpen__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieFailedToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieFailedToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieResourceLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieResourceLoaded = { "OnMovieResourceLoaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBase, OnMovieResourceLoaded), Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieResourceLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieResourceLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieResourceLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieDisplay = { "MovieDisplay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBase, MovieDisplay), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieOverlay = { "MovieOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBase, MovieOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	void Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo_SetBit(void* Obj)
	{
		((UOEIMoviePlayerBase*)Obj)->bShouldLoopVideo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo = { "bShouldLoopVideo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOEIMoviePlayerBase), &Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMoviePlayerBase" },
		{ "ModuleRelativePath", "Public/OEIMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMoviePlayerBase, MediaPlayer), Z_Construct_UClass_UOEIMediaPlayerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MediaPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIMoviePlayerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieFailedToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_OnMovieResourceLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MovieOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_bShouldLoopVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMoviePlayerBase_Statics::NewProp_MediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIMoviePlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIMoviePlayerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIMoviePlayerBase_Statics::ClassParams = {
		&UOEIMoviePlayerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIMoviePlayerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMoviePlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIMoviePlayerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIMoviePlayerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIMoviePlayerBase, 3486728872);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEIMoviePlayerBase>()
	{
		return UOEIMoviePlayerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIMoviePlayerBase(Z_Construct_UClass_UOEIMoviePlayerBase, &UOEIMoviePlayerBase::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEIMoviePlayerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIMoviePlayerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
