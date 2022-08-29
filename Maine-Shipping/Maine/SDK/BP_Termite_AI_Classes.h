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
	 * BlueprintGeneratedClass BP_Termite_AI.BP_Termite_AI_C
	 * Size -> 0x0010 (FullSize[0x05B0] - InheritedSize[0x05A0])
	 */
	class ABP_Termite_AI_C : public ASurvivalAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UMaineAIPerceptionComponent*                         MaineAIPerception;                                       // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ExecuteUbergraph_BP_Termite_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
