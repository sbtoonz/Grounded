/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UpdateCaptureSource
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::UpdateCaptureSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UpdateCaptureSource");
		
		ABP_ModelViewerCapture_C_UpdateCaptureSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.RemoveFilmGrain
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::RemoveFilmGrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.RemoveFilmGrain");
		
		ABP_ModelViewerCapture_C_RemoveFilmGrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.GetModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Model                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::GetModel(class AActor** Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.GetModel");
		
		ABP_ModelViewerCapture_C_GetModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Model != nullptr)
			*Model = params.Model;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UserConstructionScript");
		
		ABP_ModelViewerCapture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ReceiveBeginPlay");
		
		ABP_ModelViewerCapture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      ColorRenderTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      AlphaRenderTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::Setup(class UTextureRenderTarget2D* ColorRenderTarget, class UTextureRenderTarget2D* AlphaRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.Setup");
		
		ABP_ModelViewerCapture_C_Setup_Params params {};
		params.ColorRenderTarget = ColorRenderTarget;
		params.AlphaRenderTarget = AlphaRenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewExistingActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::ViewExistingActor(class AActor* Actor, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewExistingActor");
		
		ABP_ModelViewerCapture_C_ViewExistingActor_Params params {};
		params.Actor = Actor;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ReceiveDestroyed");
		
		ABP_ModelViewerCapture_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   UIRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DisableAutoRotate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModelViewerCapture_C::AddRotationSelf(const struct FVector2D& UIRotation, bool DisableAutoRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationSelf");
		
		ABP_ModelViewerCapture_C_AddRotationSelf_Params params {};
		params.UIRotation = UIRotation;
		params.DisableAutoRotate = DisableAutoRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   UIRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::AddRotationModel(const struct FVector2D& UIRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationModel");
		
		ABP_ModelViewerCapture_C_AddRotationModel_Params params {};
		params.UIRotation = UIRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ForceSetOrthoWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OrthoWidth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::ForceSetOrthoWidth(float OrthoWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ForceSetOrthoWidth");
		
		ABP_ModelViewerCapture_C_ForceSetOrthoWidth_Params params {};
		params.OrthoWidth = OrthoWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationDegrees
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotationX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::AddRotationDegrees(float RotationX, float RotationY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.AddRotationDegrees");
		
		ABP_ModelViewerCapture_C_AddRotationDegrees_Params params {};
		params.RotationX = RotationX;
		params.RotationY = RotationY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetOrthographicWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OrthoWidth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::SetOrthographicWidth(float OrthoWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetOrthographicWidth");
		
		ABP_ModelViewerCapture_C_SetOrthographicWidth_Params params {};
		params.OrthoWidth = OrthoWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandleSceneCapture
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::HandleSceneCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandleSceneCapture");
		
		ABP_ModelViewerCapture_C_HandleSceneCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetChannelLightingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModelViewerCapture_C::SetChannelLightingEnabled(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetChannelLightingEnabled");
		
		ABP_ModelViewerCapture_C_SetChannelLightingEnabled_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ClearModel
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::ClearModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ClearModel");
		
		ABP_ModelViewerCapture_C_ClearModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UpdateAndCaptureScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::UpdateAndCaptureScene(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.UpdateAndCaptureScene");
		
		ABP_ModelViewerCapture_C_UpdateAndCaptureScene_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetLightScalar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LightScalar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::SetLightScalar(float LightScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetLightScalar");
		
		ABP_ModelViewerCapture_C_SetLightScalar_Params params {};
		params.LightScalar = LightScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ShowOverheadSpotlight
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::ShowOverheadSpotlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ShowOverheadSpotlight");
		
		ABP_ModelViewerCapture_C_ShowOverheadSpotlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandlePaperdollEquipmentVisibility2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquipmentComponent*                         Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       ForItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::HandlePaperdollEquipmentVisibility2(class UEquipmentComponent* Sender, class UItem* ForItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandlePaperdollEquipmentVisibility2");
		
		ABP_ModelViewerCapture_C_HandlePaperdollEquipmentVisibility2_Params params {};
		params.Sender = Sender;
		params.ForItem = ForItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandlePaperdollEquipmentVisibility
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::HandlePaperdollEquipmentVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.HandlePaperdollEquipmentVisibility");
		
		ABP_ModelViewerCapture_C_HandlePaperdollEquipmentVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.Cleanup
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.Cleanup");
		
		ABP_ModelViewerCapture_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      BlueprintClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::ViewBlueprint(class UClass* BlueprintClass, float Scale, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewBlueprint");
		
		ABP_ModelViewerCapture_C_ViewBlueprint_Params params {};
		params.BlueprintClass = BlueprintClass;
		params.Scale = Scale;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::ViewSkeletalMesh(class USkeletalMesh* Mesh, TArray<class UMaterialInterface*> Materials, float Scale, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewSkeletalMesh");
		
		ABP_ModelViewerCapture_C_ViewSkeletalMesh_Params params {};
		params.Mesh = Mesh;
		params.Materials = Materials;
		params.Scale = Scale;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::ViewStaticMesh(class UStaticMesh* Mesh, TArray<class UMaterialInterface*> Materials, float Scale, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewStaticMesh");
		
		ABP_ModelViewerCapture_C_ViewStaticMesh_Params params {};
		params.Mesh = Mesh;
		params.Materials = Materials;
		params.Scale = Scale;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewArmorMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEquipmentSlot                                     Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUsePet                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModelViewerCapture_C::ViewArmorMesh(class USkeletalMesh* Mesh, TArray<class UMaterialInterface*> Materials, float Scale, const struct FVector& Offset, EEquipmentSlot Slot, bool bUsePet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ViewArmorMesh");
		
		ABP_ModelViewerCapture_C_ViewArmorMesh_Params params {};
		params.Mesh = Mesh;
		params.Materials = Materials;
		params.Scale = Scale;
		params.Offset = Offset;
		params.Slot = Slot;
		params.bUsePet = bUsePet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetShowSkyLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModelViewerCapture_C::SetShowSkyLight(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.SetShowSkyLight");
		
		ABP_ModelViewerCapture_C_SetShowSkyLight_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.View2DTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::View2DTexture(class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.View2DTexture");
		
		ABP_ModelViewerCapture_C_View2DTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ExecuteUbergraph_BP_ModelViewerCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewerCapture_C::ExecuteUbergraph_BP_ModelViewerCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.ExecuteUbergraph_BP_ModelViewerCapture");
		
		ABP_ModelViewerCapture_C_ExecuteUbergraph_BP_ModelViewerCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.OnNewModelViewed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ModelViewerCapture_C::OnNewModelViewed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewerCapture.BP_ModelViewerCapture_C.OnNewModelViewed__DelegateSignature");
		
		ABP_ModelViewerCapture_C_OnNewModelViewed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ModelViewerCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ModelViewerCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModelViewerCapture.BP_ModelViewerCapture_C");
		return ptr;
	}

}


