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
	 * 		Name   -> PredefinedFunction UOEIVoiceOverActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverBPLibrary.StopVoiceOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOEIVoiceOverBPLibrary::StopVoiceOver(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverBPLibrary.StopVoiceOver");
		
		UOEIVoiceOverBPLibrary_StopVoiceOver_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverBPLibrary.ResumeVoiceOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOEIVoiceOverBPLibrary::ResumeVoiceOver(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverBPLibrary.ResumeVoiceOver");
		
		UOEIVoiceOverBPLibrary_ResumeVoiceOver_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverBPLibrary.PlayVoiceOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoiceOverData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PlaybackStarted                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UOEIVoiceOverBPLibrary::PlayVoiceOver(class AActor* Actor, const struct FVoiceOverData& Data, float StartTime, const class FScriptDelegate& PlaybackStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverBPLibrary.PlayVoiceOver");
		
		UOEIVoiceOverBPLibrary_PlayVoiceOver_Params params {};
		params.Actor = Actor;
		params.Data = Data;
		params.StartTime = StartTime;
		params.PlaybackStarted = PlaybackStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverBPLibrary.PauseVoiceOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOEIVoiceOverBPLibrary::PauseVoiceOver(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverBPLibrary.PauseVoiceOver");
		
		UOEIVoiceOverBPLibrary_PauseVoiceOver_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIVoiceOverBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverComponent.Stop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeOutDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIVoiceOverComponent::Stop(float FadeOutDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverComponent.Stop");
		
		UOEIVoiceOverComponent_Stop_Params params {};
		params.FadeOutDuration = FadeOutDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverComponent.Resume
	 * 		Flags  -> ()
	 */
	void UOEIVoiceOverComponent::Resume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverComponent.Resume");
		
		UOEIVoiceOverComponent_Resume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverComponent.Prepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoiceOverData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              LoadingFinished                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOEIVoiceOverComponent::Prepare(const struct FVoiceOverData& Data, const class FScriptDelegate& LoadingFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverComponent.Prepare");
		
		UOEIVoiceOverComponent_Prepare_Params params {};
		params.Data = Data;
		params.LoadingFinished = LoadingFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverComponent.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoiceOverData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PlaybackStarted                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOEIVoiceOverComponent::Play(const struct FVoiceOverData& Data, float StartTime, const class FScriptDelegate& PlaybackStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverComponent.Play");
		
		UOEIVoiceOverComponent_Play_Params params {};
		params.Data = Data;
		params.StartTime = StartTime;
		params.PlaybackStarted = PlaybackStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverComponent.Pause
	 * 		Flags  -> ()
	 */
	void UOEIVoiceOverComponent::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverComponent.Pause");
		
		UOEIVoiceOverComponent_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIVoiceOver.OEIVoiceOverComponent.CancelPrepared
	 * 		Flags  -> ()
	 */
	void UOEIVoiceOverComponent::CancelPrepared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIVoiceOver.OEIVoiceOverComponent.CancelPrepared");
		
		UOEIVoiceOverComponent_CancelPrepared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIVoiceOverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIVoiceOverManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIVoiceOverSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIVoiceOverSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIVoiceOverTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIVoiceOverTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIVoiceOver.OEIVoiceOverTrack");
		return ptr;
	}

}


