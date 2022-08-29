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
	 * BlueprintGeneratedClass BP_ResourceAnalyzer.BP_ResourceAnalyzer_C
	 * Size -> 0x0038 (FullSize[0x06F0] - InheritedSize[0x06B8])
	 */
	class ABP_ResourceAnalyzer_C : public AResourceAnalyzer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USpotLightComponent*                                 PinkLight;                                               // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                GreenLight;                                              // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTransmitterComponent*                               TransmitterComponent;                                    // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          InteractString;                                          // 0x06E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		void Interact(EInteractionChannel Channel, class AActor* InstigatedBy);
		void ExecuteUbergraph_BP_ResourceAnalyzer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
