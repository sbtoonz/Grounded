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
	 * BlueprintGeneratedClass BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C
	 * Size -> 0x000C (FullSize[0x05F4] - InheritedSize[0x05E8])
	 */
	class ABP_World_Droplet_Water_Rain_C : public ABP_World_Droplet_Water_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		float                                                      Lifetime;                                                // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void Dry_Up();
		void ExecuteUbergraph_BP_World_Droplet_Water_Rain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
