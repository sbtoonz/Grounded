// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/EOnlineVoiceIncomingChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlineVoiceIncomingChannel() {}
// Cross Module References
	ONLINEMANAGER_API UEnum* Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
// End Cross Module References
	static UEnum* EOnlineVoiceIncomingChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel, Z_Construct_UPackage__Script_OnlineManager(), TEXT("EOnlineVoiceIncomingChannel"));
		}
		return Singleton;
	}
	template<> ONLINEMANAGER_API UEnum* StaticEnum<EOnlineVoiceIncomingChannel>()
	{
		return EOnlineVoiceIncomingChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineVoiceIncomingChannel(EOnlineVoiceIncomingChannel_StaticEnum, TEXT("/Script/OnlineManager"), TEXT("EOnlineVoiceIncomingChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel_Hash() { return 1351406811U; }
	UEnum* Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineVoiceIncomingChannel"), 0, Get_Z_Construct_UEnum_OnlineManager_EOnlineVoiceIncomingChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineVoiceIncomingChannel::MicrophoneAudio", (int64)EOnlineVoiceIncomingChannel::MicrophoneAudio },
				{ "EOnlineVoiceIncomingChannel::TextToSpeechAudio", (int64)EOnlineVoiceIncomingChannel::TextToSpeechAudio },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MicrophoneAudio.Name", "EOnlineVoiceIncomingChannel::MicrophoneAudio" },
				{ "ModuleRelativePath", "Public/EOnlineVoiceIncomingChannel.h" },
				{ "TextToSpeechAudio.Name", "EOnlineVoiceIncomingChannel::TextToSpeechAudio" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineManager,
				nullptr,
				"EOnlineVoiceIncomingChannel",
				"EOnlineVoiceIncomingChannel",
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
