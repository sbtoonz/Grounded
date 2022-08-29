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
	 * BlueprintGeneratedClass BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C
	 * Size -> 0x0134 (FullSize[0x044C] - InheritedSize[0x0318])
	 */
	class ABP_Pond_Breaker_Switch_Base_C : public ABP_Power_Switch_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UConditionalToggleComponent*                         ConditionalToggle_Vis_PostPowerSurge_Off;                // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_Vis_PrePowerSurge;                     // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_Vis_PostPowerSurge_On;                 // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light_M2;                                                // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ParticleSpawn03;                                         // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ParticleSpawn02;                                         // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ParticleSpawn01;                                         // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Switch;                                                  // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SwitchHousing;                                           // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Anim_InnerDialRotation_SwitchBarMovement_85AEB6E249CCF57A373562851B80BE80; // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Anim_InnerDialRotation__Direction_85AEB6E249CCF57A373562851B80BE80; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K2PR[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Anim_InnerDialRotation;                                  // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FRotator                                            SwitchStartRotation;                                     // 0x0380(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            SwitchEndRotation;                                       // 0x038C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BaseLightColorValue;                                     // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        RedLightValue;                                           // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  Sparks_sound;                                            // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_PowerConverterPondLab_C*                         PowerConverter;                                          // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Fan_B_C*>                                 ConnectedFans;                                           // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FLocString                                          InteractionText;                                         // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            EmissiveMID;                                             // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity;                                          // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlowColor01_Enabled;                                     // 0x03FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlowColor02_Enabled;                                     // 0x040C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnState;                                                 // 0x041C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BRE4[0x3];                                   // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Switch_Casing_MID;                                       // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BreakerID;                                               // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlowColor01_Disabled;                                    // 0x042C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlowColor02_Disabled;                                    // 0x043C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		void UserConstructionScript();
		void Anim_InnerDialRotation__FinishedFunc();
		void Anim_InnerDialRotation__UpdateFunc();
		void Light_Off();
		void LightOn(bool IsEnabled);
		void OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator);
		void ReceiveBeginPlay();
		void BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void ToggleConnectedFans(bool ToggleOn);
		void ToggleIsOnGlobalVariableImplementation();
		void BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void PanelEmissiveOn();
		void PanelEmissiveEnabled();
		void PanelEmissiveDisabled();
		void OnUpdateVisualState(bool IsOpen);
		void PlayOpenSound();
		void EvaluatePanelVFX();
		void ExecuteUbergraph_BP_Pond_Breaker_Switch_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
