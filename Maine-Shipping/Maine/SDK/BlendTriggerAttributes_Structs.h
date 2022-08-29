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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct BlendTriggerAttributes.BlendTriggerAttributes
	 * Size -> 0x002B
	 */
	struct FBlendTriggerAttributes
	{
	public:
		float                                                      SkylightIntensityMin_22_1708ECBF43E5B5E2C907DA87156D0623; // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkylightIntensityMax_23_9C0F03C14C0828A92DE20692B508ABE9; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunIntensityMin_24_93F852144EB419390DC482AB75B93F6D;     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunIntensityMax_25_C304BAEA4A33F4E59410BEBB93A8F26A;     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonIntensityMin_27_DF0B0FCB44A4DB9705CA67B595BA6EFF;    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonIntensityMax_29_669BF51E4EA3C908E03AECAE5CFECD34;    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogThicknessMin_34_8FFB8E0E41DBA1FF84269D936BBC8112;     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogThicknessMax_35_3DB54C924BB98D27A14BD780B541C9D4;     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HedgeContributionMin_38_A2EE601A4E0D4F27A6C59A92B2F6DB44; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HedgeContributionMax_39_BD5C9AF5428E1F24E954B0B8A3EE6893; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteriorDaylightContribution_42_2FD238F24DED2654FBE2089C517D1243; // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PostProcessExposureContribution_45_62BAC72F4A5A6695674AFFAD446A4888; // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       GroundSpecularContribution_47_3D951CDD460BBD56090E3D94BB35EE33; // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
