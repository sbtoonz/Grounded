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
	 * UserDefinedStruct ActiveStickyWebs.ActiveStickyWebs
	 * Size -> 0x0018
	 */
	struct FActiveStickyWebs
	{
	public:
		class AActor*                                              MemberVar_0_1_390947A0490C56A2B4EBDFA1432D8D11;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Spiderweb_Sticky_Base_C*>                 MemberVar_2_4_EB76508B4D1BADC33DAECA9607902B19;          // 0x0008(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
