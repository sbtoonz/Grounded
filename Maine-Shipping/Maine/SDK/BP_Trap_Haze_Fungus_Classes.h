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
	 * BlueprintGeneratedClass BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C
	 * Size -> 0x0058 (FullSize[0x0830] - InheritedSize[0x07D8])
	 */
	class ABP_Trap_Haze_Fungus_C : public ATrap
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     VFX_Location;                                            // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       TriggerBox;                                              // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TL_Unshrivel_NewTrack_0_32E511AD461D5BE6B68EF9B82507BA15; // 0x0800(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_Unshrivel__Direction_32E511AD461D5BE6B68EF9B82507BA15; // 0x0804(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BCX6[0x3];                                   // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_Unshrivel;                                            // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_VertexAnim_Vector_Anim_A9F0D58D4532FFE8B786488873FE4594; // 0x0810(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_VertexAnim__Direction_A9F0D58D4532FFE8B786488873FE4594; // 0x0814(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HRNG[0x3];                                   // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_VertexAnim;                                           // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_Body;                                                // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Source_Material;                                         // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		void TL_VertexAnim__FinishedFunc();
		void TL_VertexAnim__UpdateFunc();
		void TL_Unshrivel__FinishedFunc();
		void TL_Unshrivel__UpdateFunc();
		void OnTrigger(ETrapTriggerState TrapTriggerState);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Trap_Haze_Fungus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
