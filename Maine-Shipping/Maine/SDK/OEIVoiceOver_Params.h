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
	 * Function OEIVoiceOver.OEIVoiceOverBPLibrary.StopVoiceOver
	 */
	struct UOEIVoiceOverBPLibrary_StopVoiceOver_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverBPLibrary.ResumeVoiceOver
	 */
	struct UOEIVoiceOverBPLibrary_ResumeVoiceOver_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverBPLibrary.PlayVoiceOver
	 */
	struct UOEIVoiceOverBPLibrary_PlayVoiceOver_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVoiceOverData                                      Data;                                                    // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PlaybackStarted;                                         // 0x005C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverBPLibrary.PauseVoiceOver
	 */
	struct UOEIVoiceOverBPLibrary_PauseVoiceOver_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverComponent.Stop
	 */
	struct UOEIVoiceOverComponent_Stop_Params
	{
	public:
		float                                                      FadeOutDuration;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverComponent.Resume
	 */
	struct UOEIVoiceOverComponent_Resume_Params
	{	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverComponent.Prepare
	 */
	struct UOEIVoiceOverComponent_Prepare_Params
	{
	public:
		struct FVoiceOverData                                      Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      LoadingFinished;                                         // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverComponent.Play
	 */
	struct UOEIVoiceOverComponent_Play_Params
	{
	public:
		struct FVoiceOverData                                      Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PlaybackStarted;                                         // 0x0054(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverComponent.Pause
	 */
	struct UOEIVoiceOverComponent_Pause_Params
	{	};

	/**
	 * Function OEIVoiceOver.OEIVoiceOverComponent.CancelPrepared
	 */
	struct UOEIVoiceOverComponent_CancelPrepared_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
