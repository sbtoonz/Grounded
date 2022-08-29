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
	 * BlueprintGeneratedClass BP_BombardierThorax.BP_BombardierThorax_C
	 * Size -> 0x0015 (FullSize[0x02B8] - InheritedSize[0x02A3])
	 */
	class ABP_BombardierThorax_C : public ABP_InsectPart_C
	{
	public:
		unsigned char                                              UnknownData_U703[0x5];                                   // 0x02A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCableComponent*                                     CableLegLFront;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCableComponent*                                     CableLegRFront;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
