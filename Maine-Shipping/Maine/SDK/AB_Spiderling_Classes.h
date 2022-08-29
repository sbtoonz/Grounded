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
	 * AnimBlueprintGeneratedClass AB_Spiderling.AB_Spiderling_C
	 * Size -> 0x1358 (FullSize[0x16B8] - InheritedSize[0x0360])
	 */
	class UAB_Spiderling_C : public UCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0500(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0528(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x05A8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0648(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x06C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x06F8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0778(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0818(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0898(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x08C8(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0940(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x09E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0A60(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0A90(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0B78(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0BA8(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0C58(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0CA0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0CE8(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0D88(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0E50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0E78(0x0028)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0EA0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0F18(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0F48(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0FC8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0FF8(0x00B0)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x10A8(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1420(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1440(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1460(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x15B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x15E0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1608(0x00A0)
		bool                                                       IsIdleCombat;                                            // 0x16A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4QLI[0x7];                                   // 0x16A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               owner_ref;                                               // 0x16B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_TransitionResult_D307F9B64803CBD0021BA198296868D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_SequencePlayer_05CD81E7477FD45AD2F1D1B45E095CBE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_SequencePlayer_3BE2664E442F9EBCA37B91A82AA5825F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_SequencePlayer_90866CF5406A8A3C9544B6AC8A510E78();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_SequencePlayer_E06E5735405F81859C6633A4CBEBB18D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_TransitionResult_C69A0D904CE6AC6C06A501A7F92CC414();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_TransitionResult_D00B365B40C6E89675397E8BEDBF2769();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_TransitionResult_6697071D4B6E626BC12159989B8C0395();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spiderling_AnimGraphNode_TransitionResult_BB1E193A40E5158D6E564E9EC552BE3D();
		void AnimNotify_IdleVo();
		void ExecuteUbergraph_AB_Spiderling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
