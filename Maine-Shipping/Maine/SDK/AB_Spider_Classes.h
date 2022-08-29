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
	 * AnimBlueprintGeneratedClass AB_Spider.AB_Spider_C
	 * Size -> 0x1358 (FullSize[0x16B8] - InheritedSize[0x0360])
	 */
	class UAB_Spider_C : public UCharacterAnimInstance
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
		unsigned char                                              UnknownData_UP6Y[0x7];                                   // 0x16A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               owner_ref;                                               // 0x16B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_TransitionResult_D24AFAE640C44FB3742565B30FB8C037();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_SequencePlayer_E1ED5AF2435A193F65E005A6789C8FF7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_SequencePlayer_C0AF729A4A9A7F0BAE124097FC556FE4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_SequencePlayer_E96C665F4CB01FDDBE896FB84CFA9CFE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_SequencePlayer_B52CF8DA406921998156298E49456920();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_TransitionResult_D09005C24985B97FD5D9939D9E8840A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_TransitionResult_3C14A986408334917E1F7785EF2249A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_TransitionResult_EAAAD1F54840A12EEF30F298306E4DDE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Spider_AnimGraphNode_TransitionResult_24855585421173E8C1CDAD817664F618();
		void AnimNotify_IdleVo();
		void ExecuteUbergraph_AB_Spider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
