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
	 * BlueprintGeneratedClass BP_Spider_Web.BP_Spider_Web_C
	 * Size -> 0x0000 (FullSize[0x131C] - InheritedSize[0x131C])
	 */
	class ABP_Spider_Web_C : public ABP_Spider_BASE_C
	{
	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
