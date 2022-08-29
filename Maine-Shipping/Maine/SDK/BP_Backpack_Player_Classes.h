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
	 * BlueprintGeneratedClass BP_Backpack_Player.BP_Backpack_Player_C
	 * Size -> 0x001C (FullSize[0x0344] - InheritedSize[0x0328])
	 */
	class ABP_Backpack_Player_C : public ALootBag
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UDropletContentsComponent*                           DropletContentsComponent;                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentPlayerIndex;                                      // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetShouldShowHUDMarker();
		void TestZ();
		void ReceiveBeginPlay();
		void ResyncToLastKnownHostPosition();
		void ExecuteUbergraph_BP_Backpack_Player(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
