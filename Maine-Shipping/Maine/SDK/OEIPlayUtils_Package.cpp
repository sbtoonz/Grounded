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
	 * 		Name   -> Function OEIPlayUtils.OEIPlayUtilsSubsystem.OnWorldBeginPlay
	 * 		Flags  -> ()
	 */
	void UOEIPlayUtilsSubsystem::OnWorldBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPlayUtils.OEIPlayUtilsSubsystem.OnWorldBeginPlay");
		
		UOEIPlayUtilsSubsystem_OnWorldBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPlayUtils.OEIPlayUtilsSubsystem.ExecuteConsoleCommandsFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIPlayUtilsSubsystem::ExecuteConsoleCommandsFromFile(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPlayUtils.OEIPlayUtilsSubsystem.ExecuteConsoleCommandsFromFile");
		
		UOEIPlayUtilsSubsystem_ExecuteConsoleCommandsFromFile_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPlayUtils.OEIPlayUtilsSubsystem.ExecuteBeginPlayCommands
	 * 		Flags  -> ()
	 */
	void UOEIPlayUtilsSubsystem::ExecuteBeginPlayCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPlayUtils.OEIPlayUtilsSubsystem.ExecuteBeginPlayCommands");
		
		UOEIPlayUtilsSubsystem_ExecuteBeginPlayCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPlayUtils.OEIPlayUtilsSubsystem.DisplayAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIPlayUtilsSubsystem::DisplayAspectRatio(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPlayUtils.OEIPlayUtilsSubsystem.DisplayAspectRatio");
		
		UOEIPlayUtilsSubsystem_DisplayAspectRatio_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIPlayUtilsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIPlayUtilsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPlayUtils.OEIPlayUtilsSubsystem");
		return ptr;
	}

}


