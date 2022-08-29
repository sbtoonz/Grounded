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
	 * Function BP_CameraPhoto.BP_CameraPhoto_C.ReceiveBeginPlay
	 */
	struct ABP_CameraPhoto_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CameraPhoto.BP_CameraPhoto_C.SetTexture
	 */
	struct ABP_CameraPhoto_C_SetTexture_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraPhoto.BP_CameraPhoto_C.ExecuteUbergraph_BP_CameraPhoto
	 */
	struct ABP_CameraPhoto_C_ExecuteUbergraph_BP_CameraPhoto_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EXMR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
