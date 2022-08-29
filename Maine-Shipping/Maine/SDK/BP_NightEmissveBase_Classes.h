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
	 * BlueprintGeneratedClass BP_NightEmissveBase.BP_NightEmissveBase_C
	 * Size -> 0x00E0 (FullSize[0x0310] - InheritedSize[0x0230])
	 */
	class ABP_NightEmissveBase_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     Root;                                                    // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_GardenLamp_OnOff_LightCurve_567D743F47CF9C1CEB34A19B7DA54431; // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_GardenLamp_OnOff__Direction_567D743F47CF9C1CEB34A19B7DA54431; // 0x0244(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_29RQ[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_GardenLamp_OnOff;                                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_SurvivalGameState_C*                             GameState;                                               // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    EmissiveMIDs;                                            // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstanceDynamic*>                    LightConeMIDs;                                           // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LightAttenuationRadius;                                  // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity;                                          // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightConeIntensity;                                      // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlowIntensity;                                           // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LightToggle;                                             // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LightSwitch;                                             // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_96RU[0x2];                                   // 0x028A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TransitionHourA;                                         // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TransitionHourB;                                         // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BR8W[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        DynamicMeshArray;                                        // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USpotLightComponent*>                         SpotlightArray;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UStaticMeshComponent*>                        LightConeArray;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FLinearColor                                        GlowColor01;                                             // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlowColor02;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinStaggerDelay;                                         // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxStaggerDelay;                                         // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasSpotlight;                                            // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasLightCone;                                            // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWO6[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     LightConeScales;                                         // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_TimeOfDayLighting_C*                             TimeOfDayLighting;                                       // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetPhotoModeTickDelegates();
		void Find_Time_Of_Day_Manager();
		void InitializeLightToggle();
		void Toggle_Lamp_Internal(float LightCurve);
		void RegisterLightCone(class UStaticMeshComponent* StaticMeshComponent);
		void RegisterSpotlight(class USpotLightComponent* SpotLightComponent);
		void RegisterGlowMesh(class UStaticMeshComponent* StaticMeshComponent);
		void ToggleInEditMode(class ABP_TimeOfDayLighting_C* TimeOfDay, bool LightSwitch);
		void UserConstructionScript();
		void TL_GardenLamp_OnOff__FinishedFunc();
		void TL_GardenLamp_OnOff__UpdateFunc();
		void ReceiveBeginPlay();
		void Toggle_GardenLamp(int32_t NewHour, int32_t NewDay);
		void ReceiveTick(float DeltaSeconds);
		void OnPhotoModeExited();
		void UpdatePhotoModeTimeOfDay();
		void PhotoModeEnterEnableTick(class APhotoPawn* PhotoPawn);
		void PhotoModeExitDisableTick();
		void ExecuteUbergraph_BP_NightEmissveBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
