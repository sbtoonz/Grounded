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
	 * BlueprintGeneratedClass BP_Larva_Burrow_Charcoal.BP_Larva_Burrow_Charcoal_C
	 * Size -> 0x0008 (FullSize[0x1368] - InheritedSize[0x1360])
	 */
	class ABP_Larva_Burrow_Charcoal_C : public ABP_Larva_Burrow_C
	{
	public:
		class UPlayerScalingReceiverComponent*                     PlayerScalingReceiver;                                   // 0x1360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
