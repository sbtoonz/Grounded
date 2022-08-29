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
	 * BlueprintGeneratedClass BP_Button_Switch_Base.BP_Button_Switch_Base_C
	 * Size -> 0x0078 (FullSize[0x0300] - InheritedSize[0x0288])
	 */
	class ABP_Button_Switch_Base_C : public ASwitch
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                ButtonMesh;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ButtonAnimationTimeline_Driver_706794914E7651E5C9DB58899377931D; // 0x02A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         ButtonAnimationTimeline__Direction_706794914E7651E5C9DB58899377931D; // 0x02A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6JNU[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ButtonAnimationTimeline;                                 // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      LightTimeline_Driver_90BABA7A4D1801437BC991A3CFB652BF;   // 0x02B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         LightTimeline__Direction_90BABA7A4D1801437BC991A3CFB652BF; // 0x02B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y2PW[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LightTimeline;                                           // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FLinearColor                                        OnLightColor;                                            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OffLightColor;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseBaseVisualUpdate;                                     // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseBaseLightVisualUpdate;                                // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W2X2[0x2];                                   // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialButtonLocationVector;                             // 0x02E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ButtonDMI_SourceMaterial;                                // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ButtonDMI_VectorParameterName;                           // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ButtonAnimationTimeline__FinishedFunc();
		void ButtonAnimationTimeline__UpdateFunc();
		void LightTimeline__FinishedFunc();
		void LightTimeline__UpdateFunc();
		void OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator);
		void ImplementableOnLightTimelineFinished(ETimelineDirection TimelineDirection);
		void OnUpdateVisualState(bool IsOpen);
		void ExecuteUbergraph_BP_Button_Switch_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
