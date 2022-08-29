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
	 * AnimBlueprintGeneratedClass AB_Hair_PostProcess.AB_Hair_PostProcess_C
	 * Size -> 0x0218 (FullSize[0x04D0] - InheritedSize[0x02B8])
	 */
	class UAB_Hair_PostProcess_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_UWB9[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02F8(0x01D8) ContainsInstancedReference

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_Hair_PostProcess(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
