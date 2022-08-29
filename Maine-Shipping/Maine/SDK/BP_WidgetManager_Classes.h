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
	 * BlueprintGeneratedClass BP_WidgetManager.BP_WidgetManager_C
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UBP_WidgetManager_C : public UWidgetManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FDataTableRowHandle                                 MenuQuickJumpDetailsItem;                                // 0x00A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 LastCraftingMenuSelection;                               // 0x00B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 LastWorkbenchMenuSelection;                              // 0x00C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		EInGameMenuScreenType                                      LastUsedInGameMenuScreenType;                            // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UFO5[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        LastBuildingRadialCategory;                              // 0x00D4(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8HGU[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 LastBuildingRadialSelection;                             // 0x00E0(0x0010) Edit, BlueprintVisible, NoDestructor
		int32_t                                                    LastHotBarRadialCategoryIndex;                           // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastHotBarRadialSelectionIndex;                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateStringInputWindow(const class FString& TitleText, const class FString& BodyText, bool IsPassword, class UUI_StringInputPopup_C** ConfirmationWindow);
		void OpenQuestsMenu();
		void ClearStates();
		void CreateConfirmationWindow(const class FString& TitleText, const class FString& BodyText, bool OkButtonOnly, class UUI_ConfirmationPopUp_C** ConfirmationWindow);
		void OpenMapMenu();
		void GetOrOpenInGameMenu(class UUI_InGameMenu_C** Menu);
		void OpenCraftingMenu();
		void OpenInventoryMenu();
		void HandleQuickMenuOpen();
		void OnGameStateReset();
		void ExecuteUbergraph_BP_WidgetManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
