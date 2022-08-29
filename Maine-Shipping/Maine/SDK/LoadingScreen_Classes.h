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
	 * Class LoadingScreen.LoadingScreenModuleHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULoadingScreenModuleHelper : public UBlueprintFunctionLibrary
	{
	public:
		void StopLoadingScreen();
		static UClass* StaticClass();
	};

	/**
	 * Class LoadingScreen.LoadingScreenSettings
	 * Size -> 0x01A8 (FullSize[0x01E0] - InheritedSize[0x0038])
	 */
	class ULoadingScreenSettings : public UDeveloperSettings
	{
	public:
		struct FLoadingScreenDescription                           StartupScreen;                                           // 0x0038(0x0050) Edit, Config, NativeAccessSpecifierPublic
		struct FLoadingScreenDescription                           DefaultScreen;                                           // 0x0088(0x0050) Edit, Config, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      TipFont;                                                 // 0x00D8(0x0058) Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      LoadingFont;                                             // 0x0130(0x0058) Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TipWrapAt;                                               // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UH47[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        Tips;                                                    // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FSlateColor                                         FontColor;                                               // 0x01A0(0x0028) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		EVerticalAlignment                                         ContentContainerVertAlignment;                           // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9W6N[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             ContentContainerMargin;                                  // 0x01CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHSG[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
