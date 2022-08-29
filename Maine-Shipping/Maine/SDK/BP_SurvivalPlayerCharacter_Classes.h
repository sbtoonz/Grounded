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
	 * BlueprintGeneratedClass BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C
	 * Size -> 0x0230 (FullSize[0x17F0] - InheritedSize[0x15C0])
	 */
	class ABP_SurvivalPlayerCharacter_C : public ASurvivalPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x15C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     FPCOverlayRoot;                                          // 0x15C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBreathePointComponent*                              BreathePoint;                                            // 0x15D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UFoliageDisplacerComponent*                          FoliageDisplacer;                                        // 0x15D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                CameraOverlapObject;                                     // 0x15E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     CameraColliderOffset;                                    // 0x15E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBP_AttachedParticlesComponent_C*                    BP_AttachedParticlesComponent_Feet;                      // 0x15F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAuraEmitterComponent*                               PlayerCountAuraEmitter;                                  // 0x15F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBP_AttachedParticlesComponent_C*                    BP_AttachedParticlesComponent;                           // 0x1600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UTransmissionReceiverComponent*                      TransmissionReceiver;                                    // 0x1608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPointLightComponent*                                SCAB_Light;                                              // 0x1610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_SCAB;                                                 // 0x1618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_BackPack;                                             // 0x1620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_head;                                                 // 0x1628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      StarvationSFX_Reverb_Send_Level_AEC6216147075165AA48AE91DC5BE7E2; // 0x1630(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         StarvationSFX__Direction_AEC6216147075165AA48AE91DC5BE7E2; // 0x1634(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DZ6G[0x3];                                   // 0x1635(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  StarvationSFX;                                           // 0x1638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      HeartbeatSFX_Mod_Volume_Float_359BC16C496E6A2A6A9DD0A97D593E96; // 0x1640(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      HeartbeatSFX_Mod_Pitch_Float_359BC16C496E6A2A6A9DD0A97D593E96; // 0x1644(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         HeartbeatSFX_Mod__Direction_359BC16C496E6A2A6A9DD0A97D593E96; // 0x1648(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3WDD[0x7];                                   // 0x1649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeartbeatSFX_Mod;                                        // 0x1650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         FallingVelocity__Direction_47CA1C714C97243CFEB88A9A63957BBA; // 0x1658(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_209N[0x7];                                   // 0x1659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FallingVelocity;                                         // 0x1660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      BinoZoom_zoom_46529F67486DB7B9C9DA018D50AA8548;          // 0x1668(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         BinoZoom__Direction_46529F67486DB7B9C9DA018D50AA8548;    // 0x166C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DPUO[0x3];                                   // 0x166D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BinoZoom;                                                // 0x1670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      RespawnCorpseVisuals_Offset_F12FB58F44ED1D3FA592C192A07ADECD; // 0x1678(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         RespawnCorpseVisuals__Direction_F12FB58F44ED1D3FA592C192A07ADECD; // 0x167C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZEHD[0x3];                                   // 0x167D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RespawnCorpseVisuals;                                    // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemEquipped;                                          // 0x1688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       RequireSCABForSCABUI;                                    // 0x1698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZKKT[0x7];                                   // 0x1699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCalendarComponent*                                  Calendar;                                                // 0x16A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x16A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TraceLengthMax;                                          // 0x16B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SR84[0x4];                                   // 0x16BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_TimeOfDayLighting_C*                             TimeOfDay;                                               // 0x16C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdaptDOFNearLimit;                                       // 0x16C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DepthBlurRadiusMax;                                      // 0x16CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DepthBlurRadiusMin;                                      // 0x16D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UpdateDOFTickrate;                                       // 0x16D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              ChromaticAberrationIntensities;                          // 0x16D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        UpdateDOFTimer;                                          // 0x16E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x16F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CL9Y[0x4];                                   // 0x16F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UpdateDepthOfField;                                      // 0x16F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector                                             PreDestroyMeshOffset;                                    // 0x1708(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTraceLength;                                      // 0x1714(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PositionLastFrame;                                       // 0x1718(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HTN[0x4];                                   // 0x1724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Grapple_Point_C*                                 ActiveGrapplePoint;                                      // 0x1728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerVelocity;                                          // 0x1730(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XFJZ[0x4];                                   // 0x1734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConversationReference                              ChatWheelDialogue;                                       // 0x1738(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ACableActor*                                         grapple;                                                 // 0x1750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GrappleMode;                                             // 0x1758(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GrappleDistance;                                         // 0x175C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GrappleSwingDistance;                                    // 0x1760(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GrapplePullSpeed;                                        // 0x1764(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanGrappleWhileGrappling;                                // 0x1768(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSwinging;                                              // 0x1769(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisplayProjectilePath;                                   // 0x176A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_22WY[0x5];                                   // 0x176B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDebugCommandTriggered;                                 // 0x1770(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      RainTimer;                                               // 0x1780(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SubmergeSFXIntensity;                                    // 0x1784(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BreathTimer;                                             // 0x1788(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AudioStarvationTimerStart;                               // 0x178C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SwimHeartbeatTimeThreshold;                              // 0x1790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6VEC[0x4];                                   // 0x1794(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     HeartbeatSFX;                                            // 0x1798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GasMaskDefaultOffset;                                    // 0x17A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Cube1DefaultRelativeLocation;                            // 0x17A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Cube1ScreenLocation;                                     // 0x17B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SFX_LowStamina_Loop;                                     // 0x17B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Audio_Current_Stamina_Ratio;                             // 0x17C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0H9Z[0x4];                                   // 0x17C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpiderwebSticky[0x28];                                   // 0x17C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		class USkeletalMeshComponent* GetHeadMesh();
		EInteractHighlightLevel GetInteractHighlightLevel(class AActor* InstigatedBy);
		void ReattachCameraOverlapObj(ECameraDisplayMode DisplayMode);
		void DoesDamageTypeAllowsScreenEffects(class UClass* DamageTypeClass, bool* AllowsScreenEffects);
		void LineTraceByChannelForActor(class AActor** HitActor);
		void LineTraceForActor(TArray<EObjectTypeQuery>* ObjectTypes, class AActor** HitActor);
		void UserConstructionScript();
		void BinoZoom__FinishedFunc();
		void BinoZoom__UpdateFunc();
		void RespawnCorpseVisuals__FinishedFunc();
		void RespawnCorpseVisuals__UpdateFunc();
		void FallingVelocity__FinishedFunc();
		void FallingVelocity__UpdateFunc();
		void HeartbeatSFX_Mod__FinishedFunc();
		void HeartbeatSFX_Mod__UpdateFunc();
		void StarvationSFX__FinishedFunc();
		void StarvationSFX__UpdateFunc();
		void InpActEvt_Alt_P_K2Node_InputKeyEvent_26(const struct FKey& Key);
		void InpActEvt_Alt_O_K2Node_InputKeyEvent_25(const struct FKey& Key);
		void InpActEvt_Alt_T_K2Node_InputKeyEvent_24(const struct FKey& Key);
		void InpActEvt_Shift_T_K2Node_InputKeyEvent_23(const struct FKey& Key);
		void InpActEvt_Alt_G_K2Node_InputKeyEvent_22(const struct FKey& Key);
		void InpActEvt_Alt_Y_K2Node_InputKeyEvent_21(const struct FKey& Key);
		void InpActEvt_K_K2Node_InputKeyEvent_20(const struct FKey& Key);
		void InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19(const struct FKey& Key);
		void InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18(const struct FKey& Key);
		void InpActEvt_Alt_H_K2Node_InputKeyEvent_17(const struct FKey& Key);
		void InpActEvt_Alt_J_K2Node_InputKeyEvent_16(const struct FKey& Key);
		void InpActEvt_Alt_B_K2Node_InputKeyEvent_15(const struct FKey& Key);
		void InpActEvt_Alt_R_K2Node_InputKeyEvent_14(const struct FKey& Key);
		void InpActEvt_Alt_C_K2Node_InputKeyEvent_13(const struct FKey& Key);
		void InpActEvt_Alt_K_K2Node_InputKeyEvent_12(const struct FKey& Key);
		void InpActEvt_Alt_Z_K2Node_InputKeyEvent_11(const struct FKey& Key);
		void InpActEvt_Attack_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_Attack_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_X_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_Alt_L_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Alt_Q_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Alt_One_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Alt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Alt_Shift_L_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void OnLoaded_949C4F344484F3C2272BA28A79E47301(class UClass* Loaded);
		void InpActEvt_Alt_Three_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_UIOpenChat_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_HotSlot1_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_HotSlot2_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_HotSlot3_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_HotSlot4_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_HotSlot5_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_HotSlot6_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_HotSlot8_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_HotSlot7_K2Node_InputActionEvent_1(const struct FKey& Key);
		void PrototypeBeginPlay();
		void PrototypeTick(float DeltaTime);
		void FireflyLampCheck();
		void ProtoGrappleTick();
		void ProtoDestroyGrapple();
		void ProtoAttemptGrapple();
		void ProtoGrappleTick_Swing();
		void ProtoGrappleTick_Reel();
		void ProtoThrownProjectilePathTick();
		void ProtoArrowProjectilePathTick();
		void Rain(float Time);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow);
		void HandleDeath();
		void ClientHandleDamageEffects(class UClass* DamageType, const struct FVector& Direction);
		void HandleDamageTypeAudio(class UClass* DamageType, class UObject* DamageSource);
		void ClientHandleDeath();
		void HandleIncapacitation();
		void HandleRevive();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature(EHealthState NewHealthState);
		void ReceiveBeginPlay();
		void ReceivePossessed(class AController* NewController);
		void MulticastOnPossessed(class AController* Controller);
		void ToggleSCAB_Glow(int32_t NewHour, int32_t NewDay);
		void RequireSCABItemForSCABHUD();
		void HandleSCABVisibilityOnPlayerStart();
		void UpdateDOF();
		void ReceiveTick(float DeltaSeconds);
		void PlayDestroyVisuals(EDestroyCharacterVariation Variation);
		void BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature(class ASurvivalCharacter* Owner, class UItem* Item);
		void BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature();
		void ClientOpenMapMenu();
		void NotifyOnJumpAnimBegin();
		void NotifyOnLandAnimBegin();
		void NotifyOnHitReactAnimBegin();
		void MovementAudio(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
		void UpdateFOVCameraPlacement(float NewValue);
		void OnUIOpenChatPressed();
		void OnLanded(const struct FHitResult& Hit);
		void HandleCameraDisplayModeChanged(ECameraDisplayMode DisplayMode, float BlendTime);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature(bool bIsUnderwater);
		void SFXDrown();
		void MulticastPlayCharacterSound(const struct FGameplayTag& SoundTag, bool bAttached);
		void SFXStarvation();
		void OnControllerDisconnected();
		void BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature(class ABuilding* Building);
		void ExecuteUbergraph_BP_SurvivalPlayerCharacter(int32_t EntryPoint);
		void OnDebugCommandTriggered__DelegateSignature();
		void OnItemEquipped__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
