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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OEIPlayUtils.OEIPlayUtilsSubsystem
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UOEIPlayUtilsSubsystem : public UGameInstanceSubsystem
	{
	public:
		class FString                                              ProjectConsoleCommandListsBasePath;                      // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserConsoleCommandListsBasePath;                         // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BeginPlayCommandsFileName;                               // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XD8T[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnWorldBeginPlay();
		void ExecuteConsoleCommandsFromFile(const class FString& Filename);
		void ExecuteBeginPlayCommands();
		void DisplayAspectRatio(bool Enable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
