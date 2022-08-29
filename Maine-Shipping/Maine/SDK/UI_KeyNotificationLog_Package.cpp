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
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreatePartyUpgradePurchasedNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PartyUpgradeNotification_C*              Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreatePartyUpgradePurchasedNotification(class UUI_PartyUpgradeNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreatePartyUpgradePurchasedNotification");
		
		UUI_KeyNotificationLog_C_CreatePartyUpgradePurchasedNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateBulkRecipesUnlockedNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BulkRecipeUnlockNotification_C*          Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateBulkRecipesUnlockedNotification(class UUI_BulkRecipeUnlockNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateBulkRecipesUnlockedNotification");
		
		UUI_KeyNotificationLog_C_CreateBulkRecipesUnlockedNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.AddToIconQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseNotification_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::AddToIconQueue(class UUI_BaseNotification_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.AddToIconQueue");
		
		UUI_KeyNotificationLog_C_AddToIconQueue_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_KeyNotificationLog_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.GetHeaderColor");
		
		UUI_KeyNotificationLog_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.PlayMoreDetailsNotification
	 * 		Flags  -> ()
	 */
	void UUI_KeyNotificationLog_C::PlayMoreDetailsNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.PlayMoreDetailsNotification");
		
		UUI_KeyNotificationLog_C_PlayMoreDetailsNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.InsertNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseNotification_C*                      Notification                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::InsertNotification(class UUI_BaseNotification_C* Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.InsertNotification");
		
		UUI_KeyNotificationLog_C_InsertNotification_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateMapPuzzlePieceNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MapPuzzlePieceNotification_C*            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateMapPuzzlePieceNotification(class UUI_MapPuzzlePieceNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateMapPuzzlePieceNotification");
		
		UUI_KeyNotificationLog_C_CreateMapPuzzlePieceNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateResourceResearchedNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ResourceResearchedNotification_C*        Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateResourceResearchedNotification(class UUI_ResourceResearchedNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateResourceResearchedNotification");
		
		UUI_KeyNotificationLog_C_CreateResourceResearchedNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateRecipeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RecipeNotification_C*                    Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateRecipeNotification(class UUI_RecipeNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateRecipeNotification");
		
		UUI_KeyNotificationLog_C_CreateRecipeNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateColorThemeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ColorThemeNotification_C*                Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateColorThemeNotification(class UUI_ColorThemeNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateColorThemeNotification");
		
		UUI_KeyNotificationLog_C_CreateColorThemeNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreatePointOfInterestNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PointOfInterestNotificationFriend_C*     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreatePointOfInterestNotification(class UUI_PointOfInterestNotificationFriend_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreatePointOfInterestNotification");
		
		UUI_KeyNotificationLog_C_CreatePointOfInterestNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateTechTreeUnlockNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TechTreeUnlockedNotification_C*          Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateTechTreeUnlockNotification(class UUI_TechTreeUnlockedNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateTechTreeUnlockNotification");
		
		UUI_KeyNotificationLog_C_CreateTechTreeUnlockNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateResourceNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ResourceNotification_C*                  Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateResourceNotification(class UUI_ResourceNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateResourceNotification");
		
		UUI_KeyNotificationLog_C_CreateResourceNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateKeyItemNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyItemNotification_C*                   Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateKeyItemNotification(class UUI_KeyItemNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateKeyItemNotification");
		
		UUI_KeyNotificationLog_C_CreateKeyItemNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateAndAddNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WidgetClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseNotification_C*                      Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::CreateAndAddNotification(class UClass* WidgetClass, class UUI_BaseNotification_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateAndAddNotification");
		
		UUI_KeyNotificationLog_C_CreateAndAddNotification_Params params {};
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_KeyNotificationLog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.Construct");
		
		UUI_KeyNotificationLog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.Tick");
		
		UUI_KeyNotificationLog_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.BindDelegate
	 * 		Flags  -> ()
	 */
	void UUI_KeyNotificationLog_C::BindDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.BindDelegate");
		
		UUI_KeyNotificationLog_C_BindDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.HandleKeyItemNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         KeyItemRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_KeyNotificationLog_C::HandleKeyItemNotification(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.HandleKeyItemNotification");
		
		UUI_KeyNotificationLog_C_HandleKeyItemNotification_Params params {};
		params.KeyItemRowHandle = KeyItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.PlayMoreDetailsAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ReferencedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_KeyNotificationLog_C::PlayMoreDetailsAnimation(const struct FDataTableRowHandle& ReferencedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.PlayMoreDetailsAnimation");
		
		UUI_KeyNotificationLog_C_PlayMoreDetailsAnimation_Params params {};
		params.ReferencedItem = ReferencedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.EndMoreDetailsAnimation
	 * 		Flags  -> ()
	 */
	void UUI_KeyNotificationLog_C::EndMoreDetailsAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.EndMoreDetailsAnimation");
		
		UUI_KeyNotificationLog_C_EndMoreDetailsAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.UpdateAniumation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::UpdateAniumation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.UpdateAniumation");
		
		UUI_KeyNotificationLog_C_UpdateAniumation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnNewRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::OnNewRecipe(const struct FDataTableRowHandle& RecipeRowHandle, class ASurvivalPlayerState* AcquirerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnNewRecipe");
		
		UUI_KeyNotificationLog_C_OnNewRecipe_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnTechTreeUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TechTreeRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        UnlockerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::OnTechTreeUnlocked(const struct FDataTableRowHandle& TechTreeRowHandle, class ASurvivalPlayerState* UnlockerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnTechTreeUnlocked");
		
		UUI_KeyNotificationLog_C_OnTechTreeUnlocked_Params params {};
		params.TechTreeRowHandle = TechTreeRowHandle;
		params.UnlockerPlayerState = UnlockerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_KeyNotificationLog_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnGlobalColorChange");
		
		UUI_KeyNotificationLog_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnPointOfInterestDiscovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPointOfInterestDataAsset*                   PointOfInterest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        UnlockerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::OnPointOfInterestDiscovered(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* UnlockerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnPointOfInterestDiscovered");
		
		UUI_KeyNotificationLog_C_OnPointOfInterestDiscovered_Params params {};
		params.PointOfInterest = PointOfInterest;
		params.UnlockerPlayerState = UnlockerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnNewResourceKnown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_KeyNotificationLog_C::OnNewResourceKnown(const struct FDataTableRowHandle& ItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnNewResourceKnown");
		
		UUI_KeyNotificationLog_C_OnNewResourceKnown_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnColorThemeDiscovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Theme                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        UnlockerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::OnColorThemeDiscovered(class UClass* Theme, class ASurvivalPlayerState* UnlockerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnColorThemeDiscovered");
		
		UUI_KeyNotificationLog_C_OnColorThemeDiscovered_Params params {};
		params.Theme = Theme;
		params.UnlockerPlayerState = UnlockerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnResourceResearched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_KeyNotificationLog_C::OnResourceResearched(const struct FDataTableRowHandle& ItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnResourceResearched");
		
		UUI_KeyNotificationLog_C_OnResourceResearched_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnUnlockedPuzzlePieceZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapComponent*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        Unlocker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         UnlockedPuzzlePieceZone                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UUI_KeyNotificationLog_C::OnUnlockedPuzzlePieceZone(class UMapComponent* Sender, class ASurvivalPlayerState* Unlocker, const struct FDataTableRowHandle& UnlockedPuzzlePieceZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnUnlockedPuzzlePieceZone");
		
		UUI_KeyNotificationLog_C_OnUnlockedPuzzlePieceZone_Params params {};
		params.Sender = Sender;
		params.Unlocker = Unlocker;
		params.UnlockedPuzzlePieceZone = UnlockedPuzzlePieceZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnBulkRecipesUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FDataTableRowHandle>                 RecipeRowHandles                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERecipeUnlockSource                                RecipeUnlockSource                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::OnBulkRecipesUnlocked(TArray<struct FDataTableRowHandle> RecipeRowHandles, class ASurvivalPlayerState* AcquirerPlayerState, ERecipeUnlockSource RecipeUnlockSource, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnBulkRecipesUnlocked");
		
		UUI_KeyNotificationLog_C_OnBulkRecipesUnlocked_Params params {};
		params.RecipeRowHandles = RecipeRowHandles;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipeUnlockSource = RecipeUnlockSource;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnItemStackUpgradePurchased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                StackTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        AquirerPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::OnItemStackUpgradePurchased(const struct FGameplayTag& StackTag, class ASurvivalPlayerState* AquirerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnItemStackUpgradePurchased");
		
		UUI_KeyNotificationLog_C_OnItemStackUpgradePurchased_Params params {};
		params.StackTag = StackTag;
		params.AquirerPlayerState = AquirerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.ExecuteUbergraph_UI_KeyNotificationLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyNotificationLog_C::ExecuteUbergraph_UI_KeyNotificationLog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.ExecuteUbergraph_UI_KeyNotificationLog");
		
		UUI_KeyNotificationLog_C_ExecuteUbergraph_UI_KeyNotificationLog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KeyNotificationLog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KeyNotificationLog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KeyNotificationLog.UI_KeyNotificationLog_C");
		return ptr;
	}

}


