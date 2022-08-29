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
	 * BlueprintGeneratedClass BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C
	 * Size -> 0x0028 (FullSize[0x0390] - InheritedSize[0x0368])
	 */
	class ABP_Lab_PowerTerminal_Pond02_C : public ABP_Base_PowerTerminal_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UConditionalToggleComponent*                         ConditionalToggle_BreakersNeedReset;                     // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            VFX_Spark;                                               // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_BreakersReset;                         // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SparkSound;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RedrawScreen();
		void OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator);
		void Reroute_Unsuccesful();
		void BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
