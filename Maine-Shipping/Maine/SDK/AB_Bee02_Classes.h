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
	 * AnimBlueprintGeneratedClass AB_Bee02.AB_Bee02_C
	 * Size -> 0x1EC8 (FullSize[0x2228] - InheritedSize[0x0360])
	 */
	class UAB_Bee02_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0438(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0460(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x04E0(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0510(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0530(0x0020)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_8;                                   // 0x0550(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_7;                                   // 0x07B0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_6;                                   // 0x0A10(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_5;                                   // 0x0C70(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_4;                                   // 0x0ED0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_3;                                   // 0x1130(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_2;                                   // 0x1390(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail;                                     // 0x15F0(0x0260)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1850(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x18F0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x19D8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1AC0(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x1AF0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1B68(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1B98(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1C48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1C70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1C98(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1CC0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1D40(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1D70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1DF0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1E20(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1EA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1ED0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1F50(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1F80(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2030(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x20F8(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x2198(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x21E0(0x0048)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bee02_AnimGraphNode_TransitionResult_B5B118FB4BDAD426AD8B27BD81287716();
		void ExecuteUbergraph_AB_Bee02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
