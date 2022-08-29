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
	 * Enum OnlineManager.EBlueprintProfilePictureSize
	 */
	enum class EBlueprintProfilePictureSize : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3
	};

	/**
	 * Enum OnlineManager.EOnlineVoiceIncomingChannel
	 */
	enum class EOnlineVoiceIncomingChannel : uint8_t
	{
		MicrophoneAudio   = 0,
		TextToSpeechAudio = 1,
		MAX               = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineManager.BlueprintFriendResult
	 * Size -> 0x0010
	 */
	struct FBlueprintFriendResult
	{
	public:
		unsigned char                                              UnknownData_KDIV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
