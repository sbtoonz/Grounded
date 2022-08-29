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
	 * BlueprintGeneratedClass GlobalColorTheme_Base.GlobalColorTheme_Base_C
	 * Size -> 0x1838 (FullSize[0x1868] - InheritedSize[0x0030])
	 */
	class UGlobalColorTheme_Base_C : public UGlobalColorTheme
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGlobalColorList                                    GlobalColorList;                                         // 0x0038(0x0370) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGlobalColorList                                    DeuteranopiaColorOverrides;                              // 0x03A8(0x0370) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGlobalColorList                                    ProtanopiaColorOverrides;                                // 0x0718(0x0370) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGlobalColorList                                    TritanopiaColorOverrides;                                // 0x0A88(0x0370) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              IdName;                                                  // 0x0DF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0E08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FGlobalColorList                                    DeuteranopiaCache;                                       // 0x0E18(0x0370) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FGlobalColorList                                    ProtanopiaCache;                                         // 0x1188(0x0370) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FGlobalColorList                                    TritanopiaCache;                                         // 0x14F8(0x0370) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash

	public:
		void ProduceColorblindCache(const struct FGlobalColorList& Base, const class FName& OverridesName, struct FGlobalColorList* Cache, const class FName& CacheName);
		void GetGlobalColor(EGlobalColor GlobalColor, EColorBlindModeSettings ColorblindMode, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor);
		void ProduceColorblindCaches();
		void ExecuteUbergraph_GlobalColorTheme_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
