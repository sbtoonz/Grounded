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
	 * 		Name   -> Function BP_ModelViewModel.BP_ModelViewModel_C.GetSkeletalMeshBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Bounds                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewModel_C::GetSkeletalMeshBounds(struct FVector* Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewModel.BP_ModelViewModel_C.GetSkeletalMeshBounds");
		
		ABP_ModelViewModel_C_GetSkeletalMeshBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bounds != nullptr)
			*Bounds = params.Bounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewModel.BP_ModelViewModel_C.GetMeshBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BoundsMin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewModel_C::GetMeshBounds(struct FVector* BoundsMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewModel.BP_ModelViewModel_C.GetMeshBounds");
		
		ABP_ModelViewModel_C_GetMeshBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoundsMin != nullptr)
			*BoundsMin = params.BoundsMin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewModel.BP_ModelViewModel_C.SetStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 StaticMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CenterMeshAtRotationOrigin                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModelViewModel_C::SetStaticMesh(class UStaticMesh* StaticMesh, TArray<class UMaterialInterface*> Materials, bool CenterMeshAtRotationOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewModel.BP_ModelViewModel_C.SetStaticMesh");
		
		ABP_ModelViewModel_C_SetStaticMesh_Params params {};
		params.StaticMesh = StaticMesh;
		params.Materials = Materials;
		params.CenterMeshAtRotationOrigin = CenterMeshAtRotationOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewModel.BP_ModelViewModel_C.SetSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CenterMeshAtRotationOrigin                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModelViewModel_C::SetSkeletalMesh(class USkeletalMesh* SkeletalMesh, TArray<class UMaterialInterface*> Materials, bool CenterMeshAtRotationOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewModel.BP_ModelViewModel_C.SetSkeletalMesh");
		
		ABP_ModelViewModel_C_SetSkeletalMesh_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.Materials = Materials;
		params.CenterMeshAtRotationOrigin = CenterMeshAtRotationOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewModel.BP_ModelViewModel_C.AddChildMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewModel_C::AddChildMesh(class USkeletalMesh* SkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewModel.BP_ModelViewModel_C.AddChildMesh");
		
		ABP_ModelViewModel_C_AddChildMesh_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModelViewModel.BP_ModelViewModel_C.ExecuteUbergraph_BP_ModelViewModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModelViewModel_C::ExecuteUbergraph_BP_ModelViewModel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModelViewModel.BP_ModelViewModel_C.ExecuteUbergraph_BP_ModelViewModel");
		
		ABP_ModelViewModel_C_ExecuteUbergraph_BP_ModelViewModel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ModelViewModel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ModelViewModel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModelViewModel.BP_ModelViewModel_C");
		return ptr;
	}

}


