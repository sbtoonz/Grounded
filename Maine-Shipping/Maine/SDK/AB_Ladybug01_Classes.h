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
	 * AnimBlueprintGeneratedClass AB_Ladybug01.AB_Ladybug01_C
	 * Size -> 0x0EA8 (FullSize[0x1208] - InheritedSize[0x0360])
	 */
	class UAB_Ladybug01_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0500(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0528(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x05A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x05D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0658(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0688(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0770(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x07A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0820(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x08C0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0938(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0968(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0A18(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0A60(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0AA8(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0B48(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0C10(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0C38(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0CB8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0CE8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0D68(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0D98(0x00B0)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x0E48(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x11C0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x11E0(0x0020)
		class APawn*                                               OwnerRef;                                                // 0x1200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Ladybug01_AnimGraphNode_TransitionResult_CB11F7364396A7FA4FEB2F8555C66888();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Ladybug01_AnimGraphNode_TransitionResult_02BED65045F92644675E0099C3470489();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Ladybug01_AnimGraphNode_TransitionResult_5F75D4D047FBAE01C968E6BE7EC2F1F9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Ladybug01_AnimGraphNode_TransitionResult_A303F7074376E439D32C96911321D584();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Ladybug01_AnimGraphNode_TransitionResult_185AFD51489443C6AA3023AC81B136A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Ladybug01_AnimGraphNode_TransitionResult_C55EC9474A0DCE9B585DE5A5C98AC070();
		void AnimNotify_IdleVo();
		void ExecuteUbergraph_AB_Ladybug01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
