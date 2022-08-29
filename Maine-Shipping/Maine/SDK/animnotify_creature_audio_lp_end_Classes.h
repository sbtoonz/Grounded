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
	 * BlueprintGeneratedClass animnotify_creature_audio_lp_end.animnotify_creature_audio_lp_end_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class Uanimnotify_creature_audio_lp_end_C : public UAnimNotify
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
