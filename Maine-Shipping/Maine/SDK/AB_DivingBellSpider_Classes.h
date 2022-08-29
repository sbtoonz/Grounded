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
	 * AnimBlueprintGeneratedClass AB_DivingBellSpider.AB_DivingBellSpider_C
	 * Size -> 0x07E0 (FullSize[0x0B40] - InheritedSize[0x0360])
	 */
	class UAB_DivingBellSpider_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0398(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0438(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x04B8(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0580(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x05C8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0610(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0638(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0660(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x06E0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x07A8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0890(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x08C0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0940(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x09C0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0A60(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0A90(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_5AD1F46B43A0D7A106DED0A4BE0D55EA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_7861582346BC1C1B4AAF92AD836FC0D7();
		void ExecuteUbergraph_AB_DivingBellSpider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
