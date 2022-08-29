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
	 * BlueprintGeneratedClass BP_Ant_Soldier.BP_Ant_Soldier_C
	 * Size -> 0x0010 (FullSize[0x12F0] - InheritedSize[0x12E0])
	 */
	class ABP_Ant_Soldier_C : public ABP_Ant_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x12E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPlayerScalingReceiverComponent*                     PlayerScalingReceiver;                                   // 0x12E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void ExecuteUbergraph_BP_Ant_Soldier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
