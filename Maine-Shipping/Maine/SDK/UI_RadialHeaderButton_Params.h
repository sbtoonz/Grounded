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
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetCurrentPage
	 */
	struct UUI_RadialHeaderButton_C_SetCurrentPage_Params
	{
	public:
		int32_t                                                    CurrentPage;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetData
	 */
	struct UUI_RadialHeaderButton_C_SetData_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PageCount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CategoryName;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.GetTitleTextColor
	 */
	struct UUI_RadialHeaderButton_C_GetTitleTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.GetCategoryColor
	 */
	struct UUI_RadialHeaderButton_C_GetCategoryColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetActive
	 */
	struct UUI_RadialHeaderButton_C_SetActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.BndEvt__RadialButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_RadialHeaderButton_C_BndEvt__RadialButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.OnRadialButtonPressed
	 */
	struct UUI_RadialHeaderButton_C_OnRadialButtonPressed_Params
	{
	public:
		class UUI_RadialPageDot_C*                                 RadialPageButton;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.ExecuteUbergraph_UI_RadialHeaderButton
	 */
	struct UUI_RadialHeaderButton_C_ExecuteUbergraph_UI_RadialHeaderButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2UN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.OnPressed__DelegateSignature
	 */
	struct UUI_RadialHeaderButton_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UUI_RadialHeaderButton_C*                            RadialButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Page;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
