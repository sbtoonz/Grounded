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
	 * Function OEIAchievements.OEIAchievementLibrary.MakeAchievementReference
	 */
	struct UOEIAchievementLibrary_MakeAchievementReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAchievementReference                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIAchievements.OEIAchievementLibrary.GetAchievementID
	 */
	struct UOEIAchievementLibrary_GetAchievementID_Params
	{
	public:
		struct FAchievementReference                               Achievement;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
