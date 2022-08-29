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
	 * Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ExitPhotoMode
	 */
	struct ABP_FreeCamPhotoPawn_C_ExitPhotoMode_Params
	{	};

	/**
	 * Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.BrowsePhotos
	 */
	struct ABP_FreeCamPhotoPawn_C_BrowsePhotos_Params
	{	};

	/**
	 * Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ChangeCameraType
	 */
	struct ABP_FreeCamPhotoPawn_C_ChangeCameraType_Params
	{	};

	/**
	 * Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ExecuteUbergraph_BP_FreeCamPhotoPawn
	 */
	struct ABP_FreeCamPhotoPawn_C_ExecuteUbergraph_BP_FreeCamPhotoPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FXTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
