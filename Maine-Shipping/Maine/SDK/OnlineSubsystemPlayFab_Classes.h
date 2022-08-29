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
	 * Class OnlineSubsystemPlayFab.OnlineAdapterManagerInterfacePlayFab
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UOnlineAdapterManagerInterfacePlayFab : public UObject
	{
	public:
		unsigned char                                              UnknownData_3XYH[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemPlayFab.OnlineBridgeChatInterfacePlayFab
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeChatInterfacePlayFab : public UObject
	{
	public:
		unsigned char                                              UnknownData_25OW[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemPlayFab.OnlineConstantInterfacePlayFab
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOnlineConstantInterfacePlayFab : public UObject
	{
	public:
		unsigned char                                              UnknownData_KNFK[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemPlayFab.PlayFabPartyNetConnection
	 * Size -> 0x0000 (FullSize[0x1B90] - InheritedSize[0x1B90])
	 */
	class UPlayFabPartyNetConnection : public UIpConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemPlayFab.PlayFabPartyNetDriver
	 * Size -> 0x0018 (FullSize[0x07D0] - InheritedSize[0x07B8])
	 */
	class UPlayFabPartyNetDriver : public UIpNetDriver
	{
	public:
		float                                                      DebugDelayAfterTravelHost;                               // 0x07B8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugDelayAfterTravelClient;                             // 0x07BC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80KK[0x10];                                  // 0x07C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
