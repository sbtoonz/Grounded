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
	 * BlueprintGeneratedClass BP_AntSoldierWaveAI.BP_AntSoldierWaveAI_C
	 * Size -> 0x0008 (FullSize[0x05A8] - InheritedSize[0x05A0])
	 */
	class ABP_AntSoldierWaveAI_C : public ASurvivalAIController
	{
	public:
		class UMaineAIPerceptionComponent*                         MaineAIPerception;                                       // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
