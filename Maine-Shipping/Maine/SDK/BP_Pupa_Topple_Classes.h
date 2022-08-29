﻿#pragma once

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
	 * BlueprintGeneratedClass BP_Pupa_Topple.BP_Pupa_Topple_C
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class ABP_Pupa_Topple_C : public ABP_ToppleHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		struct FVector GetItemSourceWorldLocation(const struct FDataTableRowHandle& ItemType);
		bool IsSourceForItem(const struct FDataTableRowHandle& ItemType);
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void MulticastHandleDestroy();
		void ExecuteUbergraph_BP_Pupa_Topple(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif