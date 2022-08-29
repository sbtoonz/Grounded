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
	 * Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.GetLookAtLocation
	 */
	struct ABP_Base_PetWatchCameraRig_C_GetLookAtLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.HasLookAtLocation
	 */
	struct ABP_Base_PetWatchCameraRig_C_HasLookAtLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.GetCameraViewTransform
	 */
	struct ABP_Base_PetWatchCameraRig_C_GetCameraViewTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
