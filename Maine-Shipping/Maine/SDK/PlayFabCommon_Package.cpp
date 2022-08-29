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
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayFabAuthenticationContext::SetPlayFabId(const class FString& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId");
		
		UPlayFabAuthenticationContext_SetPlayFabId_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayFabAuthenticationContext::SetEntityToken(const class FString& InToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken");
		
		UPlayFabAuthenticationContext_SetEntityToken_Params params {};
		params.InToken = InToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const class FString& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey");
		
		UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InTicket                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayFabAuthenticationContext::SetClientSessionTicket(const class FString& InTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket");
		
		UPlayFabAuthenticationContext_SetClientSessionTicket_Params params {};
		params.InTicket = InTicket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
	 * 		Flags  -> ()
	 */
	class FString UPlayFabAuthenticationContext::GetPlayFabId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId");
		
		UPlayFabAuthenticationContext_GetPlayFabId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
	 * 		Flags  -> ()
	 */
	class FString UPlayFabAuthenticationContext::GetEntityToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken");
		
		UPlayFabAuthenticationContext_GetEntityToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
	 * 		Flags  -> ()
	 */
	class FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey");
		
		UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
	 * 		Flags  -> ()
	 */
	class FString UPlayFabAuthenticationContext::GetClientSessionTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket");
		
		UPlayFabAuthenticationContext_GetClientSessionTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
	 * 		Flags  -> ()
	 */
	void UPlayFabAuthenticationContext::ForgetAllCredentials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials");
		
		UPlayFabAuthenticationContext_ForgetAllCredentials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
	 * 		Flags  -> ()
	 */
	void UPlayFabAuthenticationContext::ClientAdminSecurityCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck");
		
		UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayFabAuthenticationContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayFabAuthenticationContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PlayFabCommon.PlayFabAuthenticationContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayFabRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayFabRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PlayFabCommon.PlayFabRuntimeSettings");
		return ptr;
	}

}


