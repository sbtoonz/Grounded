// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ScriptLibraryScripting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptLibraryScripting() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibraryScripting_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibraryScripting();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UScriptLibraryScripting::execAddClassHardRef)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScriptLibraryScripting::AddClassHardRef(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptLibraryScripting::execAddDataAssetHardRef)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScriptLibraryScripting::AddDataAssetHardRef(Z_Param_DataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptLibraryScripting::execCallGlobalScript)
	{
		P_GET_STRUCT(FGuid,Z_Param_GlobalScriptID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScriptLibraryScripting::CallGlobalScript(Z_Param_GlobalScriptID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptLibraryScripting::execDebugPrintMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScriptLibraryScripting::DebugPrintMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	void UScriptLibraryScripting::StaticRegisterNativesUScriptLibraryScripting()
	{
		UClass* Class = UScriptLibraryScripting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddClassHardRef", &UScriptLibraryScripting::execAddClassHardRef },
			{ "AddDataAssetHardRef", &UScriptLibraryScripting::execAddDataAssetHardRef },
			{ "CallGlobalScript", &UScriptLibraryScripting::execCallGlobalScript },
			{ "DebugPrintMessage", &UScriptLibraryScripting::execDebugPrintMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics
	{
		struct ScriptLibraryScripting_eventAddClassHardRef_Parms
		{
			FString Class;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibraryScripting_eventAddClassHardRef_Parms, Class), METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptLibraryScripting, nullptr, "AddClassHardRef", nullptr, nullptr, sizeof(ScriptLibraryScripting_eventAddClassHardRef_Parms), Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics
	{
		struct ScriptLibraryScripting_eventAddDataAssetHardRef_Parms
		{
			FString DataAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibraryScripting_eventAddDataAssetHardRef_Parms, DataAsset), METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::NewProp_DataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::NewProp_DataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::NewProp_DataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptLibraryScripting, nullptr, "AddDataAssetHardRef", nullptr, nullptr, sizeof(ScriptLibraryScripting_eventAddDataAssetHardRef_Parms), Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics
	{
		struct ScriptLibraryScripting_eventCallGlobalScript_Parms
		{
			FGuid GlobalScriptID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalScriptID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::NewProp_GlobalScriptID = { "GlobalScriptID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibraryScripting_eventCallGlobalScript_Parms, GlobalScriptID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::NewProp_GlobalScriptID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptLibraryScripting, nullptr, "CallGlobalScript", nullptr, nullptr, sizeof(ScriptLibraryScripting_eventCallGlobalScript_Parms), Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics
	{
		struct ScriptLibraryScripting_eventDebugPrintMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibraryScripting_eventDebugPrintMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptLibraryScripting, nullptr, "DebugPrintMessage", nullptr, nullptr, sizeof(ScriptLibraryScripting_eventDebugPrintMessage_Parms), Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScriptLibraryScripting_NoRegister()
	{
		return UScriptLibraryScripting::StaticClass();
	}
	struct Z_Construct_UClass_UScriptLibraryScripting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptLibraryScripting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptLibraryScripting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptLibraryScripting_AddClassHardRef, "AddClassHardRef" }, // 2016049148
		{ &Z_Construct_UFunction_UScriptLibraryScripting_AddDataAssetHardRef, "AddDataAssetHardRef" }, // 4117540921
		{ &Z_Construct_UFunction_UScriptLibraryScripting_CallGlobalScript, "CallGlobalScript" }, // 2394964240
		{ &Z_Construct_UFunction_UScriptLibraryScripting_DebugPrintMessage, "DebugPrintMessage" }, // 3232657869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptLibraryScripting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScriptLibraryScripting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScriptLibraryScripting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptLibraryScripting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptLibraryScripting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScriptLibraryScripting_Statics::ClassParams = {
		&UScriptLibraryScripting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScriptLibraryScripting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptLibraryScripting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptLibraryScripting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScriptLibraryScripting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScriptLibraryScripting, 1365234334);
	template<> OEISCRIPTING_API UClass* StaticClass<UScriptLibraryScripting>()
	{
		return UScriptLibraryScripting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScriptLibraryScripting(Z_Construct_UClass_UScriptLibraryScripting, &UScriptLibraryScripting::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UScriptLibraryScripting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptLibraryScripting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
