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
	 * AnimBlueprintGeneratedClass AB_Larva.AB_Larva_C
	 * Size -> 0x11B0 (FullSize[0x1520] - InheritedSize[0x0370])
	 */
	class UAB_Larva_C : public UBurrowCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0378(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x03A8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x03F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0440(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x04B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x04E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0508(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0530(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0558(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x05A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x05F8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0620(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x06A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x06D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0750(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0780(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0800(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0830(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x08B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x08E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0960(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0990(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0A78(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0AA8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0B48(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0BC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0C48(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0C78(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D28(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0DC8(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0E10(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0ED8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0F00(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0F80(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0FB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1030(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1060(0x00B0)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x1110(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1488(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x14A8(0x0020)
		class APawn*                                               OwnerRef;                                                // 0x14C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EPhysicalSurface, class UParticleSystem*>             Surface_Impact_Map;                                      // 0x14D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Larva_AnimGraphNode_TransitionResult_154E9F1B4771F1E9E089958B2F85AE84();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Larva_AnimGraphNode_TransitionResult_B56FF17D4012975FB1D04D8AB4830C11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Larva_AnimGraphNode_TransitionResult_68564F3148819E4559B9E4BEA3B6B271();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Larva_AnimGraphNode_TransitionResult_DABC19C448C34E0B11E35BA771E3F60D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Larva_AnimGraphNode_TransitionResult_DAE82A59412BCBBEDE86C199762CDB92();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Larva_AnimGraphNode_TransitionResult_8F060B4145F7A80C555D5982E7D37663();
		void AnimNotify_IdleVo();
		void AnimNotify_Burrow();
		void AnimNotify_Unburrow();
		void ExecuteUbergraph_AB_Larva(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
