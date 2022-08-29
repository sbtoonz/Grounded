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
	 * AnimBlueprintGeneratedClass AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C
	 * Size -> 0x08B8 (FullSize[0x0B70] - InheritedSize[0x02B8])
	 */
	class UAB_PonyTailHair_PostProcess_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_IQYF[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x02C8(0x0020)
		unsigned char                                              UnknownData_VHSY[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x02F0(0x0650)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0940(0x01D8) ContainsInstancedReference
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0B18(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0B38(0x0030)
		class AActor*                                              PawnOwner;                                               // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PonyTailHair_PostProcess_AnimGraphNode_RigidBody_D085880E4BD4EABB16D3DF8CC49DFAD6();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_AB_PonyTailHair_PostProcess(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
