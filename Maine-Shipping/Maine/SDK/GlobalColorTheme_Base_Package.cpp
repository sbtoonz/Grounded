/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ProduceColorblindCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGlobalColorList                            Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OverridesName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGlobalColorList                            Cache                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CacheName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalColorTheme_Base_C::ProduceColorblindCache(const struct FGlobalColorList& Base, const class FName& OverridesName, struct FGlobalColorList* Cache, const class FName& CacheName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ProduceColorblindCache");
		
		UGlobalColorTheme_Base_C_ProduceColorblindCache_Params params {};
		params.Base = Base;
		params.OverridesName = OverridesName;
		params.CacheName = CacheName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cache != nullptr)
			*Cache = params.Cache;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.GetGlobalColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGlobalColor                                       GlobalColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EColorBlindModeSettings                            ColorblindMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UGlobalColorTheme_Base_C::GetGlobalColor(EGlobalColor GlobalColor, EColorBlindModeSettings ColorblindMode, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.GetGlobalColor");
		
		UGlobalColorTheme_Base_C_GetGlobalColor_Params params {};
		params.GlobalColor = GlobalColor;
		params.ColorblindMode = ColorblindMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinearColor != nullptr)
			*LinearColor = params.LinearColor;
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ProduceColorblindCaches
	 * 		Flags  -> ()
	 */
	void UGlobalColorTheme_Base_C::ProduceColorblindCaches()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ProduceColorblindCaches");
		
		UGlobalColorTheme_Base_C_ProduceColorblindCaches_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ExecuteUbergraph_GlobalColorTheme_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalColorTheme_Base_C::ExecuteUbergraph_GlobalColorTheme_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalColorTheme_Base.GlobalColorTheme_Base_C.ExecuteUbergraph_GlobalColorTheme_Base");
		
		UGlobalColorTheme_Base_C_ExecuteUbergraph_GlobalColorTheme_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalColorTheme_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalColorTheme_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalColorTheme_Base.GlobalColorTheme_Base_C");
		return ptr;
	}

}


