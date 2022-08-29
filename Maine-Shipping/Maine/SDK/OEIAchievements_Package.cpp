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
	 * 		Name   -> PredefinedFunction UAchievementsBundle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementsBundle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIAchievements.AchievementsBundle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIAchievements.OEIAchievementLibrary.MakeAchievementReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAchievementReference UOEIAchievementLibrary::MakeAchievementReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIAchievements.OEIAchievementLibrary.MakeAchievementReference");
		
		UOEIAchievementLibrary_MakeAchievementReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIAchievements.OEIAchievementLibrary.GetAchievementID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAchievementReference                       Achievement                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOEIAchievementLibrary::GetAchievementID(const struct FAchievementReference& Achievement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIAchievements.OEIAchievementLibrary.GetAchievementID");
		
		UOEIAchievementLibrary_GetAchievementID_Params params {};
		params.Achievement = Achievement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIAchievementLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIAchievementLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIAchievements.OEIAchievementLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIAchievementSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIAchievementSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIAchievements.OEIAchievementSettings");
		return ptr;
	}

}


