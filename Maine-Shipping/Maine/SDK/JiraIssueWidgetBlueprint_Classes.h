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
	 * WidgetBlueprintGeneratedClass JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C
	 * Size -> 0x0478 (FullSize[0x06E0] - InheritedSize[0x0268])
	 */
	class UJiraIssueWidgetBlueprint_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_Background;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_PriorityIcon;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_TypeIcon;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_Main;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Description;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Title;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         Brush_IconBug;                                           // 0x02A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconTask;                                          // 0x0328(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconA1;                                            // 0x03B0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconA2;                                            // 0x0438(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconA3;                                            // 0x04C0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconB;                                             // 0x0548(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconC;                                             // 0x05D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Brush_IconD;                                             // 0x0658(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnSetNoteTypeIcon(unsigned char NoteType);
		void OnSetNotePriorityIcon(unsigned char Note_Priority);
		void OnSetDescription(const class FString& Text);
		void OnSetTitle(const class FString& Text);
		void ExecuteUbergraph_JiraIssueWidgetBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
