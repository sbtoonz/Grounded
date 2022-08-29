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
	 * Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.Construct
	 */
	struct UUI_ConnectedStorageInfo_C_Construct_Params
	{	};

	/**
	 * Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.OnGlobalColorChange
	 */
	struct UUI_ConnectedStorageInfo_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.ExecuteUbergraph_UI_ConnectedStorageInfo
	 */
	struct UUI_ConnectedStorageInfo_C_ExecuteUbergraph_UI_ConnectedStorageInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DDV3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
