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
	 * BlueprintGeneratedClass BQOption_MarkPoint.BQOption_MarkPoint_C
	 * Size -> 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
	 */
	class ABQOption_MarkPoint_C : public ABurgleQuestOptionActor
	{
	public:
		class UStaticMeshComponent*                                EditorPreview;                                           // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          LocationName;                                            // 0x0280(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void GetLocationName(class FString* Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
