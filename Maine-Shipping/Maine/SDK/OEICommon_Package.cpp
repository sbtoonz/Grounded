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
	 * 		Name   -> PredefinedFunction UShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.Shape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.BoxShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCapsuleShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCapsuleShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.CapsuleShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIWorldRuntimeSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIWorldRuntimeSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.OEIWorldRuntimeSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameObjectRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameObjectRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.GameObjectRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.ObsidianIDComponent.ResetID
	 * 		Flags  -> ()
	 */
	void UObsidianIDComponent::ResetID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.ObsidianIDComponent.ResetID");
		
		UObsidianIDComponent_ResetID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObsidianIDComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObsidianIDComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.ObsidianIDComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEICommonProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEICommonProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.OEICommonProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.OEIUtilitiesLibrary.GetLoadedSubLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UOEIUtilitiesLibrary::GetLoadedSubLevels(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.OEIUtilitiesLibrary.GetLoadedSubLevels");
		
		UOEIUtilitiesLibrary_GetLoadedSubLevels_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.OEIUtilitiesLibrary.ExecuteConsoleCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIUtilitiesLibrary::ExecuteConsoleCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.OEIUtilitiesLibrary.ExecuteConsoleCommand");
		
		UOEIUtilitiesLibrary_ExecuteConsoleCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.OEIUtilitiesLibrary.DoesMapExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOEIUtilitiesLibrary::DoesMapExist(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.OEIUtilitiesLibrary.DoesMapExist");
		
		UOEIUtilitiesLibrary_DoesMapExist_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.OEIUtilitiesLibrary.CameraLookAtActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraPos                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutCameraRot                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOEIUtilitiesLibrary::CameraLookAtActor(TArray<class AActor*> Actors, struct FVector* OutCameraPos, struct FRotator* OutCameraRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.OEIUtilitiesLibrary.CameraLookAtActor");
		
		UOEIUtilitiesLibrary_CameraLookAtActor_Params params {};
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraPos != nullptr)
			*OutCameraPos = params.OutCameraPos;
		if (OutCameraRot != nullptr)
			*OutCameraRot = params.OutCameraRot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIUtilitiesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIUtilitiesLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.OEIUtilitiesLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.OEIWorldRuntime.GetOEIWorldRuntime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOEIWorldRuntime* UOEIWorldRuntime::GetOEIWorldRuntime(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.OEIWorldRuntime.GetOEIWorldRuntime");
		
		UOEIWorldRuntime_GetOEIWorldRuntime_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIWorldRuntime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIWorldRuntime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.OEIWorldRuntime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.PooledActor.IsSpawned
	 * 		Flags  -> ()
	 */
	bool APooledActor::IsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.PooledActor.IsSpawned");
		
		APooledActor_IsSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.PooledActor.Deactivate
	 * 		Flags  -> ()
	 */
	void APooledActor::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.PooledActor.Deactivate");
		
		APooledActor_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEICommon.PooledActor.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reconstruct                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APooledActor::Activate(bool Reconstruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEICommon.PooledActor.Activate");
		
		APooledActor_Activate_Params params {};
		params.Reconstruct = Reconstruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APooledActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APooledActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.PooledActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICommon.SphereShape");
		return ptr;
	}

}


