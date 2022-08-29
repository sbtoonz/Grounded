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
	 * AnimBlueprintGeneratedClass AB_DynamicSpiderWeb.AB_DynamicSpiderWeb_C
	 * Size -> 0x057C (FullSize[0x0834] - InheritedSize[0x02B8])
	 */
	class UAB_DynamicSpiderWeb_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_E9QM[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x02F8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0400(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0420(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0528(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0630(0x0108)
		unsigned char                                              UnknownData_VYHM[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          JNT_2;                                                   // 0x0740(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_3;                                                   // 0x0770(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_4;                                                   // 0x07A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_center;                                              // 0x07D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          JNT_root;                                                // 0x0800(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CornerBoneScale;                                         // 0x0830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DynamicSpiderWeb_AnimGraphNode_ModifyBone_7244AC4F4660DF064C42C38EFA84D9E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DynamicSpiderWeb_AnimGraphNode_ModifyBone_CF93C1B545DA3B3BDF511381C5BF02E6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DynamicSpiderWeb_AnimGraphNode_ModifyBone_92A132B44FA10B132A43578DB1442319();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DynamicSpiderWeb_AnimGraphNode_ModifyBone_B7E6AA18483F85DF16C1C0AC2C796C0D();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_DynamicSpiderWeb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
