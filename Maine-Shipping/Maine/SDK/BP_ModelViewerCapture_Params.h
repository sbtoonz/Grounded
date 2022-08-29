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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UpdateCaptureSource
	 */
	struct ABP_ModelViewerCapture_C_UpdateCaptureSource_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.RemoveFilmGrain
	 */
	struct ABP_ModelViewerCapture_C_RemoveFilmGrain_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.GetModel
	 */
	struct ABP_ModelViewerCapture_C_GetModel_Params
	{
	public:
		class AActor*                                              Model;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UserConstructionScript
	 */
	struct ABP_ModelViewerCapture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ReceiveBeginPlay
	 */
	struct ABP_ModelViewerCapture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.Setup
	 */
	struct ABP_ModelViewerCapture_C_Setup_Params
	{
	public:
		class UTextureRenderTarget2D*                              ColorRenderTarget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              AlphaRenderTarget;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewExistingActor
	 */
	struct ABP_ModelViewerCapture_C_ViewExistingActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ReceiveDestroyed
	 */
	struct ABP_ModelViewerCapture_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationSelf
	 */
	struct ABP_ModelViewerCapture_C_AddRotationSelf_Params
	{
	public:
		struct FVector2D                                           UIRotation;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DisableAutoRotate;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationModel
	 */
	struct ABP_ModelViewerCapture_C_AddRotationModel_Params
	{
	public:
		struct FVector2D                                           UIRotation;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ForceSetOrthoWidth
	 */
	struct ABP_ModelViewerCapture_C_ForceSetOrthoWidth_Params
	{
	public:
		float                                                      OrthoWidth;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationDegrees
	 */
	struct ABP_ModelViewerCapture_C_AddRotationDegrees_Params
	{
	public:
		float                                                      RotationX;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotationY;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetOrthographicWidth
	 */
	struct ABP_ModelViewerCapture_C_SetOrthographicWidth_Params
	{
	public:
		float                                                      OrthoWidth;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandleSceneCapture
	 */
	struct ABP_ModelViewerCapture_C_HandleSceneCapture_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetChannelLightingEnabled
	 */
	struct ABP_ModelViewerCapture_C_SetChannelLightingEnabled_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ClearModel
	 */
	struct ABP_ModelViewerCapture_C_ClearModel_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UpdateAndCaptureScene
	 */
	struct ABP_ModelViewerCapture_C_UpdateAndCaptureScene_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetLightScalar
	 */
	struct ABP_ModelViewerCapture_C_SetLightScalar_Params
	{
	public:
		float                                                      LightScalar;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ShowOverheadSpotlight
	 */
	struct ABP_ModelViewerCapture_C_ShowOverheadSpotlight_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandlePaperdollEquipmentVisibility2
	 */
	struct ABP_ModelViewerCapture_C_HandlePaperdollEquipmentVisibility2_Params
	{
	public:
		class UEquipmentComponent*                                 Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               ForItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandlePaperdollEquipmentVisibility
	 */
	struct ABP_ModelViewerCapture_C_HandlePaperdollEquipmentVisibility_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.Cleanup
	 */
	struct ABP_ModelViewerCapture_C_Cleanup_Params
	{	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewBlueprint
	 */
	struct ABP_ModelViewerCapture_C_ViewBlueprint_Params
	{
	public:
		class UClass*                                              BlueprintClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewSkeletalMesh
	 */
	struct ABP_ModelViewerCapture_C_ViewSkeletalMesh_Params
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewStaticMesh
	 */
	struct ABP_ModelViewerCapture_C_ViewStaticMesh_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewArmorMesh
	 */
	struct ABP_ModelViewerCapture_C_ViewArmorMesh_Params
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEquipmentSlot                                             Slot;                                                    // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUsePet;                                                 // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetShowSkyLight
	 */
	struct ABP_ModelViewerCapture_C_SetShowSkyLight_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.View2DTexture
	 */
	struct ABP_ModelViewerCapture_C_View2DTexture_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ExecuteUbergraph_BP_ModelViewerCapture
	 */
	struct ABP_ModelViewerCapture_C_ExecuteUbergraph_BP_ModelViewerCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C8BJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.OnNewModelViewed__DelegateSignature
	 */
	struct ABP_ModelViewerCapture_C_OnNewModelViewed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
