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
	 * BlueprintGeneratedClass BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C
	 * Size -> 0x0038 (FullSize[0x02D8] - InheritedSize[0x02A0])
	 */
	class ABQOption_FetchBurgleChip_C : public ABurgleQuestChipOptionActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                EditorPreview;                                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          Name;                                                    // 0x02B8(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          RiddleText;                                              // 0x02C8(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void Get_Riddle_String(class FString* String);
		void Get_Name_String(class FString* Name);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BQOption_FetchBurgleChip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
