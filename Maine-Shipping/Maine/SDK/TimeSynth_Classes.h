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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TimeSynth.TimeSynthVolumeGroup
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTimeSynthVolumeGroup : public UObject
	{
	public:
		float                                                      DefaultVolume;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M6H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeSynth.TimeSynthClip
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTimeSynthClip : public UObject
	{
	public:
		TArray<struct FTimeSynthClipSound>                         Sounds;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           VolumeScaleDb;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PitchScaleSemitones;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimeSynthTimeDef                                   FadeInTime;                                              // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bApplyFadeOut;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9UI[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeSynthTimeDef                                   FadeOutTime;                                             // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTimeSynthTimeDef                                   ClipDuration;                                            // 0x005C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		ETimeSynthEventClipQuantization                            ClipQuantization;                                        // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C0R[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeSynth.TimeSynthComponent
	 * Size -> 0x0A50 (FullSize[0x1140] - InheritedSize[0x06F0])
	 */
	class UTimeSynthComponent : public USynthComponent
	{
	public:
		struct FTimeSynthQuantizationSettings                      QuantizationSettings;                                    // 0x06F0(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnableSpectralAnalysis : 1;                             // 0x0704(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BEE[0x3];                                   // 0x0705(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FrequenciesToAnalyze;                                    // 0x0708(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ETimeSynthFFTSize                                          FFTSize;                                                 // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D350[0x7];                                   // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlaybackTime;                                          // 0x0720(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              bIsFilterAEnabled : 1;                                   // 0x0730(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsFilterBEnabled : 1;                                   // 0x0730(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9501[0x3];                                   // 0x0731(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeSynthFilterSettings                            FilterASettings;                                         // 0x0734(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTimeSynthFilterSettings                            FilterBSettings;                                         // 0x0740(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsEnvelopeFollowerEnabled : 1;                          // 0x074C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGMZ[0x3];                                   // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeSynthEnvelopeFollowerSettings                  EnvelopeFollowerSettings;                                // 0x0750(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxPoolSize;                                             // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1D4[0x9E0];                                 // 0x0760(0x09E0) MISSED OFFSET (PADDING)

	public:
		void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);
		void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
		void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);
		void StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
		void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
		void SetSeed(int32_t InSeed);
		void SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings);
		void SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings);
		void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
		void SetFFTSize(ETimeSynthFFTSize InFFTSize);
		void SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings);
		void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
		void SetBPM(float BeatsPerMinute);
		void ResetSeed();
		struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
		bool HasActiveClips();
		TArray<struct FTimeSynthSpectralData> GetSpectralData();
		int32_t GetMaxActiveClipLimit();
		float GetEnvelopeFollowerValue();
		int32_t GetBPM();
		void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const class FScriptDelegate& OnQuantizationEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
