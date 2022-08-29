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
	 * BlueprintGeneratedClass BP_DroppedScience.BP_DroppedScience_C
	 * Size -> 0x0020 (FullSize[0x02C0] - InheritedSize[0x02A0])
	 */
	class ABP_DroppedScience_C : public AScienceCollectable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPointLightComponent*                                CenterLight;                                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ScienceEmitter;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void CustomEvent_1(class ASurvivalPlayerCharacter* Character);
		void ExecuteUbergraph_BP_DroppedScience(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
