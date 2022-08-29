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
	 * BlueprintGeneratedClass BP_LootBag.BP_LootBag_C
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ABP_LootBag_C : public ALootBag
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
