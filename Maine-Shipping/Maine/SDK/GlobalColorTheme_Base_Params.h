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
	 * Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ProduceColorblindCache
	 */
	struct UGlobalColorTheme_Base_C_ProduceColorblindCache_Params
	{
	public:
		struct FGlobalColorList                                    Base;                                                    // 0x0000(0x0370)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OverridesName;                                           // 0x0370(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGlobalColorList                                    Cache;                                                   // 0x0378(0x0370)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CacheName;                                               // 0x06E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.GetGlobalColor
	 */
	struct UGlobalColorTheme_Base_C_GetGlobalColor_Params
	{
	public:
		EGlobalColor                                               GlobalColor;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EColorBlindModeSettings                                    ColorblindMode;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7JZO[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        LinearColor;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_80O8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         SlateColor;                                              // 0x0018(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ProduceColorblindCaches
	 */
	struct UGlobalColorTheme_Base_C_ProduceColorblindCaches_Params
	{	};

	/**
	 * Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ExecuteUbergraph_GlobalColorTheme_Base
	 */
	struct UGlobalColorTheme_Base_C_ExecuteUbergraph_GlobalColorTheme_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
