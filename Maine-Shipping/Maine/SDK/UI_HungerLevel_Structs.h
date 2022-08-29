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
	 * UserDefinedEnum UI_HungerLevel.UI_HungerLevel
	 */
	enum class EUI_HungerLevel : uint8_t
	{
		UI_HungerLevel_NewEnumerator0 = 0,
		UI_HungerLevel_NewEnumerator1 = 1,
		UI_HungerLevel_NewEnumerator2 = 2,
		UI_HungerLevel_NewEnumerator3 = 3,
		UI_HungerLevel_NewEnumerator4 = 4,
		UI_HungerLevel_UI_MAX         = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
