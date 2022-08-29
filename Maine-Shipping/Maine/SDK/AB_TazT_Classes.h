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
	 * AnimBlueprintGeneratedClass AB_TazT.AB_TazT_C
	 * Size -> 0x0F58 (FullSize[0x12B8] - InheritedSize[0x0360])
	 */
	class UAB_TazT_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03C0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x03E8(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0488(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0570(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0658(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0688(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x0728(0x0078)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x07A0(0x0078)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0818(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x08D8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0958(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x09D8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0A08(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0AB8(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0B78(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0C18(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0C98(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0D60(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0DA8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0DF0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0F48(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0F70(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0F98(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1038(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1080(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x10A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1128(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1158(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x11D8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1208(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_TazT(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
