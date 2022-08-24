// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineConstantCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineConstantCallbackProxy() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineConstantCallbackProxy_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineConstantCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineConstantCallbackProxy::execOnlineConstantCheckOnlineVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineConstantCallbackProxy::OnlineConstantCheckOnlineVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineConstantCallbackProxy::execOnlineConstantGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConstantName);
		P_GET_UBOOL(Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineConstantCallbackProxy::OnlineConstantGetBool(Z_Param_ConstantName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineConstantCallbackProxy::execOnlineConstantGetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConstantName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOnlineConstantCallbackProxy::OnlineConstantGetFloat(Z_Param_ConstantName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineConstantCallbackProxy::execOnlineConstantGetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConstantName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOnlineConstantCallbackProxy::OnlineConstantGetInt(Z_Param_ConstantName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineConstantCallbackProxy::execOnlineConstantGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConstantName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineConstantCallbackProxy::OnlineConstantGetString(Z_Param_ConstantName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineConstantCallbackProxy::execOnlineSynchronizeConstant)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineConstantCallbackProxy**)Z_Param__Result=UOnlineConstantCallbackProxy::OnlineSynchronizeConstant(Z_Param_WorldContextObject,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	void UOnlineConstantCallbackProxy::StaticRegisterNativesUOnlineConstantCallbackProxy()
	{
		UClass* Class = UOnlineConstantCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnlineConstantCheckOnlineVersion", &UOnlineConstantCallbackProxy::execOnlineConstantCheckOnlineVersion },
			{ "OnlineConstantGetBool", &UOnlineConstantCallbackProxy::execOnlineConstantGetBool },
			{ "OnlineConstantGetFloat", &UOnlineConstantCallbackProxy::execOnlineConstantGetFloat },
			{ "OnlineConstantGetInt", &UOnlineConstantCallbackProxy::execOnlineConstantGetInt },
			{ "OnlineConstantGetString", &UOnlineConstantCallbackProxy::execOnlineConstantGetString },
			{ "OnlineSynchronizeConstant", &UOnlineConstantCallbackProxy::execOnlineSynchronizeConstant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics
	{
		struct OnlineConstantCallbackProxy_eventOnlineConstantCheckOnlineVersion_Parms
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
	void Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineConstantCallbackProxy_eventOnlineConstantCheckOnlineVersion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineConstantCallbackProxy_eventOnlineConstantCheckOnlineVersion_Parms), &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineConstantCallbackProxy, nullptr, "OnlineConstantCheckOnlineVersion", nullptr, nullptr, sizeof(OnlineConstantCallbackProxy_eventOnlineConstantCheckOnlineVersion_Parms), Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics
	{
		struct OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms
		{
			FString ConstantName;
			bool DefaultValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConstantName;
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ConstantName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ConstantName = { "ConstantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms, ConstantName), METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ConstantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ConstantName_MetaData)) };
	void Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms*)Obj)->DefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms), &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms), &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ConstantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineConstantCallbackProxy, nullptr, "OnlineConstantGetBool", nullptr, nullptr, sizeof(OnlineConstantCallbackProxy_eventOnlineConstantGetBool_Parms), Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics
	{
		struct OnlineConstantCallbackProxy_eventOnlineConstantGetFloat_Parms
		{
			FString ConstantName;
			float DefaultValue;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConstantName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ConstantName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ConstantName = { "ConstantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetFloat_Parms, ConstantName), METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ConstantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ConstantName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetFloat_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ConstantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineConstantCallbackProxy, nullptr, "OnlineConstantGetFloat", nullptr, nullptr, sizeof(OnlineConstantCallbackProxy_eventOnlineConstantGetFloat_Parms), Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics
	{
		struct OnlineConstantCallbackProxy_eventOnlineConstantGetInt_Parms
		{
			FString ConstantName;
			int32 DefaultValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConstantName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ConstantName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ConstantName = { "ConstantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetInt_Parms, ConstantName), METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ConstantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ConstantName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetInt_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ConstantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineConstantCallbackProxy, nullptr, "OnlineConstantGetInt", nullptr, nullptr, sizeof(OnlineConstantCallbackProxy_eventOnlineConstantGetInt_Parms), Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics
	{
		struct OnlineConstantCallbackProxy_eventOnlineConstantGetString_Parms
		{
			FString ConstantName;
			FString DefaultValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConstantName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ConstantName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ConstantName = { "ConstantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetString_Parms, ConstantName), METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ConstantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ConstantName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetString_Parms, DefaultValue), METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineConstantGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ConstantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineConstantCallbackProxy, nullptr, "OnlineConstantGetString", nullptr, nullptr, sizeof(OnlineConstantCallbackProxy_eventOnlineConstantGetString_Parms), Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics
	{
		struct OnlineConstantCallbackProxy_eventOnlineSynchronizeConstant_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			UOnlineConstantCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineSynchronizeConstant_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineSynchronizeConstant_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineConstantCallbackProxy_eventOnlineSynchronizeConstant_Parms, ReturnValue), Z_Construct_UClass_UOnlineConstantCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineConstantCallbackProxy, nullptr, "OnlineSynchronizeConstant", nullptr, nullptr, sizeof(OnlineConstantCallbackProxy_eventOnlineSynchronizeConstant_Parms), Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineConstantCallbackProxy_NoRegister()
	{
		return UOnlineConstantCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion, "OnlineConstantCheckOnlineVersion" }, // 2725722386
		{ &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetBool, "OnlineConstantGetBool" }, // 916009510
		{ &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetFloat, "OnlineConstantGetFloat" }, // 283650427
		{ &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetInt, "OnlineConstantGetInt" }, // 3498843779
		{ &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineConstantGetString, "OnlineConstantGetString" }, // 3675523228
		{ &Z_Construct_UFunction_UOnlineConstantCallbackProxy_OnlineSynchronizeConstant, "OnlineSynchronizeConstant" }, // 1595755900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineConstantCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineConstantCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineConstantCallbackProxy, onSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineConstantCallbackProxy" },
		{ "ModuleRelativePath", "Public/OnlineConstantCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineConstantCallbackProxy, onFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineConstantCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::ClassParams = {
		&UOnlineConstantCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineConstantCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineConstantCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineConstantCallbackProxy, 4257823427);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineConstantCallbackProxy>()
	{
		return UOnlineConstantCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineConstantCallbackProxy(Z_Construct_UClass_UOnlineConstantCallbackProxy, &UOnlineConstantCallbackProxy::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineConstantCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineConstantCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
