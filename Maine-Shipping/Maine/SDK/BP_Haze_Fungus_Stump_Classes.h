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
	 * BlueprintGeneratedClass BP_Haze_Fungus_Stump.BP_Haze_Fungus_Stump_C
	 * Size -> 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
	 */
	class ABP_Haze_Fungus_Stump_C : public ABP_ToppleHarvestNode_C
	{
	public:
		ECanRevertToFoliageState CanRevertToFoliage();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
