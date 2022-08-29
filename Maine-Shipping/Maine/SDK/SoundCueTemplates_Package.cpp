/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundCueTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundCueTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundCueContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundCueContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundCueDistanceCrossfade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundCueDistanceCrossfade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueDistanceCrossfade");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundCueTemplateSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundCueTemplateSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplateSettings");
		return ptr;
	}

}


