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
	 * Class OEIScripting.ConditionalLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionalLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FGlobalConditionalReference MakeGlobalConditionalReference(const struct FGuid& ID);
		struct FGuid GetGlobalConditionalID(const struct FGlobalConditionalReference& GlobalConditional);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIScripting.ScriptEvent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScriptEvent : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIScripting.ScriptLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScriptLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FGlobalScriptReference MakeGlobalScriptReference(const struct FGuid& ID);
		struct FGuid GetGlobalScriptID(const struct FGlobalScriptReference& GlobalScript);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIScripting.ConditionalLibraryScripting
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionalLibraryScripting : public UConditionalLibrary
	{
	public:
		bool CallGlobalConditional(const struct FGuid& GlobalScriptID);
		bool AlwaysTrue();
		bool AlwaysFalse();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIScripting.GlobalScriptsBundle
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UGlobalScriptsBundle : public UDataAsset
	{
	public:
		int32_t                                                    Hash;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WNZQ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGlobalScript>                               GlobalScripts;                                           // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGlobalConditional>                          GlobalConditionals;                                      // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FConditional>                                Conditionals;                                            // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIScripting.OEIScriptingSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOEIScriptingSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              GlobalScriptsBundles[0x10];                              // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bExportDataAssetEnums;                                   // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6H9L[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIScripting.ScriptLibraryScripting
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScriptLibraryScripting : public UScriptLibrary
	{
	public:
		void DebugPrintMessage(const class FString& Message);
		void CallGlobalScript(const struct FGuid& GlobalScriptID);
		void AddDataAssetHardRef(const class FString& DataAsset);
		void AddClassHardRef(const class FString& Class);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
