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
	 * BlueprintGeneratedClass BTDecorator_IsSameActor.BTDecorator_IsSameActor_C
	 * Size -> 0x0050 (FullSize[0x00F0] - InheritedSize[0x00A0])
	 */
	class UBTDecorator_IsSameActor_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              ObjectA;                                                 // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ObjectB;                                                 // 0x00C8(0x0028) Edit, BlueprintVisible

	public:
		bool PerformConditionCheck(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
