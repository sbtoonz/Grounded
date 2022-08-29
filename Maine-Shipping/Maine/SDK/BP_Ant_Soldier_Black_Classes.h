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
	 * BlueprintGeneratedClass BP_Ant_Soldier_Black.BP_Ant_Soldier_Black_C
	 * Size -> 0x0008 (FullSize[0x12F8] - InheritedSize[0x12F0])
	 */
	class ABP_Ant_Soldier_Black_C : public ABP_Ant_Soldier_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x12F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void ExecuteUbergraph_BP_Ant_Soldier_Black(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
