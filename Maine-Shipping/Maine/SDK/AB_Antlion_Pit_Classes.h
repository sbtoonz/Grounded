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
	 * AnimBlueprintGeneratedClass AB_Antlion_Pit.AB_Antlion_Pit_C
	 * Size -> 0x0DC0 (FullSize[0x1130] - InheritedSize[0x0370])
	 */
	class UAB_Antlion_Pit_C : public UBurrowCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0378(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x03A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x03D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x03F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0420(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0448(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0470(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0498(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x04C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x04E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0510(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0538(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x05B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x05E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0668(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0698(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0718(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0748(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x07C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x07F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0878(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x08A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0928(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0958(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0A08(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0AA8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0AD0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0B50(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0B80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0C00(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0C30(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0CE0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0D28(0x0048)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x0D70(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x10E8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1108(0x0020)
		class APawn*                                               owner_ref;                                               // 0x1128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_SequencePlayer_593B4AE948019F90380916874CA59DB8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_SequencePlayer_18828F5E4AC2D1A3E557DEB768AC55A4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_TransitionResult_31CAB0DD40B04A589FCEEDA28B531121();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_TransitionResult_A230F281495499FC792A8F94DA41E8BC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_TransitionResult_F5B415EA4CE54E0105C62F9C4A0B22E1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_TransitionResult_33BC66AE4231B4E9115F92971C94BA84();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_TransitionResult_C66ACC994465CBAD503567A450F7EB69();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Antlion_Pit_AnimGraphNode_TransitionResult_CBACF17E48C724775AEB2CBC92B22F7C();
		void AnimNotify_FlingForward();
		void AnimNotify_IdleVo();
		void AnimNotify_DisturbSand();
		void ExecuteUbergraph_AB_Antlion_Pit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
