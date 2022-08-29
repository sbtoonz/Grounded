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
	 * Enum OEIVoiceOver.EVoiceOverAudioImplementationType
	 */
	enum class EVoiceOverAudioImplementationType : uint8_t
	{
		Default             = 0,
		FaceFX              = 1,
		FaceFXExternalAudio = 2,
		MAX                 = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OEIVoiceOver.VoiceOverComponentSetupData
	 * Size -> 0x0018
	 */
	struct FVoiceOverComponentSetupData
	{
	public:
		class FName                                                AudioAttachmentSocketName;                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             FaceFXActor;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompensateForForceFrontXAxis;                           // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoPlaySound;                                          // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableMorphTargets;                                    // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableMaterialParameters;                              // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDQY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIVoiceOver.VoiceOverData
	 * Size -> 0x0050
	 */
	struct FVoiceOverData
	{
	public:
		unsigned char                                              AudioPath[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimationPath[0x28];                                     // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct OEIVoiceOver.AnimNode_OEIBlendFaceFXAnimation
	 * Size -> 0x0048 (FullSize[0x0058] - InheritedSize[0x0010])
	 */
	struct FAnimNode_OEIBlendFaceFXAnimation : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipBoneMappingWithoutNS;                               // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7F2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WH56[0x2C];                                  // 0x002C(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIVoiceOver.AnimNode_OEIBlendFaceFXCurves
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FAnimNode_OEIBlendFaceFXCurves : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UPoseAsset*                                          PoseAsset;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipBoneMappingWithoutNS;                               // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KLD[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P34S[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIVoiceOver.OEIVoiceOverSectionData
	 * Size -> 0x00E8
	 */
	struct FOEIVoiceOverSectionData
	{
	public:
		struct FGuid                                               TrackId;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR18[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VoiceLine;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSpeakerReference                                   Speaker;                                                 // 0x0028(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SpeakerID;                                               // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FConversationReference                              Conversation;                                            // 0x0050(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ConversationID;                                          // 0x0068(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeId;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33M6[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Animation[0x28];                                         // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Audio[0x28];                                             // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      AnimDuration;                                            // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFWP[0x8];                                   // 0x00D4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        StartTime;                                               // 0x00DC(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndTime;                                                 // 0x00E0(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7R81[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIVoiceOver.OEIVoiceOverSectionTemplate
	 * Size -> 0x00E8 (FullSize[0x0108] - InheritedSize[0x0020])
	 */
	struct FOEIVoiceOverSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FOEIVoiceOverSectionData                            SectionData;                                             // 0x0020(0x00E8) NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
