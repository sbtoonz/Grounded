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
	 * BlueprintGeneratedClass BP_Gnat_Infected.BP_Gnat_Infected_C
	 * Size -> 0x0028 (FullSize[0x2428] - InheritedSize[0x2400])
	 */
	class ABP_Gnat_Infected_C : public ABP_Gnat_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2400(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UParticleSystemComponent*                            SporeParticles;                                          // 0x2408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x2410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 BoopPoison;                                              // 0x2418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void Handle_Boop(class AActor* OtherActor);
		void BndEvt__BP_Gnat_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void ReceiveBeginPlay();
		void On_Play_Reaction(class UReactionComponent* Sender, EHitReactionType ReactionType);
		void ExecuteUbergraph_BP_Gnat_Infected(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
