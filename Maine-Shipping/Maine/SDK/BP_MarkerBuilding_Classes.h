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
	 * BlueprintGeneratedClass BP_MarkerBuilding.BP_MarkerBuilding_C
	 * Size -> 0x0018 (FullSize[0x0648] - InheritedSize[0x0630])
	 */
	class ABP_MarkerBuilding_C : public ABP_WidgetBuilding_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FLocString                                          SetCustomMarkerText;                                     // 0x0638(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetUseText(EInteractionChannel Channel, class AActor* InstigatedBy);
		void ProcessLoadData();
		void ExecuteUbergraph_BP_MarkerBuilding(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
