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
	 * Function UI_MapEntryBox.UI_MapEntryBox_C.GetEntryTypeName
	 */
	struct UUI_MapEntryBox_C_GetEntryTypeName_Params
	{
	public:
		EMapEntryType                                              EntryType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6RBY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLocString                                          EntryName;                                               // 0x0004(0x0010)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapEntryBox.UI_MapEntryBox_C.HideMapEntry
	 */
	struct UUI_MapEntryBox_C_HideMapEntry_Params
	{	};

	/**
	 * Function UI_MapEntryBox.UI_MapEntryBox_C.ShowMapEntry
	 */
	struct UUI_MapEntryBox_C_ShowMapEntry_Params
	{
	public:
		class UBaseMapEntryWidget*                                 MapEntry;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMapEntryType                                              EntryType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bViaMouseHover;                                          // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NQNQ[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MapEntryBox.UI_MapEntryBox_C.OnGlobalColorChange
	 */
	struct UUI_MapEntryBox_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MapEntryBox.UI_MapEntryBox_C.ExecuteUbergraph_UI_MapEntryBox
	 */
	struct UUI_MapEntryBox_C_ExecuteUbergraph_UI_MapEntryBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
