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
	 * Function UI_Notification.UI_Notification_C.SetStashCount
	 */
	struct UUI_Notification_C_SetStashCount_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.SetBackgroundVisibility
	 */
	struct UUI_Notification_C_SetBackgroundVisibility_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.SetLargeFont
	 */
	struct UUI_Notification_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.PlayIntroduction
	 */
	struct UUI_Notification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.SetItemPickupCount
	 */
	struct UUI_Notification_C_SetItemPickupCount_Params
	{
	public:
		struct FDataTableRowHandle                                 Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    RecentPickupItemCount;                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalItemCount;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.FadeOut
	 */
	struct UUI_Notification_C_FadeOut_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.SetText
	 */
	struct UUI_Notification_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FColor                                              Color;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.Construct
	 */
	struct UUI_Notification_C_Construct_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.Tick
	 */
	struct UUI_Notification_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.OnGlobalColorChange
	 */
	struct UUI_Notification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.Event On Large Text
	 */
	struct UUI_Notification_C_Event_On_Large_Text_Params
	{
	public:
		bool                                                       FontSize;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.Background Changed
	 */
	struct UUI_Notification_C_Background_Changed_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.Destruct
	 */
	struct UUI_Notification_C_Destruct_Params
	{	};

	/**
	 * Function UI_Notification.UI_Notification_C.ExecuteUbergraph_UI_Notification
	 */
	struct UUI_Notification_C_ExecuteUbergraph_UI_Notification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notification.UI_Notification_C.OnFadeoutComplete__DelegateSignature
	 */
	struct UUI_Notification_C_OnFadeoutComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
