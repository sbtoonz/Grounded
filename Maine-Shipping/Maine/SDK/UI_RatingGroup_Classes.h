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
	 * WidgetBlueprintGeneratedClass UI_RatingGroup.UI_RatingGroup_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UUI_RatingGroup_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UUI_RatingBar_C*                                     RatingBar;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            RatingContainer;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 Text;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          LabelString;                                             // 0x0298(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void SetLocalizedText(const struct FLocString& Text);
		void SetPercentage(float Percentage);
		void PreConstruct(bool IsDesignTime);
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_RatingGroup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
