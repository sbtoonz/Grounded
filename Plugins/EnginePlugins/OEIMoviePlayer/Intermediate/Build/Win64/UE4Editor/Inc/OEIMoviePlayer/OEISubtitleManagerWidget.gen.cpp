// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEISubtitleManagerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEISubtitleManagerWidget() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleManagerWidget_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleManagerWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMovieSubtitleData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleEntryWidget_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEISubtitleManagerWidget::execSetShowCinematicSubtitles)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowCinematicSubtitles(Z_Param_bVisible);
		P_NATIVE_END;
	}
	void UOEISubtitleManagerWidget::StaticRegisterNativesUOEISubtitleManagerWidget()
	{
		UClass* Class = UOEISubtitleManagerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetShowCinematicSubtitles", &UOEISubtitleManagerWidget::execSetShowCinematicSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics
	{
		struct OEISubtitleManagerWidget_eventSetShowCinematicSubtitles_Parms
		{
			bool bVisible;
		};
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((OEISubtitleManagerWidget_eventSetShowCinematicSubtitles_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEISubtitleManagerWidget_eventSetShowCinematicSubtitles_Parms), &Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEISubtitleManagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEISubtitleManagerWidget, nullptr, "SetShowCinematicSubtitles", nullptr, nullptr, sizeof(OEISubtitleManagerWidget_eventSetShowCinematicSubtitles_Parms), Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEISubtitleManagerWidget_NoRegister()
	{
		return UOEISubtitleManagerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOEISubtitleManagerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterSubtitleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterSubtitleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleEntryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubtitleEntryClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSubtitleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSubtitleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEISubtitleManagerWidget_SetShowCinematicSubtitles, "SetShowCinematicSubtitles" }, // 3790190362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEISubtitleManagerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEISubtitleManagerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleVerticalBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleManagerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEISubtitleManagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleVerticalBox = { "SubtitleVerticalBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEISubtitleManagerWidget, SubtitleVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_MasterSubtitleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleManagerWidget" },
		{ "ModuleRelativePath", "Public/OEISubtitleManagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_MasterSubtitleData = { "MasterSubtitleData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEISubtitleManagerWidget, MasterSubtitleData), Z_Construct_UClass_UOEIMovieSubtitleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_MasterSubtitleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_MasterSubtitleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleEntryClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleManagerWidget" },
		{ "ModuleRelativePath", "Public/OEISubtitleManagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleEntryClass = { "SubtitleEntryClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEISubtitleManagerWidget, SubtitleEntryClass), Z_Construct_UClass_UOEISubtitleEntryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleEntryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleEntryClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_CurrentSubtitleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleManagerWidget" },
		{ "ModuleRelativePath", "Public/OEISubtitleManagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_CurrentSubtitleData = { "CurrentSubtitleData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEISubtitleManagerWidget, CurrentSubtitleData), Z_Construct_UClass_UOEISubtitleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_CurrentSubtitleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_CurrentSubtitleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_MasterSubtitleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_SubtitleEntryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::NewProp_CurrentSubtitleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEISubtitleManagerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::ClassParams = {
		&UOEISubtitleManagerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEISubtitleManagerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEISubtitleManagerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEISubtitleManagerWidget, 2622149570);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEISubtitleManagerWidget>()
	{
		return UOEISubtitleManagerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEISubtitleManagerWidget(Z_Construct_UClass_UOEISubtitleManagerWidget, &UOEISubtitleManagerWidget::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEISubtitleManagerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEISubtitleManagerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
