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
	 * Function UI_ModelViewer.UI_ModelViewer_C.PropagateRightThumbstickEvent
	 */
	struct UUI_ModelViewer_C_PropagateRightThumbstickEvent_Params
	{
	public:
		struct FAnalogInputEvent                                   InputEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      SpeedMult;                                               // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E2PN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReplyEvent;                                              // 0x0048(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.CreateRenderTarget
	 */
	struct UUI_ModelViewer_C_CreateRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.OnAnalogValueChanged
	 */
	struct UUI_ModelViewer_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.OnMouseMove
	 */
	struct UUI_ModelViewer_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.Construct
	 */
	struct UUI_ModelViewer_C_Construct_Params
	{	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.Tick
	 */
	struct UUI_ModelViewer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.Destruct
	 */
	struct UUI_ModelViewer_C_Destruct_Params
	{	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.PickRandomColorOffset
	 */
	struct UUI_ModelViewer_C_PickRandomColorOffset_Params
	{	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.PickFarOffset
	 */
	struct UUI_ModelViewer_C_PickFarOffset_Params
	{	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.PreConstruct
	 */
	struct UUI_ModelViewer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.SetStartingRotationX
	 */
	struct UUI_ModelViewer_C_SetStartingRotationX_Params
	{
	public:
		float                                                      StartingRotationX;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.OnNewModelViewed
	 */
	struct UUI_ModelViewer_C_OnNewModelViewed_Params
	{	};

	/**
	 * Function UI_ModelViewer.UI_ModelViewer_C.ExecuteUbergraph_UI_ModelViewer
	 */
	struct UUI_ModelViewer_C_ExecuteUbergraph_UI_ModelViewer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJM8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
