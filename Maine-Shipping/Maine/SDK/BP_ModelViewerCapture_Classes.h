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
	 * BlueprintGeneratedClass BP_ModelViewerCapture.BP_ModelViewerCapture_C
	 * Size -> 0x00BC (FullSize[0x030C] - InheritedSize[0x0250])
	 */
	class ABP_ModelViewerCapture_C : public AModelViewerCapture
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPointLightComponent*                                TopLight;                                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight2;                                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight1;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     LightOffset;                                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2DColor;                            // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2DAlpha;                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Offset;                                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class USceneCaptureComponent2D*>                    SceneCaptureComponents;                                  // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AActor*                                              TempViewingModel;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ExistingViewingModel;                                    // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoRotate;                                              // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Orthographic;                                            // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5XX[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ViewOffset;                                              // 0x02C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ModelViewer_C*                                   SourceUIModelViewer;                                     // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RequiresLightChannelChanges;                             // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDLW[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         ArmorDummyMesh;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         AphidPetMesh;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNewModelViewed;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             DefaultActorSpawnLocation;                               // 0x0300(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateCaptureSource();
		void RemoveFilmGrain();
		void GetModel(class AActor** Model);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Setup(class UTextureRenderTarget2D* ColorRenderTarget, class UTextureRenderTarget2D* AlphaRenderTarget);
		void ViewExistingActor(class AActor* Actor, const struct FVector& Offset);
		void ReceiveDestroyed();
		void AddRotationSelf(const struct FVector2D& UIRotation, bool DisableAutoRotate);
		void AddRotationModel(const struct FVector2D& UIRotation);
		void ForceSetOrthoWidth(float OrthoWidth);
		void AddRotationDegrees(float RotationX, float RotationY);
		void SetOrthographicWidth(float OrthoWidth);
		void HandleSceneCapture();
		void SetChannelLightingEnabled(bool Active);
		void ClearModel();
		void UpdateAndCaptureScene(float DeltaSeconds);
		void SetLightScalar(float LightScalar);
		void ShowOverheadSpotlight();
		void HandlePaperdollEquipmentVisibility2(class UEquipmentComponent* Sender, class UItem* ForItem);
		void HandlePaperdollEquipmentVisibility();
		void Cleanup();
		void ViewBlueprint(class UClass* BlueprintClass, float Scale, const struct FVector& Offset);
		void ViewSkeletalMesh(class USkeletalMesh* Mesh, TArray<class UMaterialInterface*> Materials, float Scale, const struct FVector& Offset);
		void ViewStaticMesh(class UStaticMesh* Mesh, TArray<class UMaterialInterface*> Materials, float Scale, const struct FVector& Offset);
		void ViewArmorMesh(class USkeletalMesh* Mesh, TArray<class UMaterialInterface*> Materials, float Scale, const struct FVector& Offset, EEquipmentSlot Slot, bool bUsePet);
		void SetShowSkyLight(bool bShow);
		void View2DTexture(class UTexture* Texture);
		void ExecuteUbergraph_BP_ModelViewerCapture(int32_t EntryPoint);
		void OnNewModelViewed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
