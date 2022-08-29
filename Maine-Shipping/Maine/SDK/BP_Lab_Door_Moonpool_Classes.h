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
	 * BlueprintGeneratedClass BP_Lab_Door_Moonpool.BP_Lab_Door_Moonpool_C
	 * Size -> 0x006F (FullSize[0x04F8] - InheritedSize[0x0489])
	 */
	class ABP_Lab_Door_Moonpool_C : public ABP_Lab_Door_A_C
	{
	public:
		unsigned char                                              UnknownData_RRNS[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAudioComponent*                                     S_Door_Lp;                                               // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Moonpool_Door_B_02;                                   // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Moonpool_Door_A_02;                                   // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Moonpool_Door_B_01;                                   // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Moonpool_Door_A_01;                                   // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Moonpool_Door_C_02;                                   // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Moonpool_Door_C_01;                                   // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Moonpool_Timeline_Audio_SoundPitch_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Moonpool_Timeline_NewTrack_6_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Moonpool_Timeline_Door_C_02_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Moonpool_Timeline_Door_C_01_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Moonpool_Timeline_Door_B_01_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Moonpool_Timeline_Door_A_01_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Moonpool_Timeline__Direction_2ADDACD64DEC96E2ACD7DCB24B1C0477; // 0x04E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FLEJ[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Moonpool_Timeline;                                       // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Moonpool_Timeline__FinishedFunc();
		void Moonpool_Timeline__UpdateFunc();
		void Moonpool_Timeline__AudioEvent_Impacts__EventFunc();
		void Moonpool_Timeline__AudioEvent_End__EventFunc();
		void Moonpool_Timeline__AudioEvent_Begin__EventFunc();
		void OnCloseDoor();
		void OnOpenDoor();
		void ExecuteUbergraph_BP_Lab_Door_Moonpool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
