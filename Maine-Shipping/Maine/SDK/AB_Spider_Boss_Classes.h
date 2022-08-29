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
	 * AnimBlueprintGeneratedClass AB_Spider_Boss.AB_Spider_Boss_C
	 * Size -> 0x14D1 (FullSize[0x1831] - InheritedSize[0x0360])
	 */
	class UAB_Spider_Boss_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x03B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x03E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0408(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0430(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0458(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0480(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x04A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x04D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x04F8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x0578(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0618(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0698(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x06C8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0748(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x07E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0868(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0898(0x0080)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x0918(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0990(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0A30(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0A60(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0B00(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0BE8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0CD0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0D00(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0DB0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0DF8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0E40(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0EE0(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0FA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0FD0(0x0028)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0FF8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1070(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x10A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1120(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1150(0x00B0)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x1200(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1578(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1598(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x15B8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x15E8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1610(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x16B0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1808(0x0028)
		bool                                                       IsIdleCombat;                                            // 0x1830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_Boss_AnimGraphNode_TransitionResult_A59795684EB22C0A2C65CF9F51B8995C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_Boss_AnimGraphNode_TransitionResult_7365F27241E01968B0C1A496AAD9D082();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_Boss_AnimGraphNode_TransitionResult_45D1F9F640AD083BC3FE23B7A94CDC0B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_Boss_AnimGraphNode_TransitionResult_C3425E914809F968AEF59FB4359371DE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_Boss_AnimGraphNode_TransitionResult_9493CF6D4EC4D1A8EA67A1B116B14832();
		void ExecuteUbergraph_AB_Spider_Boss(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
