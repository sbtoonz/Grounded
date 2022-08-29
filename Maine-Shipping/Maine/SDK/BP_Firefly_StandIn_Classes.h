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
	 * BlueprintGeneratedClass BP_Firefly_StandIn.BP_Firefly_StandIn_C
	 * Size -> 0x0010 (FullSize[0x12C8] - InheritedSize[0x12B8])
	 */
	class ABP_Firefly_StandIn_C : public AProxyCharacterStandInActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x12B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UParticleSystemComponent*                            GlowVFX;                                                 // 0x12C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ToggleVFX(int32_t NewHour, int32_t NewDay);
		void ExecuteUbergraph_BP_Firefly_StandIn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
