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
	 * Class OEIVoiceOver.OEIVoiceOverActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIVoiceOverActor : public USpeaker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIVoiceOver.OEIVoiceOverBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIVoiceOverBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool StopVoiceOver(class AActor* Actor);
		bool ResumeVoiceOver(class AActor* Actor);
		bool PlayVoiceOver(class AActor* Actor, const struct FVoiceOverData& Data, float StartTime, const class FScriptDelegate& PlaybackStarted);
		bool PauseVoiceOver(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIVoiceOver.OEIVoiceOverComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UOEIVoiceOverComponent : public UActorComponent
	{
	public:
		class USceneComponent*                                     AudioComponent;                                          // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActorComponent*                                     FacialAnimationComponent;                                // 0x00B8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVoiceOverComponentSetupData                        SetupData;                                               // 0x00C0(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GP1R[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void Stop(float FadeOutDuration);
		void Resume();
		void Prepare(const struct FVoiceOverData& Data, const class FScriptDelegate& LoadingFinished);
		void Play(const struct FVoiceOverData& Data, float StartTime, const class FScriptDelegate& PlaybackStarted);
		void Pause();
		void CancelPrepared();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIVoiceOver.OEIVoiceOverManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIVoiceOverManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIVoiceOver.OEIVoiceOverSection
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	class UOEIVoiceOverSection : public UMovieSceneSection
	{
	public:
		class FString                                              VoiceLine;                                               // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSpeakerReference                                   Speaker;                                                 // 0x00F8(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               SpeakerID;                                               // 0x0110(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FConversationReference                              Conversation;                                            // 0x0120(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ConversationID;                                          // 0x0138(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NodeId;                                                  // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RVUT[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             AnimationAssetPaths;                                     // 0x0150(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>                             AudioAssetPaths;                                         // 0x0160(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		float                                                      DefaultAudioDuration;                                    // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndOffset;                                               // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bIsAnimationDurationLoaded : 1;                          // 0x017C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B2SR[0x3];                                   // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationDuration;                                       // 0x0180(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BMZ9[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIVoiceOver.OEIVoiceOverSettings
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UOEIVoiceOverSettings : public UDeveloperSettings
	{
	public:
		EVoiceOverAudioImplementationType                          AudioImplementation;                                     // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YWB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultFaceRig[0x28];                                    // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIVoiceOver.OEIVoiceOverTrack
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UOEIVoiceOverTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_F029[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0080(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
