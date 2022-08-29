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
	 * BlueprintGeneratedClass AudioLib.AudioLib_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioLib_C : public UBlueprintFunctionLibrary
	{
	public:
		void SequenceContainer2D(TArray<class USoundBase*>* Sound_List, class UObject* __WorldContext);
		float GetRandomStartTime(class UAudioComponent* NewParam, class UObject* __WorldContext);
		void GetLocalListenerLocation(class UObject* __WorldContext, struct FVector* Location);
		void GetDistanceToPlayer(class AActor* Target, float Duration, class UObject* __WorldContext);
		void MultiGetDistanceToPlayer(TArray<class AActor*>* Target, float Duration, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
