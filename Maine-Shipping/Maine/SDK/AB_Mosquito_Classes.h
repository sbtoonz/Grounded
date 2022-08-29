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
	 * AnimBlueprintGeneratedClass AB_Mosquito.AB_Mosquito_C
	 * Size -> 0x2649 (FullSize[0x29A9] - InheritedSize[0x0360])
	 */
	class UAB_Mosquito_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0398(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x03E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0408(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0430(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0458(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0480(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0500(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0530(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x05A8(0x0030)
		unsigned char                                              UnknownData_EE5G[0x8];                                   // 0x05D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_9;                                   // 0x05E0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_8;                                   // 0x0840(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_7;                                   // 0x0AA0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_6;                                   // 0x0D00(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_5;                                   // 0x0F60(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_4;                                   // 0x11C0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_3;                                   // 0x1420(0x0260)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x1680(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x16A0(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x16C0(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1760(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1848(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1930(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1960(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1A10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1A38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1A60(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1A88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1B08(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1B38(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1BB8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1BE8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1C68(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1C98(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1D18(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1D48(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1DF8(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1E98(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x1EE0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1FA8(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2028(0x00C8)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail_2;                                   // 0x20F0(0x0260)
		struct FAnimNode_Trail                                     AnimGraphNode_Trail;                                     // 0x2350(0x0260)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x25B0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x25D0(0x0020)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x25F0(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2968(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2988(0x0020)
		bool                                                       Blood;                                                   // 0x29A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_PowerIK_Ground_24DE53C448C0435E5E418DB2C33CB62C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_TransitionResult_A0F7A8C14DE3FE7853F5199037401D8B();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Mosquito(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
