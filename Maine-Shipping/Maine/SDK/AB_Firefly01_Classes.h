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
	 * AnimBlueprintGeneratedClass AB_Firefly01.AB_Firefly01_C
	 * Size -> 0x2360 (FullSize[0x26C0] - InheritedSize[0x0360])
	 */
	class UAB_Firefly01_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0438(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0460(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x04E0(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0510(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0588(0x0030)
		unsigned char                                              UnknownData_44E5[0x8];                                   // 0x05B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_9;                                   // 0x05C0(0x0260)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0820(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0840(0x0020)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_8;                                   // 0x0860(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_7;                                   // 0x0AC0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_6;                                   // 0x0D20(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_5;                                   // 0x0F80(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_4;                                   // 0x11E0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_3;                                   // 0x1440(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_2;                                   // 0x16A0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail;                                     // 0x1900(0x0260)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1B60(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1C48(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1C78(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1D28(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1DC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1DF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1E18(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1E40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1EC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1EF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1F70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1FA0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2020(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2050(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x20D0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2100(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x21B0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x21F8(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2240(0x00C8)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x2308(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2680(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x26A0(0x0020)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_PowerIK_Ground_3A6ED3ED45BB2BD5C3726AAD2D925D88();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_TransitionResult_9D7B25D04FD217FD31E185B393C5A335();
		void ExecuteUbergraph_AB_Firefly01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
