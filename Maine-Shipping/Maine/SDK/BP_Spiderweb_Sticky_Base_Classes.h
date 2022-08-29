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
	 * BlueprintGeneratedClass BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C
	 * Size -> 0x0461 (FullSize[0x07B9] - InheritedSize[0x0358])
	 */
	class ABP_Spiderweb_Sticky_Base_C : public ABP_StaticHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPhotoModeHelperComponent*                           PhotoModeHelper;                                         // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAttractionComponent*                                SpiderSleepAttraction;                                   // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClimbableSplineComponent*                           SleepClimbableSpline;                                    // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClimbableSplineComponent*                           EmergeClimbableSpline;                                   // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Saved_JNT_3_Spline;                                      // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Saved_JNT_2_Spline;                                      // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Saved_JNT_1_Spline;                                      // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Collision_JNT_4;                                         // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Collision_JNT_3;                                         // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Collision_JNT_2;                                         // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     Audio;                                                   // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SpiderWeb;                                               // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_0_NewTrack_0_9A274EA04A254B21B1D01CA93A6F0EBF; // 0x03C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0_0__Direction_9A274EA04A254B21B1D01CA93A6F0EBF; // 0x03CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2BF8[0x3];                                   // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_0_1;                                            // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_Animate_Attachment_Points_02CC6BB343A9C822134AE6AE4909EA30; // 0x03D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_02CC6BB343A9C822134AE6AE4909EA30;  // 0x03DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1I87[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_DissolveWeb_DissolveAmount_C83B48AD480FFD9CF6D495A642BADB5B; // 0x03E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_DissolveWeb__Direction_C83B48AD480FFD9CF6D495A642BADB5B; // 0x03EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UWL[0x3];                                   // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_DissolveWeb;                                          // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             EmitterStartOffset;                                      // 0x03F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UXL3[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASurvivalPlayerCharacter*                            overlappedPlayer;                                        // 0x0408(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     DestroyedEmitter;                                        // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmitterHeight;                                           // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmitterAngle;                                            // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            EmitterRotationOffset;                                   // 0x0420(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H1OX[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          JNT_center;                                              // 0x0430(0x0030) Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_Center_w_Sag;                                        // 0x0460(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_2;                                                   // 0x0490(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_3;                                                   // 0x04C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_4;                                                   // 0x04F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAB_DynamicSpiderWeb_C*                              Animation_BP;                                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDamageInfo                                         DamageInfo;                                              // 0x0528(0x0068) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FFloatSpringState                                   Rotation_Spring;                                         // 0x0590(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FFloatSpringState                                   Position_Spring;                                         // 0x0598(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      Pos_Wobble;                                              // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Ang_Wobble;                                              // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TargetRelativePosition;                                  // 0x05A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q0TK[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            WebScreenEffect;                                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedBlendable                                  WebBlendable;                                            // 0x05C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      BreakawayDistance;                                       // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousVectorLength;                                    // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WobbleIntensity;                                         // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I6SA[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     HitLocations_Previous;                                   // 0x05E0(0x0010) Edit, BlueprintVisible
		TArray<struct FVector>                                     HitLocations;                                            // 0x05F0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		TArray<struct FVector>                                     HitLocations_Temp;                                       // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             centerOfWeb;                                             // 0x0610(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             normalOfWeb;                                             // 0x061C(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SagDistance;                                             // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BS6E[0x4];                                   // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OverlappedActor;                                         // 0x0630(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   OverlappedActorCapsule;                                  // 0x0638(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             initialAttachPosition;                                   // 0x0640(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L5Z8[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    CurrentSpline;                                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Overlapped_SkeletalMesh;                                 // 0x0658(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectComponent*                              OverlappedStatusEffect;                                  // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffect*                                       WebStatusEffect;                                         // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaT;                                                  // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isAttached;                                              // 0x0674(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isLiveSession;                                           // 0x0675(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isSleepSpot;                                             // 0x0676(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isSleepSpotNormalFlipped;                                // 0x0677(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isBounceWeb;                                             // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasValidAttachPoints;                                    // 0x0679(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBreakingConnection;                                    // 0x067A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6A6B[0x1];                                   // 0x067B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             prevPawnVelocity;                                        // 0x067C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Damage_Emitter;                                          // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_Web;                                                 // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             JNT_1_Saved_Position;                                    // 0x0698(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             JNT_2_Saved_Position;                                    // 0x06A4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             JNT_3_Saved_Position;                                    // 0x06B0(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       has_Saved_Attach_Points;                                 // 0x06BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0NNH[0x3];                                   // 0x06BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         Overlapped_Movement_Component;                           // 0x06C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     FinalAttachmentPoints;                                   // 0x06C8(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		ECameraDisplayMode                                         SavedCameraDisplayMode;                                  // 0x06D8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_67BM[0x3];                                   // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetachmentThreshold;                                     // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DetachmentSound;                                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          AttachmentSound;                                         // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASurvivalCharacter*                                  OverlappedSurvivalCharacter;                             // 0x06F0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USplineComponent*>                            Attach_Point_Splines;                                    // 0x06F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              UnknownData_QM97[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_Prev;                                          // 0x0710(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class ABP_StickyWeb_Manager_C*                             BP_StickyWeb_Manager;                                    // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isSleepSpotForwardOffsetInverted;                        // 0x0748(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CM33[0x7];                                   // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     SleepSplinePoints;                                       // 0x0750(0x0010) Edit, BlueprintVisible
		TArray<struct FVector>                                     EmergeSplinePoints;                                      // 0x0760(0x0010) Edit, BlueprintVisible
		TArray<struct FVector>                                     SleepSplinePointTangents;                                // 0x0770(0x0010) Edit, BlueprintVisible
		TArray<struct FVector>                                     EmergeSplinePointTangents;                               // 0x0780(0x0010) Edit, BlueprintVisible
		TArray<struct FVector>                                     SleepSplinePointRotations;                               // 0x0790(0x0010) Edit, BlueprintVisible
		TArray<struct FVector>                                     EmergeSplinePointRotations;                              // 0x07A0(0x0010) Edit, BlueprintVisible
		int32_t                                                    SleepSpotFinalPointNormalOffset;                         // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SleepSpotFinalPointForwardOffset;                        // 0x07B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            ChannelToTrace;                                          // 0x07B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateNavigationSplines();
		void RemoveFromStickyWebArray();
		void AddToStickyWebArray();
		bool HasBlueprintInstanceData();
		void TransferBlueprintInstanceDataToProxy();
		void UpdateColliderTransforms();
		void StopAudio();
		void StartAudio();
		void OnRep_FinalAttachmentPoints();
		void Get_Average_Position(TArray<struct FVector>* Array, struct FVector* Average_Position);
		struct FTransform AddWobble(const struct FTransform& InTransform, const struct FVector& Offset_Location);
		void GetAttachmentPoints(const struct FTransform& SpawnPoint, TArray<struct FVector>* HitLocations, bool* Success);
		void UserConstructionScript();
		void TL_DissolveWeb__FinishedFunc();
		void TL_DissolveWeb__UpdateFunc();
		void Timeline_0_0__FinishedFunc();
		void Timeline_0_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void SetRandomPose();
		void BreakConstraint();
		void ToggleWebPostProcess(bool isAttached, class ASurvivalPlayerCharacter* overlappedPlayer);
		void StretchWebPostProcess(const struct FVector& PlayerToWebVector);
		void OnDestroyed_Event_1(class AActor* DestroyedActor);
		void Set_Saved_Pose();
		void Manual_Placement_Mode();
		void Random_Placement_Mode();
		void Set_Animation_BP();
		void Update_Corner_Attachments();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void BndEvt__Collision_JNT_1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Collision_JNT_2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Collision_JNT_3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void RestoreBlueprintInstanceDataToFullActor();
		void Update_Saved_Attachment_Positions();
		void Validate_Attachment_Points();
		void Cleanup();
		void Restore_Spline_Points();
		void Project_Sleep_Splines_Down();
		void ExecuteUbergraph_BP_Spiderweb_Sticky_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
