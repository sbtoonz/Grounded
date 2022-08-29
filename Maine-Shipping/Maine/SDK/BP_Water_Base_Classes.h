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
	 * BlueprintGeneratedClass BP_Water_Base.BP_Water_Base_C
	 * Size -> 0x01F0 (FullSize[0x06D8] - InheritedSize[0x04E8])
	 */
	class ABP_Water_Base_C : public AFluidVolume
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                DepthImpostor;                                           // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       ColliderCamera;                                          // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Collider;                                                // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcessUnderwater;                                   // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       PostprocessBox;                                          // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     PostProcessAnchor;                                       // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Plane_Water_Prototype;                                // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInterface*                                  WaterSourceMaterial;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  WaterSourceMaterial_NoSpec;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            WaterMID;                                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterScaleX;                                             // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterScaleY;                                             // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wave_Intensity;                                          // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wave_Intensity_Small;                                    // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaveLarge_Small_Ratio;                                   // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wave_Scale;                                              // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wave_Scale_Small;                                        // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wave_Speed;                                              // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wave_Speed_Small;                                        // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Normal_Fade_Distance;                                    // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Normal_Fade_Distance_Intensity;                          // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Min_Opacity_Above;                                       // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Min_Opacity_Below;                                       // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Depth_Fade_Large_Intensity;                              // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Depth_Fade_Large_Size;                                   // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Opacity_Fade_Distance;                                   // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IOR;                                                     // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E629[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         ConsumableDataDirtyWaterA;                               // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        WaterColorFar;                                           // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        WaterColorNear;                                          // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostProcessWaterDepth;                                   // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_29RL[0x4];                                   // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   PostProcessMaterial;                                     // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PostProcessMID;                                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineWaveHeight;                                          // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineWaveTile;                                            // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineWaveSpeed;                                           // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineHeight;                                              // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineThickness;                                           // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnderwaterBlend;                                         // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnderwaterHeight;                                        // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UnderwaterColorTint;                                     // 0x05F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        WaterlineColorTint;                                      // 0x0604(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverallDistortionStrength;                               // 0x0614(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CenterDistortionStrength;                                // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScreenOffset;                                            // 0x061C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Refraction_Fade_Depth;                                   // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      World_Position_Offset_Multiplier;                        // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Water_Edge_Normal_Size;                                  // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Water_Edge_Normal_Strength;                              // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NeedsTrigger;                                            // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PDMP[0x3];                                   // 0x0639(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          ScoopInteractionText;                                    // 0x063C(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          ManualInteractionText;                                   // 0x064C(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      WaterEdgeFadeSize;                                       // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Specular;                                                // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Glancing_CubeMap_Suppresion;                             // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GCS_Power;                                               // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GCS_Exp;                                                 // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Has_Specular_Highlight;                                  // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_318Z[0x3];                                   // 0x0671(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        PowerType;                                               // 0x0674(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4810[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConversationReference                              BurgleBadWater;                                          // 0x0680(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Specular_Size;                                           // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Specular_Intensity;                                      // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OverlappedActor;                                         // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Texture_Scale;                                           // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Texture_Speed;                                           // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FDataTableRowHandle>                         ConsumableDataDirtyWaterB;                               // 0x06B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FDataTableRowHandle>                         ConsumableDataDirtyWaterC;                               // 0x06C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		EInteractionType GetOverrideInteractIcon(class AActor* InstigatedBy);
		int32_t GetRequiredItemCount(EInteractionChannel Channel, class AActor* InstigatedBy);
		bool HideHUDCursorWhenInRange();
		void UpdateInteractionPosition(class AActor* InstigatedBy);
		struct FDataTableRowHandle GetRequiredItem(EInteractionChannel Channel, class AActor* InstigatedBy);
		void GetInteractableName(class FString* OutText);
		EInteractHighlightLevel GetInteractHighlightLevel(class AActor* InstigatedBy);
		EInteractAnimType GetInteractHoldAnimType(EInteractionChannel Channel, class AActor* InstigatedBy);
		bool IsLockingAnim();
		float GetOverrideInteractionTime(EInteractionChannel Channel, class AActor* InstigatedBy);
		class UAnimMontage* GetCustomInteractAnim(EInteractionChannel Channel, class AActor* InstigatedBy);
		EInteractAnimType GetInteractableAnimType(EInteractionChannel Channel, class AActor* InstigatedBy);
		EInteractionPriority GetInteractionPriority(EInteractionChannel Channel, class AActor* InstigatedBy);
		class UClass* GetInteractableAnimProp(EInteractionChannel Channel, class AActor* InstigatedBy);
		EInteractionType GetInteractionType(EInteractionChannel Channel, class AActor* InstigatedBy);
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		void ApplyDirtyWaterEffect(class AActor* Instigator);
		void UserConstructionScript();
		void Interact(EInteractionChannel Channel, class AActor* InstigatedBy);
		void EndInteraction(class AActor* InstigatedBy);
		void EndInteractHold(class AActor* InstigatedBy, EInteractHoldHandleType HoldInteractType);
		void BeginInteractHold(class AActor* InstigatedBy);
		void SetupNativeReferences();
		void ExecuteUbergraph_BP_Water_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
