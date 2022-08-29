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
	 * Class OEIText.OEITextLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEITextLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FLocString MakeLocString(int32_t StringTableID, int32_t StringID);
		class FString GetLocStringText(const struct FLocString& LocString);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIText.OEITextSettings
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UOEITextSettings : public UDeveloperSettings
	{
	public:
		TMap<class FString, struct FStringTableBundleSets>         StringTableBundleSetMap;                                 // 0x0038(0x0050) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                              StringTokenBundles[0x10];                                // 0x0088(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIText.StringTableBundleSet
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UStringTableBundleSet : public UDataAsset
	{
	public:
		TMap<class FName, struct FOEIStringTable>                  StringTables;                                            // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Hash;                                                    // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IN8L[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIText.StringTokensBundle
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UStringTokensBundle : public UDataAsset
	{
	public:
		unsigned char                                              Tokens[0x50];                                            // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    Hash;                                                    // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RW0S[0x14];                                  // 0x0084(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
