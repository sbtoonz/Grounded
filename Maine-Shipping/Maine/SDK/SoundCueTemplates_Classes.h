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
	 * Class SoundCueTemplates.SoundCueTemplate
	 * Size -> 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
	 */
	class USoundCueTemplate : public USoundCue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoundCueTemplates.SoundCueContainer
	 * Size -> 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
	 */
	class USoundCueContainer : public USoundCueTemplate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoundCueTemplates.SoundCueDistanceCrossfade
	 * Size -> 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
	 */
	class USoundCueDistanceCrossfade : public USoundCueTemplate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoundCueTemplates.SoundCueTemplateSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class USoundCueTemplateSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
