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
	 * AnimBlueprintGeneratedClass AB_Mite01.AB_Mite01_C
	 * Size -> 0x0F08 (FullSize[0x1268] - InheritedSize[0x0360])
	 */
	class UAB_Mite01_C : public UCharacterAnimInstance
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
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0528(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x05A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x05D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0658(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0688(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0770(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x07A0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0818(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0848(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x08F8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0940(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0988(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0A28(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0AF0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0B18(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0B98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0BC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0C48(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0C78(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0D28(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0E80(0x0028)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x0EA8(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1220(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1240(0x0020)
		class APawn*                                               OwnerRef;                                                // 0x1260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mite01_AnimGraphNode_TransitionResult_5F62536449F97916D688619695A1ADA4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mite01_AnimGraphNode_TransitionResult_A96AC23A4CC72520AF59E0A3CEF8AC52();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mite01_AnimGraphNode_TransitionResult_8CF14A6049FAAD9347D64BA13D03165F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mite01_AnimGraphNode_TransitionResult_3460A4D6485B51764B23D5908C728F70();
		void AnimNotify_IdleVo();
		void ExecuteUbergraph_AB_Mite01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
