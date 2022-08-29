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
	 * BlueprintGeneratedClass BP_BASE_Stump.BP_BASE_Stump_C
	 * Size -> 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
	 */
	class ABP_BASE_Stump_C : public ABP_StaticHarvestNode_C
	{
	public:
		ECanRevertToFoliageState CanRevertToFoliage();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
