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
	 * BlueprintGeneratedClass BP_Water_Large.BP_Water_Large_C
	 * Size -> 0x00D1 (FullSize[0x07A9] - InheritedSize[0x06D8])
	 */
	class ABP_Water_Large_C : public ABP_Water_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                Plane;                                                   // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UNavModifierComponent*                               NavModifier;                                             // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_VolumeFog_Global_C*                              GlobalVolumeFog;                                         // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GlobalVolumeFogRef[0x28];                                // 0x06F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      OffsetMaskX;                                             // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OffsetMaskY;                                             // 0x0724(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScaleX;                                                  // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScaleY;                                                  // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_VolumeFog_C*>                             ScaledFogVolumes;                                        // 0x0730(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_TimeOfDayLighting_C*                             BP_TimeOfDay;                                            // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TimeOfDayRef[0x28];                                      // 0x0748(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       isPond;                                                  // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SwapCubemaps;                                            // 0x0771(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K5EY[0x2];                                   // 0x0772(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Local_Player_Cam_Z;                                      // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Fade_Start_Distance;                                     // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Caustics_Blend_Alpha;                                    // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sun_Multiplier;                                          // 0x0780(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Moon_Multiplier;                                         // 0x0784(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TickCaustics;                                            // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UPM4[0x3];                                   // 0x0789(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnParticleCeiling;                                    // 0x078C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnParticleFloor;                                      // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasUnderWaterBeforePhotoMode;                            // 0x0794(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KI1W[0x3];                                   // 0x0795(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ScaledFogVolumeRefs[0x10];                               // 0x0798(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       Initialized;                                             // 0x07A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Initialize();
		void SetWaterParticlesInPlayerComponent(bool InWater, float SpawnParticleCeiling, float SpawnParticleFloor);
		void UserConstructionScript();
		void HandleEndOverlapRespawn(class APlayerController* Controller);
		void BndEvt__Collider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Collider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void BndEvt__ColliderCamera_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__ColliderCamera_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnPhotoModeExitedEvent();
		void OnPhotoModePreEntered(class APlayerController* PlayerController);
		void ExecuteUbergraph_BP_Water_Large(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
