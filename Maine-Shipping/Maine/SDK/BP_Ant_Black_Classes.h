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
	 * BlueprintGeneratedClass BP_Ant_Black.BP_Ant_Black_C
	 * Size -> 0x0008 (FullSize[0x12E8] - InheritedSize[0x12E0])
	 */
	class ABP_Ant_Black_C : public ABP_Ant_C
	{
	public:
		class UPlayerScalingReceiverComponent*                     PlayerScalingReceiver;                                   // 0x12E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
