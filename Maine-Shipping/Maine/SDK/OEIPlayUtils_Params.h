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
	 * Function OEIPlayUtils.OEIPlayUtilsSubsystem.OnWorldBeginPlay
	 */
	struct UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Params
	{	};

	/**
	 * Function OEIPlayUtils.OEIPlayUtilsSubsystem.ExecuteConsoleCommandsFromFile
	 */
	struct UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPlayUtils.OEIPlayUtilsSubsystem.ExecuteBeginPlayCommands
	 */
	struct UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Params
	{	};

	/**
	 * Function OEIPlayUtils.OEIPlayUtilsSubsystem.DisplayAspectRatio
	 */
	struct UOEIPlayUtilsSubsystem_DisplayAspectRatio_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
