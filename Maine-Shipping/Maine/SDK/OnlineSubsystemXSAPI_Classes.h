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
	 * Class OnlineSubsystemXSAPI.OnlineBridgePresenceAdapterXSAPI
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOnlineBridgePresenceAdapterXSAPI : public UObject
	{
	public:
		unsigned char                                              UnknownData_OUAI[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemXSAPI.OnlineBridgePrivilegeAdapterXSAPI
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOnlineBridgePrivilegeAdapterXSAPI : public UObject
	{
	public:
		unsigned char                                              UnknownData_6SWQ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemXSAPI.OnlineBridgeSessionAdapterXSAPI
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeSessionAdapterXSAPI : public UObject
	{
	public:
		unsigned char                                              UnknownData_RH8G[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemXSAPI.OnlineBridgeUserAdapterXSAPI
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeUserAdapterXSAPI : public UObject
	{
	public:
		unsigned char                                              UnknownData_FAQX[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
