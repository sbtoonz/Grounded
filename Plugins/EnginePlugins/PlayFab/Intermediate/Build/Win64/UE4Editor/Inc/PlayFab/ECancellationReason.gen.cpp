// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ECancellationReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECancellationReason() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECancellationReason();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ECancellationReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ECancellationReason, Z_Construct_UPackage__Script_PlayFab(), TEXT("ECancellationReason"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ECancellationReason>()
	{
		return ECancellationReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECancellationReason(ECancellationReason_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ECancellationReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ECancellationReason_Hash() { return 940008657U; }
	UEnum* Z_Construct_UEnum_PlayFab_ECancellationReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECancellationReason"), 0, Get_Z_Construct_UEnum_PlayFab_ECancellationReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECancellationReason::pfenum_Requested", (int64)ECancellationReason::pfenum_Requested },
				{ "ECancellationReason::pfenum_Internal", (int64)ECancellationReason::pfenum_Internal },
				{ "ECancellationReason::pfenum_Timeout", (int64)ECancellationReason::pfenum_Timeout },
				{ "ECancellationReason::pfenum_MAX", (int64)ECancellationReason::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ECancellationReason.h" },
				{ "pfenum_Internal.Name", "ECancellationReason::pfenum_Internal" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ECancellationReason::pfenum_MAX" },
				{ "pfenum_Requested.Name", "ECancellationReason::pfenum_Requested" },
				{ "pfenum_Timeout.Name", "ECancellationReason::pfenum_Timeout" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ECancellationReason",
				"ECancellationReason",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
