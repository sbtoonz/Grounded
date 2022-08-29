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
	 * 		Name   -> Function OEIScripting.ConditionalLibrary.MakeGlobalConditionalReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGlobalConditionalReference UConditionalLibrary::MakeGlobalConditionalReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ConditionalLibrary.MakeGlobalConditionalReference");
		
		UConditionalLibrary_MakeGlobalConditionalReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ConditionalLibrary.GetGlobalConditionalID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGlobalConditionalReference                 GlobalConditional                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UConditionalLibrary::GetGlobalConditionalID(const struct FGlobalConditionalReference& GlobalConditional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ConditionalLibrary.GetGlobalConditionalID");
		
		UConditionalLibrary_GetGlobalConditionalID_Params params {};
		params.GlobalConditional = GlobalConditional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.ConditionalLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.ScriptEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ScriptLibrary.MakeGlobalScriptReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGlobalScriptReference UScriptLibrary::MakeGlobalScriptReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ScriptLibrary.MakeGlobalScriptReference");
		
		UScriptLibrary_MakeGlobalScriptReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ScriptLibrary.GetGlobalScriptID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGlobalScriptReference                      GlobalScript                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UScriptLibrary::GetGlobalScriptID(const struct FGlobalScriptReference& GlobalScript)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ScriptLibrary.GetGlobalScriptID");
		
		UScriptLibrary_GetGlobalScriptID_Params params {};
		params.GlobalScript = GlobalScript;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.ScriptLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ConditionalLibraryScripting.CallGlobalConditional
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       GlobalScriptID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConditionalLibraryScripting::CallGlobalConditional(const struct FGuid& GlobalScriptID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ConditionalLibraryScripting.CallGlobalConditional");
		
		UConditionalLibraryScripting_CallGlobalConditional_Params params {};
		params.GlobalScriptID = GlobalScriptID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ConditionalLibraryScripting.AlwaysTrue
	 * 		Flags  -> ()
	 */
	bool UConditionalLibraryScripting::AlwaysTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ConditionalLibraryScripting.AlwaysTrue");
		
		UConditionalLibraryScripting_AlwaysTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ConditionalLibraryScripting.AlwaysFalse
	 * 		Flags  -> ()
	 */
	bool UConditionalLibraryScripting::AlwaysFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ConditionalLibraryScripting.AlwaysFalse");
		
		UConditionalLibraryScripting_AlwaysFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalLibraryScripting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalLibraryScripting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.ConditionalLibraryScripting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalScriptsBundle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalScriptsBundle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.GlobalScriptsBundle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIScriptingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIScriptingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.OEIScriptingSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ScriptLibraryScripting.DebugPrintMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptLibraryScripting::DebugPrintMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ScriptLibraryScripting.DebugPrintMessage");
		
		UScriptLibraryScripting_DebugPrintMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ScriptLibraryScripting.CallGlobalScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       GlobalScriptID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptLibraryScripting::CallGlobalScript(const struct FGuid& GlobalScriptID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ScriptLibraryScripting.CallGlobalScript");
		
		UScriptLibraryScripting_CallGlobalScript_Params params {};
		params.GlobalScriptID = GlobalScriptID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ScriptLibraryScripting.AddDataAssetHardRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DataAsset                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptLibraryScripting::AddDataAssetHardRef(const class FString& DataAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ScriptLibraryScripting.AddDataAssetHardRef");
		
		UScriptLibraryScripting_AddDataAssetHardRef_Params params {};
		params.DataAsset = DataAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIScripting.ScriptLibraryScripting.AddClassHardRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Class                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptLibraryScripting::AddClassHardRef(const class FString& Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIScripting.ScriptLibraryScripting.AddClassHardRef");
		
		UScriptLibraryScripting_AddClassHardRef_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptLibraryScripting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptLibraryScripting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIScripting.ScriptLibraryScripting");
		return ptr;
	}

}


