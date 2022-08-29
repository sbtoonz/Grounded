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
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetWorkbenchIconColor
	 */
	struct UUI_CategoriesButton_Base_C_GetWorkbenchIconColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetCategoryIconVisibility
	 */
	struct UUI_CategoriesButton_Base_C_GetCategoryIconVisibility_Params
	{
	public:
		ESlateVisibility                                           CategoryVisibility;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetAttentionColor
	 */
	struct UUI_CategoriesButton_Base_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetEnabledStyle
	 */
	struct UUI_CategoriesButton_Base_C_SetEnabledStyle_Params
	{
	public:
		class UImage*                                              CatIcon;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             Button_CategoryInner;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetDisabledStyle
	 */
	struct UUI_CategoriesButton_Base_C_SetDisabledStyle_Params
	{
	public:
		class UImage*                                              CatIcon;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             Button_CategoryInner;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.NormalButtonUnhover
	 */
	struct UUI_CategoriesButton_Base_C_NormalButtonUnhover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.NormalButtonHover
	 */
	struct UUI_CategoriesButton_Base_C_NormalButtonHover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetSelected
	 */
	struct UUI_CategoriesButton_Base_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetIsValid
	 */
	struct UUI_CategoriesButton_Base_C_SetIsValid_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnAddedToFocusPath
	 */
	struct UUI_CategoriesButton_Base_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnRemovedFromFocusPath
	 */
	struct UUI_CategoriesButton_Base_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnGlobalColorChange
	 */
	struct UUI_CategoriesButton_Base_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.Construct
	 */
	struct UUI_CategoriesButton_Base_C_Construct_Params
	{	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.Tick
	 */
	struct UUI_CategoriesButton_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.PreConstruct
	 */
	struct UUI_CategoriesButton_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.ExecuteUbergraph_UI_CategoriesButton_Base
	 */
	struct UUI_CategoriesButton_Base_C_ExecuteUbergraph_UI_CategoriesButton_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CategoriesButton_Base_C_OnNormalButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
