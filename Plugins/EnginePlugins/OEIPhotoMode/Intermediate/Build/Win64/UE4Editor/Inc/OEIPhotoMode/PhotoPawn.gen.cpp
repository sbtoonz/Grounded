// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoPawn() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APhotoPawn::execBrowsePhotos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BrowsePhotos_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execChangeCameraType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeCameraType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execExitPhotoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitPhotoMode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execGetCameraForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execGetCameraLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execGetPhotoPawnType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPhotoPawnType*)Z_Param__Result=P_THIS->GetPhotoPawnType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execOnPhotoTaken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoTaken(Z_Param_Width,Z_Param_Height,Z_Param_Out_Colors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execOnPhotoTakenXbox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoTakenXbox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execRequestScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestScreenshot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execSwapInputAxisBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OldAxisName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewAxisName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwapInputAxisBinding(Z_Param_OldAxisName,Z_Param_NewAxisName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhotoPawn::execTakePhoto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakePhoto_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APhotoPawn_BrowsePhotos = FName(TEXT("BrowsePhotos"));
	void APhotoPawn::BrowsePhotos()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhotoPawn_BrowsePhotos),NULL);
	}
	static FName NAME_APhotoPawn_ChangeCameraType = FName(TEXT("ChangeCameraType"));
	void APhotoPawn::ChangeCameraType()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhotoPawn_ChangeCameraType),NULL);
	}
	static FName NAME_APhotoPawn_ExitPhotoMode = FName(TEXT("ExitPhotoMode"));
	void APhotoPawn::ExitPhotoMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhotoPawn_ExitPhotoMode),NULL);
	}
	static FName NAME_APhotoPawn_RequestScreenshot = FName(TEXT("RequestScreenshot"));
	void APhotoPawn::RequestScreenshot()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhotoPawn_RequestScreenshot),NULL);
	}
	static FName NAME_APhotoPawn_TakePhoto = FName(TEXT("TakePhoto"));
	void APhotoPawn::TakePhoto()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhotoPawn_TakePhoto),NULL);
	}
	void APhotoPawn::StaticRegisterNativesAPhotoPawn()
	{
		UClass* Class = APhotoPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BrowsePhotos", &APhotoPawn::execBrowsePhotos },
			{ "ChangeCameraType", &APhotoPawn::execChangeCameraType },
			{ "ExitPhotoMode", &APhotoPawn::execExitPhotoMode },
			{ "GetCameraForwardVector", &APhotoPawn::execGetCameraForwardVector },
			{ "GetCameraLocation", &APhotoPawn::execGetCameraLocation },
			{ "GetPhotoPawnType", &APhotoPawn::execGetPhotoPawnType },
			{ "OnPhotoTaken", &APhotoPawn::execOnPhotoTaken },
			{ "OnPhotoTakenXbox", &APhotoPawn::execOnPhotoTakenXbox },
			{ "RequestScreenshot", &APhotoPawn::execRequestScreenshot },
			{ "SwapInputAxisBinding", &APhotoPawn::execSwapInputAxisBinding },
			{ "TakePhoto", &APhotoPawn::execTakePhoto },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APhotoPawn_BrowsePhotos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_BrowsePhotos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_BrowsePhotos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "BrowsePhotos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_BrowsePhotos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_BrowsePhotos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_BrowsePhotos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_BrowsePhotos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_ChangeCameraType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_ChangeCameraType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_ChangeCameraType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "ChangeCameraType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_ChangeCameraType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_ChangeCameraType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_ChangeCameraType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_ChangeCameraType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_ExitPhotoMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_ExitPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_ExitPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "ExitPhotoMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_ExitPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_ExitPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_ExitPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_ExitPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics
	{
		struct PhotoPawn_eventGetCameraForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventGetCameraForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "GetCameraForwardVector", nullptr, nullptr, sizeof(PhotoPawn_eventGetCameraForwardVector_Parms), Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics
	{
		struct PhotoPawn_eventGetCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "GetCameraLocation", nullptr, nullptr, sizeof(PhotoPawn_eventGetCameraLocation_Parms), Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_GetCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_GetCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics
	{
		struct PhotoPawn_eventGetPhotoPawnType_Parms
		{
			EPhotoPawnType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventGetPhotoPawnType_Parms, ReturnValue), Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "GetPhotoPawnType", nullptr, nullptr, sizeof(PhotoPawn_eventGetPhotoPawnType_Parms), Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics
	{
		struct PhotoPawn_eventOnPhotoTaken_Parms
		{
			int32 Width;
			int32 Height;
			TArray<FColor> Colors;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventOnPhotoTaken_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventOnPhotoTaken_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventOnPhotoTaken_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::NewProp_Colors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "OnPhotoTaken", nullptr, nullptr, sizeof(PhotoPawn_eventOnPhotoTaken_Parms), Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_OnPhotoTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_OnPhotoTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "OnPhotoTakenXbox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_RequestScreenshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_RequestScreenshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_RequestScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "RequestScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_RequestScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_RequestScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_RequestScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_RequestScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics
	{
		struct PhotoPawn_eventSwapInputAxisBinding_Parms
		{
			FName OldAxisName;
			FName NewAxisName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewAxisName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_OldAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_OldAxisName = { "OldAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventSwapInputAxisBinding_Parms, OldAxisName), METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_OldAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_OldAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_NewAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_NewAxisName = { "NewAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoPawn_eventSwapInputAxisBinding_Parms, NewAxisName), METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_NewAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_NewAxisName_MetaData)) };
	void Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoPawn_eventSwapInputAxisBinding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoPawn_eventSwapInputAxisBinding_Parms), &Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_OldAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_NewAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "SwapInputAxisBinding", nullptr, nullptr, sizeof(PhotoPawn_eventSwapInputAxisBinding_Parms), Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhotoPawn_TakePhoto_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhotoPawn_TakePhoto_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotoPawn_TakePhoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhotoPawn, nullptr, "TakePhoto", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhotoPawn_TakePhoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotoPawn_TakePhoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhotoPawn_TakePhoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhotoPawn_TakePhoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhotoPawn_NoRegister()
	{
		return APhotoPawn::StaticClass();
	}
	struct Z_Construct_UClass_APhotoPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutterEffectFloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShutterEffectFloatCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShutterPPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraShutterPPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutterEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutterEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutterEffectStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutterEffectStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutterActive_MetaData[];
#endif
		static void NewProp_ShutterActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShutterActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DidUnregisterFromPerception_MetaData[];
#endif
		static void NewProp_DidUnregisterFromPerception_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DidUnregisterFromPerception;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhotoPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhotoPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhotoPawn_BrowsePhotos, "BrowsePhotos" }, // 96992304
		{ &Z_Construct_UFunction_APhotoPawn_ChangeCameraType, "ChangeCameraType" }, // 2117125450
		{ &Z_Construct_UFunction_APhotoPawn_ExitPhotoMode, "ExitPhotoMode" }, // 910426549
		{ &Z_Construct_UFunction_APhotoPawn_GetCameraForwardVector, "GetCameraForwardVector" }, // 797975947
		{ &Z_Construct_UFunction_APhotoPawn_GetCameraLocation, "GetCameraLocation" }, // 2353700149
		{ &Z_Construct_UFunction_APhotoPawn_GetPhotoPawnType, "GetPhotoPawnType" }, // 3488852631
		{ &Z_Construct_UFunction_APhotoPawn_OnPhotoTaken, "OnPhotoTaken" }, // 3684453994
		{ &Z_Construct_UFunction_APhotoPawn_OnPhotoTakenXbox, "OnPhotoTakenXbox" }, // 4194878544
		{ &Z_Construct_UFunction_APhotoPawn_RequestScreenshot, "RequestScreenshot" }, // 3619189854
		{ &Z_Construct_UFunction_APhotoPawn_SwapInputAxisBinding, "SwapInputAxisBinding" }, // 926023068
		{ &Z_Construct_UFunction_APhotoPawn_TakePhoto, "TakePhoto" }, // 298264165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PhotoPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, CameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_BaseSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_BaseSpeedMultiplier = { "BaseSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, BaseSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_BaseSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_BaseSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_RotationInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_RotationInput = { "RotationInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, RotationInput), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_RotationInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_RotationInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectFloatCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectFloatCurve = { "ShutterEffectFloatCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, ShutterEffectFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectFloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectFloatCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraShutterPPM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraShutterPPM = { "CameraShutterPPM", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, CameraShutterPPM), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraShutterPPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraShutterPPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectDuration = { "ShutterEffectDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, ShutterEffectDuration), METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectStartTime = { "ShutterEffectStartTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhotoPawn, ShutterEffectStartTime), METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	void Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive_SetBit(void* Obj)
	{
		((APhotoPawn*)Obj)->ShutterActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive = { "ShutterActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APhotoPawn), &Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoPawn" },
		{ "ModuleRelativePath", "Public/PhotoPawn.h" },
	};
#endif
	void Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception_SetBit(void* Obj)
	{
		((APhotoPawn*)Obj)->DidUnregisterFromPerception = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception = { "DidUnregisterFromPerception", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APhotoPawn), &Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhotoPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_BaseSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_RotationInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectFloatCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_CameraShutterPPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterEffectStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_ShutterActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotoPawn_Statics::NewProp_DidUnregisterFromPerception,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhotoPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhotoPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhotoPawn_Statics::ClassParams = {
		&APhotoPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhotoPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhotoPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhotoPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhotoPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhotoPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhotoPawn, 444577958);
	template<> OEIPHOTOMODE_API UClass* StaticClass<APhotoPawn>()
	{
		return APhotoPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhotoPawn(Z_Construct_UClass_APhotoPawn, &APhotoPawn::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("APhotoPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhotoPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
