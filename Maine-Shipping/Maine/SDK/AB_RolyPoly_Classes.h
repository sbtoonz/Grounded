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
	 * AnimBlueprintGeneratedClass AB_RolyPoly.AB_RolyPoly_C
	 * Size -> 0x0E30 (FullSize[0x1190] - InheritedSize[0x0360])
	 */
	class UAB_RolyPoly_C : public UCharacterAnimInstance
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
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x07A0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0818(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x08B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0938(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0968(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0A18(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0AC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0AF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0B70(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0BA0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0C50(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0CF0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0D38(0x0048)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x0D80(0x0378)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x10F8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1118(0x0020)
		class UAudioComponent*                                     ChargeAttackLoopRef;                                     // 0x1138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EPhysicalSurface, class UParticleSystem*>             PhysicalSurfaceImpacts;                                  // 0x1140(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_TransitionResult_ABBA436F4DFF2CC603A81BB6648D1953();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_TransitionResult_7172060442BA8248D94B8FB350629942();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_SequencePlayer_0824AE324605F08454D116B266693EA4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_SequencePlayer_D214109C43142B655D485FA40A3D32F2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_TransitionResult_90E016624C91BF8186FF0C8FCB815118();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_TransitionResult_F5E71B58488DB6CF8D4C5EB172E9E8CB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RolyPoly_AnimGraphNode_TransitionResult_C47ADADF41191D2D16CAD691953616E0();
		void AnimNotify_ChargeAttackStart();
		void AnimNotify_ChargeAttackEnd();
		void AnimNotify_IdleVo();
		void BlueprintBeginPlay();
		void On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat);
		void OnAttackEnded(class UAttack* Attack);
		void AnimNotify_GroundImpact();
		void AnimNotify_SweepAttack();
		void ExecuteUbergraph_AB_RolyPoly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
