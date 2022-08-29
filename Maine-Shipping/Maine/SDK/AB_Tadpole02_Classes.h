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
	 * AnimBlueprintGeneratedClass AB_Tadpole02.AB_Tadpole02_C
	 * Size -> 0x0670 (FullSize[0x09D0] - InheritedSize[0x0360])
	 */
	class UAB_Tadpole02_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0410(0x0028)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0438(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x04B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x04E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0560(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0590(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0678(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x06A8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0758(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x07F8(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0878(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0940(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0988(0x0048)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_34841FB5426105A23AA2FBB8928902FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_84AD42CE491E9AACDB57C2AF962C3F11();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Tadpole02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
