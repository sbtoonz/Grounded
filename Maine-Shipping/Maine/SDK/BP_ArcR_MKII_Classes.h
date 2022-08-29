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
	 * BlueprintGeneratedClass BP_ArcR_MKII.BP_ArcR_MKII_C
	 * Size -> 0x0008 (FullSize[0x12E0] - InheritedSize[0x12D8])
	 */
	class ABP_ArcR_MKII_C : public ABP_ArcR_C
	{
	public:
		class UBossComponent*                                      Boss;                                                    // 0x12D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
