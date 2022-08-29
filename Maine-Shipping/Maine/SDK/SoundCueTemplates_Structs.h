#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SoundCueTemplates.ESoundContainerType
	 */
	enum class ESoundContainerType : uint8_t
	{
		Concatenate = 0,
		Randomize   = 1,
		Mix         = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SoundCueTemplates.SoundCueCrossfadeInfo
	 * Size -> 0x0020
	 */
	struct FSoundCueCrossfadeInfo
	{
	public:
		struct FDistanceDatum                                      DistanceInfo;                                            // 0x0000(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XCV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          Sound;                                                   // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SoundCueTemplates.SoundCueTemplateQualitySettings
	 * Size -> 0x0028
	 */
	struct FSoundCueTemplateQualitySettings
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    MaxConcatenatedVariations;                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRandomizedVariations;                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMixVariations;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMFE[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
