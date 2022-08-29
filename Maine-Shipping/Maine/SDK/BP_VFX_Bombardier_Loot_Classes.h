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
	 * BlueprintGeneratedClass BP_VFX_Bombardier_Loot.BP_VFX_Bombardier_Loot_C
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class ABP_VFX_Bombardier_Loot_C : public ABP_VFX_DeadInsect_Loot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UClass*                                              BombardierAbdomenBP;                                     // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      InsectPartsAbdomen;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_VFX_Bombardier_Loot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
