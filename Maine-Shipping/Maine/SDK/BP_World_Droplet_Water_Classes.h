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
	 * BlueprintGeneratedClass BP_World_Droplet_Water.BP_World_Droplet_Water_C
	 * Size -> 0x0098 (FullSize[0x05E8] - InheritedSize[0x0550])
	 */
	class ABP_World_Droplet_Water_C : public ASpawnedItemDroplet
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAttractionComponent*                                Attraction;                                              // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPhysicsConstraintComponent*                         PhysicsConstraint;                                       // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USphereComponent*                                    WorldCollider;                                           // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_DewDrop;                                              // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      bumpWobble_Strength_D63F476343887CA3C8713A975E305B4B;    // 0x0578(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      bumpWobble_Speed_D63F476343887CA3C8713A975E305B4B;       // 0x057C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         bumpWobble__Direction_D63F476343887CA3C8713A975E305B4B;  // 0x0580(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3HW2[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  bumpWobble;                                              // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      wobbleStrength;                                          // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WobblePreviousVelocity;                                  // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            M_Inst_Droplet;                                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             combinedSphereScale;                                     // 0x05A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSeconds;                                            // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_RT_Capture_Add;                                      // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OtherActor;                                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          DrinkInteractionText;                                    // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          ScoopInteractionText;                                    // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		void DoAbsorbActor();
		void PlayWobbleContact();
		void DoDropletMergeIn(class ASpawnedItemDroplet* Other);
		void Play_VFX_Contact(const struct FVector& Scale, const struct FVector& Location);
		void Play_SFX_Contact();
		void Get_UV_Coords(const struct FVector& Object_Position_WS, struct FVector* UV_Grid, struct FVector* UV_Segment);
		void bumpWobble__FinishedFunc();
		void bumpWobble__UpdateFunc();
		void On_Droplet_Merge_In(class ASpawnedItemDroplet* Other);
		void On_Absorb_Actor(class AActor* Actor);
		void NotifySwapped(bool bFromDamage);
		void DrawAtLocation();
		void ReceiveBeginPlay();
		void PlayBumpWobble();
		void PlayContactEffects(const struct FVector& Offset);
		void ExecuteUbergraph_BP_World_Droplet_Water(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
