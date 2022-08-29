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
	 * BlueprintGeneratedClass BP_Ladybug_Upperyard.BP_Ladybug_Upperyard_C
	 * Size -> 0x0000 (FullSize[0x130A] - InheritedSize[0x130A])
	 */
	class ABP_Ladybug_Upperyard_C : public ABP_Ladybug_C
	{
	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
