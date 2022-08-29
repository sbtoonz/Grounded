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
	 * 		Name   -> Function OEIText.OEITextLibrary.MakeLocString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StringTableID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StringID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLocString UOEITextLibrary::MakeLocString(int32_t StringTableID, int32_t StringID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIText.OEITextLibrary.MakeLocString");
		
		UOEITextLibrary_MakeLocString_Params params {};
		params.StringTableID = StringTableID;
		params.StringID = StringID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIText.OEITextLibrary.GetLocStringText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  LocString                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOEITextLibrary::GetLocStringText(const struct FLocString& LocString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIText.OEITextLibrary.GetLocStringText");
		
		UOEITextLibrary_GetLocStringText_Params params {};
		params.LocString = LocString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEITextLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEITextLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIText.OEITextLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEITextSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEITextSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIText.OEITextSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStringTableBundleSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStringTableBundleSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIText.StringTableBundleSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStringTokensBundle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStringTokensBundle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIText.StringTokensBundle");
		return ptr;
	}

}


