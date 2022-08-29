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
	 * Class OEIOnlineSubsystemUtils.OEIPackageMapClient
	 * Size -> 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
	 */
	class UOEIPackageMapClient : public UPackageMapClient
	{
	public:
		TArray<class FString>                                      NetGUIDResetExceptionFilters;                            // 0x0400(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PIA[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OEIStringCrcSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOEIStringCrcSettings : public UDeveloperSettings
	{
	public:
		bool                                                       UseStringCrcForPackageGUID;                              // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B166[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CustomStrings;                                           // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgeAchievementAdapter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeAchievementAdapter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgeAdapterManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeAdapterManagerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgeChatInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeChatInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgePresenceAdapter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgePresenceAdapter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgePrivilegeAdapter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgePrivilegeAdapter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgeSessionAdapter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeSessionAdapter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineBridgeUserAdapter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeUserAdapter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIOnlineSubsystemUtils.OnlineConstantInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineConstantInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
