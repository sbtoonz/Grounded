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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OEIOnlineSubsystemUtils.EOnlinePermissionDenyReason
	 */
	enum class EOnlinePermissionDenyReason : uint8_t
	{
		Allowed                        = 0,
		Unknown                        = 1,
		NotAllowed                     = 2,
		MissingPrivilege               = 3,
		PrivilegeRestrictsTarget       = 4,
		BlockListRestrictsTarget       = 5,
		MuteListRestrictsTarget        = 6,
		PrivacySettingsRestrictsTarget = 7,
		MAX                            = 8
	};

	/**
	 * Enum OEIOnlineSubsystemUtils.EOnlinePermission
	 */
	enum class EOnlinePermission : uint8_t
	{
		CommunicateUsingText  = 0,
		CommunicateUsingVideo = 1,
		CommunicateUsingVoice = 2,
		ViewTargetProfile     = 3,
		ViewTargetPresence    = 4,
		PlayMultiplayer       = 5,
		MAX                   = 6
	};

	/**
	 * Enum OEIOnlineSubsystemUtils.EOnlineUserPrivilegeDenyReason
	 */
	enum class EOnlineUserPrivilegeDenyReason : uint8_t
	{
		None                   = 0,
		PurchaseRequired       = 1,
		Restricted             = 2,
		Banned                 = 3,
		UpdateRequired         = 4,
		ServiceVersionMismatch = 5,
		ServiceMaintenance     = 6,
		Unknown                = 7,
		MAX                    = 8
	};

	/**
	 * Enum OEIOnlineSubsystemUtils.EOnlineUserPrivilege
	 */
	enum class EOnlineUserPrivilege : uint8_t
	{
		CrossPlay                  = 0,
		Clubs                      = 1,
		CloudSavedGames            = 2,
		SocialNetworkSharing       = 3,
		AccessUserGeneratedContent = 4,
		Communications             = 5,
		Multiplayer                = 6,
		AddFriends                 = 7,
		ReceivingSpeechToText      = 8,
		ReceivingTextToSpeech      = 9,
		TextToSpeech               = 10,
		MAX                        = 11
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OEIOnlineSubsystemUtils.DataTableRowHandle_NetCrc
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FDataTableRowHandle_NetCrc : public FDataTableRowHandle
	{
	public:
		struct FDataTableRowHandle                                 DataTableRowHandle;                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3Q9[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIOnlineSubsystemUtils.Name_NetCrc
	 * Size -> 0x000C
	 */
	struct FName_NetCrc
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBIA[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
