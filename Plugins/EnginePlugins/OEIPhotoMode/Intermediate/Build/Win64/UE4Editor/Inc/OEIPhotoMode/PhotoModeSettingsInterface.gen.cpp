// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSettingsInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSettingsInterface() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsInterface_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	DEFINE_FUNCTION(IPhotoModeSettingsInterface::execRegisterWithPhotoModeSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterWithPhotoModeSubsystem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPhotoModeSettingsInterface::execUnregisterWithPhotoModeSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterWithPhotoModeSubsystem_Implementation();
		P_NATIVE_END;
	}
	void IPhotoModeSettingsInterface::RegisterWithPhotoModeSubsystem()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterWithPhotoModeSubsystem instead.");
	}
	void IPhotoModeSettingsInterface::UnregisterWithPhotoModeSubsystem()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnregisterWithPhotoModeSubsystem instead.");
	}
	void UPhotoModeSettingsInterface::StaticRegisterNativesUPhotoModeSettingsInterface()
	{
		UClass* Class = UPhotoModeSettingsInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterWithPhotoModeSubsystem", &IPhotoModeSettingsInterface::execRegisterWithPhotoModeSubsystem },
			{ "UnregisterWithPhotoModeSubsystem", &IPhotoModeSettingsInterface::execUnregisterWithPhotoModeSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsInterface, nullptr, "RegisterWithPhotoModeSubsystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsInterface, nullptr, "UnregisterWithPhotoModeSubsystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeSettingsInterface_NoRegister()
	{
		return UPhotoModeSettingsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSettingsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem, "RegisterWithPhotoModeSubsystem" }, // 3812907335
		{ &Z_Construct_UFunction_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem, "UnregisterWithPhotoModeSubsystem" }, // 1239944854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPhotoModeSettingsInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::ClassParams = {
		&UPhotoModeSettingsInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSettingsInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSettingsInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSettingsInterface, 795673990);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSettingsInterface>()
	{
		return UPhotoModeSettingsInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSettingsInterface(Z_Construct_UClass_UPhotoModeSettingsInterface, &UPhotoModeSettingsInterface::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSettingsInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSettingsInterface);
	static FName NAME_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem = FName(TEXT("RegisterWithPhotoModeSubsystem"));
	void IPhotoModeSettingsInterface::Execute_RegisterWithPhotoModeSubsystem(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPhotoModeSettingsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPhotoModeSettingsInterface*)(O->GetNativeInterfaceAddress(UPhotoModeSettingsInterface::StaticClass())))
		{
			I->RegisterWithPhotoModeSubsystem_Implementation();
		}
	}
	static FName NAME_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem = FName(TEXT("UnregisterWithPhotoModeSubsystem"));
	void IPhotoModeSettingsInterface::Execute_UnregisterWithPhotoModeSubsystem(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPhotoModeSettingsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPhotoModeSettingsInterface*)(O->GetNativeInterfaceAddress(UPhotoModeSettingsInterface::StaticClass())))
		{
			I->UnregisterWithPhotoModeSubsystem_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
