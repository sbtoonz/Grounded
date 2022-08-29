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
	 * WidgetBlueprintGeneratedClass UI_BuildingHealth.UI_BuildingHealth_C
	 * Size -> 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
	 */
	class UUI_BuildingHealth_C : public UBuildingHealthWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Show;                                                    // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              HealthBG;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FLinearColor GetFragileBarColor(float FragileRatio);
		struct FLinearColor GetHealthBarColor(float HealthRatio);
		void SetBuilding(class ABuilding* Building);
		void OnGlobalColorChange();
		void UnsetActor();
		void Construct();
		void ExecuteUbergraph_UI_BuildingHealth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
