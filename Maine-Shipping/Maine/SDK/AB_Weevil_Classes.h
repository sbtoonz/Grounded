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
	 * AnimBlueprintGeneratedClass AB_Weevil.AB_Weevil_C
	 * Size -> 0x0730 (FullSize[0x0A90] - InheritedSize[0x0360])
	 */
	class UAB_Weevil_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03C0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x03E8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x04D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0500(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0580(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x05B0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0660(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0700(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0748(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0790(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0858(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0880(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0900(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0930(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x09B0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x09E0(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_Weevil(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
