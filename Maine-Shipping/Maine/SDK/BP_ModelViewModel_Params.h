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
	 * Function BP_ModelViewModel.BP_ModelViewModel_C.GetSkeletalMeshBounds
	 */
	struct ABP_ModelViewModel_C_GetSkeletalMeshBounds_Params
	{
	public:
		struct FVector                                             Bounds;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewModel.BP_ModelViewModel_C.GetMeshBounds
	 */
	struct ABP_ModelViewModel_C_GetMeshBounds_Params
	{
	public:
		struct FVector                                             BoundsMin;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewModel.BP_ModelViewModel_C.SetStaticMesh
	 */
	struct ABP_ModelViewModel_C_SetStaticMesh_Params
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CenterMeshAtRotationOrigin;                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModelViewModel.BP_ModelViewModel_C.SetSkeletalMesh
	 */
	struct ABP_ModelViewModel_C_SetSkeletalMesh_Params
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CenterMeshAtRotationOrigin;                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModelViewModel.BP_ModelViewModel_C.AddChildMesh
	 */
	struct ABP_ModelViewModel_C_AddChildMesh_Params
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModelViewModel.BP_ModelViewModel_C.ExecuteUbergraph_BP_ModelViewModel
	 */
	struct ABP_ModelViewModel_C_ExecuteUbergraph_BP_ModelViewModel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
