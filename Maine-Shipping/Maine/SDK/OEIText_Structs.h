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
	 * ScriptStruct OEIText.StringTableBundleSets
	 * Size -> 0x0010
	 */
	struct FStringTableBundleSets
	{
	public:
		unsigned char                                              StringTableBundleSets[0x10];                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct OEIText.OEIStringEntry
	 * Size -> 0x0048
	 */
	struct FOEIStringEntry
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VIDP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultText;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              FemaleText;                                              // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              GenderNeutralText;                                       // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SRAL[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIText.OEIStringTable
	 * Size -> 0x0148
	 */
	struct FOEIStringTable
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              StringsWithTokens[0x50];                                 // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class FString, struct FIDSet>                         StringsWithFemaleVO;                                     // 0x0058(0x0050) Edit, NativeAccessSpecifierPrivate
		TMap<class FString, struct FIDSet>                         StringsWithGenderNeutralVO;                              // 0x00A8(0x0050) Edit, NativeAccessSpecifierPrivate
		TMap<int32_t, struct FOEIStringEntry>                      Entries;                                                 // 0x00F8(0x0050) Edit, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIText.LocString
	 * Size -> 0x0010
	 */
	struct FLocString
	{
	public:
		int32_t                                                    StringTableID;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StringID;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StringTableName;                                         // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
