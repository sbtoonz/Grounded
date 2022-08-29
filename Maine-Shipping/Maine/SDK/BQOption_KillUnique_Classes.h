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
	 * BlueprintGeneratedClass BQOption_KillUnique.BQOption_KillUnique_C
	 * Size -> 0x0048 (FullSize[0x02D0] - InheritedSize[0x0288])
	 */
	class ABQOption_KillUnique_C : public ABurgleQuestKillUniqueOptionActor
	{
	public:
		class UStaticMeshComponent*                                LabelLine;                                               // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                LabelText;                                               // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          TitleString;                                             // 0x02A0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          DescriptionString;                                       // 0x02B0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          ObjectiveString;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
