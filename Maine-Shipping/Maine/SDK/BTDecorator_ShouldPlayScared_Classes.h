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
	 * BlueprintGeneratedClass BTDecorator_ShouldPlayScared.BTDecorator_ShouldPlayScared_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UBTDecorator_ShouldPlayScared_C : public UBTDecorator_BlueprintBase
	{
	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
