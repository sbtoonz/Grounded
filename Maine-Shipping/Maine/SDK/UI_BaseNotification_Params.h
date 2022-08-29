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
	 * Function UI_BaseNotification.UI_BaseNotification_C.GetIcon
	 */
	struct UUI_BaseNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.TryPlayOutro
	 */
	struct UUI_BaseNotification_C_TryPlayOutro_Params
	{	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.IsReadyForOutro
	 */
	struct UUI_BaseNotification_C_IsReadyForOutro_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.GetTitleTextForPlayer
	 */
	struct UUI_BaseNotification_C_GetTitleTextForPlayer_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.GetAssociatedItemRow
	 */
	struct UUI_BaseNotification_C_GetAssociatedItemRow_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.PlayOutro
	 */
	struct UUI_BaseNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.HandleNotificationAnimEnd
	 */
	struct UUI_BaseNotification_C_HandleNotificationAnimEnd_Params
	{	};

	/**
	 * Function UI_BaseNotification.UI_BaseNotification_C.PlayIntroduction
	 */
	struct UUI_BaseNotification_C_PlayIntroduction_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
