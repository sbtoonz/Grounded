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
	 * Class OEIJiraView.JiraIssueActor
	 * Size -> 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
	 */
	class AJiraIssueActor : public APooledActor
	{
	public:
		class FString                                              ID;                                                      // 0x0238(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     SceneComponent;                                          // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     ArrowMiddle;                                             // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UJiraIssueWidgetComponent*                           WidgetComponent;                                         // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UJiraIssueWidget*                                    Widget;                                                  // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIJiraView.JiraIssueWidget
	 * Size -> 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
	 */
	class UJiraIssueWidget : public UUserWidget
	{
	public:
		void OnSetTitle(const class FString& Text);
		void OnSetNoteTypeIcon(EJiraViewIssueType NoteType);
		void OnSetNotePriorityIcon(EJiraViewIssuePriority NoteType);
		void OnSetDescription(const class FString& Text);
		void OnSetBackgroundColor(const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIJiraView.JiraIssueWidgetComponent
	 * Size -> 0x0000 (FullSize[0x05D0] - InheritedSize[0x05D0])
	 */
	class UJiraIssueWidgetComponent : public UWidgetComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIJiraView.OEIJiraViewSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOEIJiraViewSettings : public UObject
	{
	public:
		int32_t                                                    JiraIssueActorPoolSize;                                  // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M17Y[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
