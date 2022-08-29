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
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetRadialBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ChatWheelRadialMenu_C::GetRadialBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetRadialBGColor");
		
		UUI_ChatWheelRadialMenu_C_GetRadialBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetCategoryIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatWheelRadialMenu_C::GetCategoryIcon(int32_t Category, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetCategoryIcon");
		
		UUI_ChatWheelRadialMenu_C_GetCategoryIcon_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.SetupChatOptionsForCategory
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::SetupChatOptionsForCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.SetupChatOptionsForCategory");
		
		UUI_ChatWheelRadialMenu_C_SetupChatOptionsForCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetPageCountForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatWheelRadialMenu_C::GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetPageCountForCategory");
		
		UUI_ChatWheelRadialMenu_C_GetPageCountForCategory_Params params {};
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.PopulateChatCategories
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::PopulateChatCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.PopulateChatCategories");
		
		UUI_ChatWheelRadialMenu_C_PopulateChatCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Populate
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Populate");
		
		UUI_ChatWheelRadialMenu_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.CreateInitialSlots
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::CreateInitialSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.CreateInitialSlots");
		
		UUI_ChatWheelRadialMenu_C_CreateInitialSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.PopulateCategories
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::PopulateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.PopulateCategories");
		
		UUI_ChatWheelRadialMenu_C_PopulateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatWheelRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Tick");
		
		UUI_ChatWheelRadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Construct");
		
		UUI_ChatWheelRadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ChatWheelRadialMenu_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.OnGlobalColorChange");
		
		UUI_ChatWheelRadialMenu_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.ExecuteUbergraph_UI_ChatWheelRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatWheelRadialMenu_C::ExecuteUbergraph_UI_ChatWheelRadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.ExecuteUbergraph_UI_ChatWheelRadialMenu");
		
		UUI_ChatWheelRadialMenu_C_ExecuteUbergraph_UI_ChatWheelRadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ChatWheelRadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ChatWheelRadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C");
		return ptr;
	}

}


