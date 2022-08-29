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
	 * BlueprintGeneratedClass BP_Trap_Cactus_A.BP_Trap_Cactus_A_C
	 * Size -> 0x0020 (FullSize[0x07F8] - InheritedSize[0x07D8])
	 */
	class ABP_Trap_Cactus_A_C : public ATrap
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       TriggerBox;                                              // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_Body;                                                // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Source_Material;                                         // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
