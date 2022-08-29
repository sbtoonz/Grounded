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
	 * BlueprintGeneratedClass BP_Backpack_Player_Male01.BP_Backpack_Player_Male01_C
	 * Size -> 0x000C (FullSize[0x0350] - InheritedSize[0x0344])
	 */
	class ABP_Backpack_Player_Male01_C : public ABP_Backpack_Player_C
	{
	public:
		unsigned char                                              UnknownData_KSAP[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDropletContentsComponent*                           DropletContents;                                         // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool GetShouldShowHUDMarker();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
