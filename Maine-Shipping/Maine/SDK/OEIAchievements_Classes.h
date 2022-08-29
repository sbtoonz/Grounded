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
	 * Class OEIAchievements.AchievementsBundle
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UAchievementsBundle : public UDataAsset
	{
	public:
		TMap<struct FGuid, struct FAchievementEntry>               AchievementValues;                                       // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Hash;                                                    // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H8Y0[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIAchievements.OEIAchievementLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIAchievementLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FAchievementReference MakeAchievementReference(const struct FGuid& ID);
		struct FGuid GetAchievementID(const struct FAchievementReference& Achievement);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIAchievements.OEIAchievementSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UOEIAchievementSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              AchievementsBundles[0x10];                               // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
