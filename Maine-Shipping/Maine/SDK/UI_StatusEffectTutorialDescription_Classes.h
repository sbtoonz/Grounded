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
	 * WidgetBlueprintGeneratedClass UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C
	 * Size -> 0x007E (FullSize[0x02F6] - InheritedSize[0x0278])
	 */
	class UUI_StatusEffectTutorialDescription_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             BtnBG;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      DescriptionText;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      HeaderText;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_203;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      ItemText;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      MeatHolder;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SEIcon;                                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          TitleString;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          DescString;                                              // 0x02C8(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          IconImage;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeader;                                                // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T16H[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          HeaderString;                                            // 0x02E4(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		bool                                                       IsNegativeEffect;                                        // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       WasSetNegative;                                          // 0x02F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetDebuffTint();
		void SetBuffTint();
		void SetDescriptionText(const struct FLocString& DescSetter);
		void SetImage(class UTexture2D* IconSetter);
		void SetTitleText(const struct FLocString& TitleSetter);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void PreConstruct(bool IsDesignTime);
		void OnGlobalColorChange();
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void OnListItemObjectSet(class UObject* ListItemObject);
		void RefreshDisplay();
		void ExecuteUbergraph_UI_StatusEffectTutorialDescription(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
