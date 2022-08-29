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
	 * Function UI_DataPage.UI_DataPage_C.OnTabClicked
	 */
	struct UUI_DataPage_C_OnTabClicked_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.PopulateTabs
	 */
	struct UUI_DataPage_C_PopulateTabs_Params
	{	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.OnKeyDown
	 */
	struct UUI_DataPage_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.OnAnalogValueChanged
	 */
	struct UUI_DataPage_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.RefreshTabColors
	 */
	struct UUI_DataPage_C_RefreshTabColors_Params
	{	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.RefreshUI
	 */
	struct UUI_DataPage_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.SetTabIndex
	 */
	struct UUI_DataPage_C_SetTabIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDoRefresh;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.CycleTabs
	 */
	struct UUI_DataPage_C_CycleTabs_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQ7N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.OnGlobalColorChange
	 */
	struct UUI_DataPage_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.Construct
	 */
	struct UUI_DataPage_C_Construct_Params
	{	};

	/**
	 * Function UI_DataPage.UI_DataPage_C.ExecuteUbergraph_UI_DataPage
	 */
	struct UUI_DataPage_C_ExecuteUbergraph_UI_DataPage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
