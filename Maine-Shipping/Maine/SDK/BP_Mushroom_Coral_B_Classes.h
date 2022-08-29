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
	 * BlueprintGeneratedClass BP_Mushroom_Coral_B.BP_Mushroom_Coral_B_C
	 * Size -> 0x000F (FullSize[0x0448] - InheritedSize[0x0439])
	 */
	class ABP_Mushroom_Coral_B_C : public ABP_BASE_Mushroom_C
	{
	public:
		unsigned char                                              UnknownData_UM5P[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MushroomMID_1;                                           // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
