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
	 * 		Name   -> Function OEIPhotoMode.ColorGradingProfileData.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UColorGradingProfileData::IsValidIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.ColorGradingProfileData.IsValidIndex");
		
		UColorGradingProfileData_IsValidIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UColorGradingProfileData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorGradingProfileData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.ColorGradingProfileData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.TakePhoto
	 * 		Flags  -> ()
	 */
	void APhotoPawn::TakePhoto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.TakePhoto");
		
		APhotoPawn_TakePhoto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.SwapInputAxisBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldAxisName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewAxisName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool APhotoPawn::SwapInputAxisBinding(const class FName& OldAxisName, const class FName& NewAxisName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.SwapInputAxisBinding");
		
		APhotoPawn_SwapInputAxisBinding_Params params {};
		params.OldAxisName = OldAxisName;
		params.NewAxisName = NewAxisName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.RequestScreenshot
	 * 		Flags  -> ()
	 */
	void APhotoPawn::RequestScreenshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.RequestScreenshot");
		
		APhotoPawn_RequestScreenshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.OnPhotoTakenXbox
	 * 		Flags  -> ()
	 */
	void APhotoPawn::OnPhotoTakenXbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.OnPhotoTakenXbox");
		
		APhotoPawn_OnPhotoTakenXbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.OnPhotoTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Colors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void APhotoPawn::OnPhotoTaken(int32_t Width, int32_t Height, TArray<struct FColor> Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.OnPhotoTaken");
		
		APhotoPawn_OnPhotoTaken_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.Colors = Colors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.GetPhotoPawnType
	 * 		Flags  -> ()
	 */
	EPhotoPawnType APhotoPawn::GetPhotoPawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.GetPhotoPawnType");
		
		APhotoPawn_GetPhotoPawnType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.GetCameraLocation
	 * 		Flags  -> ()
	 */
	struct FVector APhotoPawn::GetCameraLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.GetCameraLocation");
		
		APhotoPawn_GetCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.GetCameraForwardVector
	 * 		Flags  -> ()
	 */
	struct FVector APhotoPawn::GetCameraForwardVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.GetCameraForwardVector");
		
		APhotoPawn_GetCameraForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.ExitPhotoMode
	 * 		Flags  -> ()
	 */
	void APhotoPawn::ExitPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.ExitPhotoMode");
		
		APhotoPawn_ExitPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.ChangeCameraType
	 * 		Flags  -> ()
	 */
	void APhotoPawn::ChangeCameraType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.ChangeCameraType");
		
		APhotoPawn_ChangeCameraType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoPawn.BrowsePhotos
	 * 		Flags  -> ()
	 */
	void APhotoPawn::BrowsePhotos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoPawn.BrowsePhotos");
		
		APhotoPawn_BrowsePhotos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APhotoPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhotoPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreeCamPhotoPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreeCamPhotoPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.FreeCamPhotoPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeCheckBoxBase.SetBrushes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InCheckedImage                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InUncheckedImage                                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InCheckedPressedImage                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InUncheckedPressedImage                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InHoveredFocusedCheckedImage                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InHoveredFocusedUncheckedImage                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeCheckBoxBase::SetBrushes(const struct FSlateBrush& InCheckedImage, const struct FSlateBrush& InUncheckedImage, const struct FSlateBrush& InCheckedPressedImage, const struct FSlateBrush& InUncheckedPressedImage, const struct FSlateBrush& InHoveredFocusedCheckedImage, const struct FSlateBrush& InHoveredFocusedUncheckedImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeCheckBoxBase.SetBrushes");
		
		UPhotoModeCheckBoxBase_SetBrushes_Params params {};
		params.InCheckedImage = InCheckedImage;
		params.InUncheckedImage = InUncheckedImage;
		params.InCheckedPressedImage = InCheckedPressedImage;
		params.InUncheckedPressedImage = InUncheckedPressedImage;
		params.InHoveredFocusedCheckedImage = InHoveredFocusedCheckedImage;
		params.InHoveredFocusedUncheckedImage = InHoveredFocusedUncheckedImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeCheckBoxBase.OnFocusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeCheckBoxBase::OnFocusChanged(bool HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeCheckBoxBase.OnFocusChanged");
		
		UPhotoModeCheckBoxBase_OnFocusChanged_Params params {};
		params.HasFocus = HasFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeCheckBoxBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeCheckBoxBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeCheckBoxBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComboBoxBase.SetBrushes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InNormalImage                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InHoveredFocusedImage                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 InPressedStyle                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComboBoxBase::SetBrushes(const struct FSlateBrush& InNormalImage, const struct FSlateBrush& InHoveredFocusedImage, const struct FSlateBrush& InPressedStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComboBoxBase.SetBrushes");
		
		UPhotoModeComboBoxBase_SetBrushes_Params params {};
		params.InNormalImage = InNormalImage;
		params.InHoveredFocusedImage = InHoveredFocusedImage;
		params.InPressedStyle = InPressedStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComboBoxBase.OnFocusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComboBoxBase::OnFocusChanged(bool HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComboBoxBase.OnFocusChanged");
		
		UPhotoModeComboBoxBase_OnFocusChanged_Params params {};
		params.HasFocus = HasFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeComboBoxBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeComboBoxBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeComboBoxBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.SpawnPoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ActivatingController                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       OriginalPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACharacter* UPhotoModeComponent::SpawnPoseableClone(class APlayerController* ActivatingController, class APawn* OriginalPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.SpawnPoseableClone");
		
		UPhotoModeComponent_SpawnPoseableClone_Params params {};
		params.ActivatingController = ActivatingController;
		params.OriginalPawn = OriginalPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerShowPoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PoseableClone                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerShowPoseableClone(class ACharacter* PoseableClone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerShowPoseableClone");
		
		UPhotoModeComponent_ServerShowPoseableClone_Params params {};
		params.PoseableClone = PoseableClone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerShowOriginalPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       OriginalPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerShowOriginalPawn(class APawn* OriginalPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerShowOriginalPawn");
		
		UPhotoModeComponent_ServerShowOriginalPawn_Params params {};
		params.OriginalPawn = OriginalPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerShowEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AssociatedTag                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerShowEquipment(class ACharacter* Character, const class FName& AssociatedTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerShowEquipment");
		
		UPhotoModeComponent_ServerShowEquipment_Params params {};
		params.Character = Character;
		params.AssociatedTag = AssociatedTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerSetPhotoModePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Clone                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerSetPhotoModePose(class ACharacter* Clone, class UAnimMontage* Montage, float BlendValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerSetPhotoModePose");
		
		UPhotoModeComponent_ServerSetPhotoModePose_Params params {};
		params.Clone = Clone;
		params.Montage = Montage;
		params.BlendValue = BlendValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerSetIsReadyToEnterPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ready                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerSetIsReadyToEnterPhotoMode(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerSetIsReadyToEnterPhotoMode");
		
		UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerPreSpawnPhotoModePoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       OriginalPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerPreSpawnPhotoModePoseableClone(class APawn* OriginalPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerPreSpawnPhotoModePoseableClone");
		
		UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Params params {};
		params.OriginalPawn = OriginalPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerPrePhotoModeEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerPrePhotoModeEntered(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerPrePhotoModeEntered");
		
		UPhotoModeComponent_ServerPrePhotoModeEntered_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerPostSpawnPhotoModePoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       OriginalPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACharacter*                                  Clone                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPhotoModeCharacterCollisionInfo            CollisionInfo                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerPostSpawnPhotoModePoseableClone(class APawn* OriginalPawn, class ACharacter* Clone, const struct FPhotoModeCharacterCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerPostSpawnPhotoModePoseableClone");
		
		UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Params params {};
		params.OriginalPawn = OriginalPawn;
		params.Clone = Clone;
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerPhotoModeSpawnPoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ActivatingController                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       OriginalPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerPhotoModeSpawnPoseableClone(class APlayerController* ActivatingController, class APawn* OriginalPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerPhotoModeSpawnPoseableClone");
		
		UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Params params {};
		params.ActivatingController = ActivatingController;
		params.OriginalPawn = OriginalPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerOnPostLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameModeBase*                               GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           NewPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerOnPostLogin(class AGameModeBase* GameMode, class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerOnPostLogin");
		
		UPhotoModeComponent_ServerOnPostLogin_Params params {};
		params.GameMode = GameMode;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerOnPhotoModeExited
	 * 		Flags  -> ()
	 */
	void UPhotoModeComponent::ServerOnPhotoModeExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerOnPhotoModeExited");
		
		UPhotoModeComponent_ServerOnPhotoModeExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerOnCharacterYawOffsetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerOnCharacterYawOffsetChanged(class AActor* Actor, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerOnCharacterYawOffsetChanged");
		
		UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Params params {};
		params.Actor = Actor;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerHidePoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PoseableClone                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerHidePoseableClone(class ACharacter* PoseableClone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerHidePoseableClone");
		
		UPhotoModeComponent_ServerHidePoseableClone_Params params {};
		params.PoseableClone = PoseableClone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerHideOriginalPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       OriginalPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerHideOriginalPawn(class APawn* OriginalPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerHideOriginalPawn");
		
		UPhotoModeComponent_ServerHideOriginalPawn_Params params {};
		params.OriginalPawn = OriginalPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerHideEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AssociatedTag                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerHideEquipment(class ACharacter* Character, const class FName& AssociatedTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerHideEquipment");
		
		UPhotoModeComponent_ServerHideEquipment_Params params {};
		params.Character = Character;
		params.AssociatedTag = AssociatedTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerExitPhotoModeAsGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerExitPhotoModeAsGroup(class APawn* InstigatingPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerExitPhotoModeAsGroup");
		
		UPhotoModeComponent_ServerExitPhotoModeAsGroup_Params params {};
		params.InstigatingPawn = InstigatingPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerEnterPhotoModeAsGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InstigatingController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerEnterPhotoModeAsGroup(class APlayerController* InstigatingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerEnterPhotoModeAsGroup");
		
		UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Params params {};
		params.InstigatingController = InstigatingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ServerDestroyPhotoModePoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Clone                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ServerDestroyPhotoModePoseableClone(class ACharacter* Clone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ServerDestroyPhotoModePoseableClone");
		
		UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Params params {};
		params.Clone = Clone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.MulticastSetPhotoModePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Clone                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::MulticastSetPhotoModePose(class ACharacter* Clone, class UAnimMontage* Montage, float BlendValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.MulticastSetPhotoModePose");
		
		UPhotoModeComponent_MulticastSetPhotoModePose_Params params {};
		params.Clone = Clone;
		params.Montage = Montage;
		params.BlendValue = BlendValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.MulticastSetEquipmentVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AssociatedTag                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::MulticastSetEquipmentVisibility(class ACharacter* Character, const class FName& AssociatedTag, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.MulticastSetEquipmentVisibility");
		
		UPhotoModeComponent_MulticastSetEquipmentVisibility_Params params {};
		params.Character = Character;
		params.AssociatedTag = AssociatedTag;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.MulticastSetCharacterVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::MulticastSetCharacterVisibility(class ACharacter* Character, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.MulticastSetCharacterVisibility");
		
		UPhotoModeComponent_MulticastSetCharacterVisibility_Params params {};
		params.Character = Character;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.MulticastOnCharacterYawOffsetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::MulticastOnCharacterYawOffsetChanged(class AActor* Actor, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.MulticastOnCharacterYawOffsetChanged");
		
		UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Params params {};
		params.Actor = Actor;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.MulticastExitPhotoModeAsGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::MulticastExitPhotoModeAsGroup(class APawn* InstigatingPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.MulticastExitPhotoModeAsGroup");
		
		UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Params params {};
		params.InstigatingPawn = InstigatingPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.MulticastEnterPhotoModeAsGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       InstigatingPossessedPawn                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::MulticastEnterPhotoModeAsGroup(class APawn* InstigatingPossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.MulticastEnterPhotoModeAsGroup");
		
		UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Params params {};
		params.InstigatingPossessedPawn = InstigatingPossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.IsPhotoModeEntryAllowed
	 * 		Flags  -> ()
	 */
	EPhotoModeEntryAllowedResult UPhotoModeComponent::IsPhotoModeEntryAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.IsPhotoModeEntryAllowed");
		
		UPhotoModeComponent_IsPhotoModeEntryAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.EnterPhotoMode
	 * 		Flags  -> ()
	 */
	void UPhotoModeComponent::EnterPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.EnterPhotoMode");
		
		UPhotoModeComponent_EnterPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ClientSetPoseableCloneOnMatchingClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           OwningController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACharacter*                                  InClone                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPhotoModeCharacterCollisionInfo            CollisionInfo                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ClientSetPoseableCloneOnMatchingClient(class APlayerController* OwningController, class ACharacter* InClone, const struct FPhotoModeCharacterCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ClientSetPoseableCloneOnMatchingClient");
		
		UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Params params {};
		params.OwningController = OwningController;
		params.InClone = InClone;
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ClientPrePhotoModeEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ClientPrePhotoModeEntered(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ClientPrePhotoModeEntered");
		
		UPhotoModeComponent_ClientPrePhotoModeEntered_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoPawnSetupInputs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APhotoPawn*                                  PhotoPawn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputComponent*                             InputComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ClientOnPhotoPawnSetupInputs(class APhotoPawn* PhotoPawn, class UInputComponent* InputComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoPawnSetupInputs");
		
		UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Params params {};
		params.PhotoPawn = PhotoPawn;
		params.InputComponent = InputComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeGroupEntryUnallowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeEntryAllowedResult                       Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ClientOnPhotoModeGroupEntryUnallowed(EPhotoModeEntryAllowedResult Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeGroupEntryUnallowed");
		
		UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeExited
	 * 		Flags  -> ()
	 */
	void UPhotoModeComponent::ClientOnPhotoModeExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeExited");
		
		UPhotoModeComponent_ClientOnPhotoModeExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APhotoPawn*                                  PhotoPawn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeComponent::ClientOnPhotoModeEntered(class APhotoPawn* PhotoPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeEntered");
		
		UPhotoModeComponent_ClientOnPhotoModeEntered_Params params {};
		params.PhotoPawn = PhotoPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeComponent.CheckIsReadyToEnterPhotoMode
	 * 		Flags  -> ()
	 */
	bool UPhotoModeComponent::CheckIsReadyToEnterPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeComponent.CheckIsReadyToEnterPhotoMode");
		
		UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeConfiguration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeConfiguration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeExportUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeExportUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeExportUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModePrePause
	 * 		Flags  -> ()
	 */
	void UPhotoModeHelperComponent::OnPhotoModePrePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModePrePause");
		
		UPhotoModeHelperComponent_OnPhotoModePrePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModePreEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeHelperComponent::OnPhotoModePreEntered(class APlayerController* InController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModePreEntered");
		
		UPhotoModeHelperComponent_OnPhotoModePreEntered_Params params {};
		params.InController = InController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModeExit
	 * 		Flags  -> ()
	 */
	void UPhotoModeHelperComponent::OnPhotoModeExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModeExit");
		
		UPhotoModeHelperComponent_OnPhotoModeExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeHelperComponent.ForceLOD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ForcedLOD                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeHelperComponent::ForceLOD(int32_t ForcedLOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeHelperComponent.ForceLOD");
		
		UPhotoModeHelperComponent_ForceLOD_Params params {};
		params.ForcedLOD = ForcedLOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeHelperComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeHelperComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeHelperComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModePoseData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModePoseData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModePoseData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.RefreshAllSettings
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingsBase::RefreshAllSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.RefreshAllSettings");
		
		UPhotoModeSettingsBase_RefreshAllSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GoToPreviousGroup
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingsBase::GoToPreviousGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GoToPreviousGroup");
		
		UPhotoModeSettingsBase_GoToPreviousGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GoToNextGroup
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingsBase::GoToNextGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GoToNextGroup");
		
		UPhotoModeSettingsBase_GoToNextGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GoToGroupByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingsBase::GoToGroupByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GoToGroupByIndex");
		
		UPhotoModeSettingsBase_GoToGroupByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GetSettingWidgetWithTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeSetting                                  Setting                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InAssociatedTag                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetSettingWidgetWithTag(EPhotoModeSetting Setting, const class FName& InAssociatedTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GetSettingWidgetWithTag");
		
		UPhotoModeSettingsBase_GetSettingWidgetWithTag_Params params {};
		params.Setting = Setting;
		params.InAssociatedTag = InAssociatedTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GetSettingWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeSetting                                  Setting                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetSettingWidget(EPhotoModeSetting Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GetSettingWidget");
		
		UPhotoModeSettingsBase_GetSettingWidget_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GetHoveredSetting
	 * 		Flags  -> ()
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetHoveredSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GetHoveredSetting");
		
		UPhotoModeSettingsBase_GetHoveredSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GetFocusedSetting
	 * 		Flags  -> ()
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetFocusedSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GetFocusedSetting");
		
		UPhotoModeSettingsBase_GetFocusedSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsBase.GetCurrentSettingsGroup
	 * 		Flags  -> ()
	 */
	class UPhotoModeSettingsGroupBase* UPhotoModeSettingsBase::GetCurrentSettingsGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsBase.GetCurrentSettingsGroup");
		
		UPhotoModeSettingsBase_GetCurrentSettingsGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSettingsData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSettingsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSettingsData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.RefreshAllSettings
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingsGroupBase::RefreshAllSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.RefreshAllSettings");
		
		UPhotoModeSettingsGroupBase_RefreshAllSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.IsHDRActive
	 * 		Flags  -> ()
	 */
	bool UPhotoModeSettingsGroupBase::IsHDRActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.IsHDRActive");
		
		UPhotoModeSettingsGroupBase_IsHDRActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.HasSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeSetting                                  Setting                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhotoModeSettingsGroupBase::HasSetting(EPhotoModeSetting Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.HasSetting");
		
		UPhotoModeSettingsGroupBase_HasSetting_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetSettingWidgetWithTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeSetting                                  Setting                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InAssociatedTag                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetSettingWidgetWithTag(EPhotoModeSetting Setting, const class FName& InAssociatedTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetSettingWidgetWithTag");
		
		UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Params params {};
		params.Setting = Setting;
		params.InAssociatedTag = InAssociatedTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeSetting                                  Setting                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetSetting(EPhotoModeSetting Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetSetting");
		
		UPhotoModeSettingsGroupBase_GetSetting_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetHoveredSetting
	 * 		Flags  -> ()
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetHoveredSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetHoveredSetting");
		
		UPhotoModeSettingsGroupBase_GetHoveredSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetFocusedSetting
	 * 		Flags  -> ()
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetFocusedSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetFocusedSetting");
		
		UPhotoModeSettingsGroupBase_GetFocusedSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetFirstSetting
	 * 		Flags  -> ()
	 */
	class UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetFirstSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetFirstSetting");
		
		UPhotoModeSettingsGroupBase_GetFirstSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSettingsGroupBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSettingsGroupBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSettingsGroupBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsInterface.UnregisterWithPhotoModeSubsystem
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingsInterface::UnregisterWithPhotoModeSubsystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsInterface.UnregisterWithPhotoModeSubsystem");
		
		UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingsInterface.RegisterWithPhotoModeSubsystem
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingsInterface::RegisterWithPhotoModeSubsystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingsInterface.RegisterWithPhotoModeSubsystem");
		
		UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSettingsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSettingsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSettingsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetValue");
		
		UPhotoModeSettingWidget_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetSelectedIndex");
		
		UPhotoModeSettingWidget_SetSelectedIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetEquipmentVisibilityForActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetEquipmentVisibilityForActor(class AActor* Actor, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetEquipmentVisibilityForActor");
		
		UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Params params {};
		params.Actor = Actor;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetEquipmentVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetEquipmentVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetEquipmentVisibility");
		
		UPhotoModeSettingWidget_SetEquipmentVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetEnabledState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetEnabledState(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetEnabledState");
		
		UPhotoModeSettingWidget_SetEnabledState_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetComboBoxOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLocString>                          InOptions                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetComboBoxOptions(TArray<struct FLocString> InOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetComboBoxOptions");
		
		UPhotoModeSettingWidget_SetComboBoxOptions_Params params {};
		params.InOptions = InOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.SetChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::SetChecked(ECheckBoxState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.SetChecked");
		
		UPhotoModeSettingWidget_SetChecked_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.RestorePrePhotoModeState
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingWidget::RestorePrePhotoModeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.RestorePrePhotoModeState");
		
		UPhotoModeSettingWidget_RestorePrePhotoModeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.RefreshSetting
	 * 		Flags  -> ()
	 */
	void UPhotoModeSettingWidget::RefreshSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.RefreshSetting");
		
		UPhotoModeSettingWidget_RefreshSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnSliderValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnSliderValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnSliderValueChanged");
		
		UPhotoModeSettingWidget_OnSliderValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedSlider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnSettingChangedSlider(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedSlider");
		
		UPhotoModeSettingWidget_OnSettingChangedSlider_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnSettingChangedComboBox(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedComboBox");
		
		UPhotoModeSettingWidget_OnSettingChangedComboBox_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedCheckBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChecked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnSettingChangedCheckBox(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedCheckBox");
		
		UPhotoModeSettingWidget_OnSettingChangedCheckBox_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnPhotoModeSettingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPhotoModeSettingWidget*                     ChangedSetting                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnPhotoModeSettingChanged(class UPhotoModeSettingWidget* ChangedSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnPhotoModeSettingChanged");
		
		UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Params params {};
		params.ChangedSetting = ChangedSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnFocusedHoveredChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FocusedOrHovered                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnFocusedHoveredChanged(bool FocusedOrHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnFocusedHoveredChanged");
		
		UPhotoModeSettingWidget_OnFocusedHoveredChanged_Params params {};
		params.FocusedOrHovered = FocusedOrHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.OnEnabledChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSettingWidget::OnEnabledChanged(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.OnEnabledChanged");
		
		UPhotoModeSettingWidget_OnEnabledChanged_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.IsInputHovered
	 * 		Flags  -> ()
	 */
	bool UPhotoModeSettingWidget::IsInputHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.IsInputHovered");
		
		UPhotoModeSettingWidget_IsInputHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.IsChecked
	 * 		Flags  -> ()
	 */
	bool UPhotoModeSettingWidget::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.IsChecked");
		
		UPhotoModeSettingWidget_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.GetValue
	 * 		Flags  -> ()
	 */
	float UPhotoModeSettingWidget::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.GetValue");
		
		UPhotoModeSettingWidget_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSettingWidget.GetSelectedIndex
	 * 		Flags  -> ()
	 */
	int32_t UPhotoModeSettingWidget::GetSelectedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSettingWidget.GetSelectedIndex");
		
		UPhotoModeSettingWidget_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSettingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSettingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSettingWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSliderBase.OnFocusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSliderBase::OnFocusChanged(bool HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSliderBase.OnFocusChanged");
		
		UPhotoModeSliderBase_OnFocusChanged_Params params {};
		params.HasFocus = HasFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSliderBase.OnCaptureEnd
	 * 		Flags  -> ()
	 */
	void UPhotoModeSliderBase::OnCaptureEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSliderBase.OnCaptureEnd");
		
		UPhotoModeSliderBase_OnCaptureEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSliderBase.OnCaptureBegin
	 * 		Flags  -> ()
	 */
	void UPhotoModeSliderBase::OnCaptureBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSliderBase.OnCaptureBegin");
		
		UPhotoModeSliderBase_OnCaptureBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSliderBase.HandleValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSliderBase::HandleValueChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSliderBase.HandleValueChanged");
		
		UPhotoModeSliderBase_HandleValueChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSliderBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSliderBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSliderBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.TakePhotoWithPhotoPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::TakePhotoWithPhotoPawn(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.TakePhotoWithPhotoPawn");
		
		UPhotoModeStatics_TakePhotoWithPhotoPawn_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetVignetteValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetVignetteValue(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetVignetteValue");
		
		UPhotoModeStatics_SetVignetteValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetTonemapperGamma
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetTonemapperGamma(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetTonemapperGamma");
		
		UPhotoModeStatics_SetTonemapperGamma_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetSceneFringeIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetSceneFringeIntensity(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetSceneFringeIntensity");
		
		UPhotoModeStatics_SetSceneFringeIntensity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetPhotoModeValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPhotoModeValues                            Values                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetPhotoModeValues(class UObject* WorldContextObject, const struct FPhotoModeValues& Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetPhotoModeValues");
		
		UPhotoModeStatics_SetPhotoModeValues_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetMotionBlurAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetMotionBlurAmount(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetMotionBlurAmount");
		
		UPhotoModeStatics_SetMotionBlurAmount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetFOV(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetFOV");
		
		UPhotoModeStatics_SetFOV_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetFilmGrainIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetFilmGrainIntensity(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetFilmGrainIntensity");
		
		UPhotoModeStatics_SetFilmGrainIntensity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetFilmbackWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetFilmbackWidth(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetFilmbackWidth");
		
		UPhotoModeStatics_SetFilmbackWidth_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetFilmbackHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetFilmbackHeight(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetFilmbackHeight");
		
		UPhotoModeStatics_SetFilmbackHeight_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetExponentialHeightFogViewDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetExponentialHeightFogViewDistance(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetExponentialHeightFogViewDistance");
		
		UPhotoModeStatics_SetExponentialHeightFogViewDistance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetDOFFstop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetDOFFstop(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetDOFFstop");
		
		UPhotoModeStatics_SetDOFFstop_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetDOFFocusDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetDOFFocusDistance(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetDOFFocusDistance");
		
		UPhotoModeStatics_SetDOFFocusDistance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetColorGradingProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColorGradingProfile                        Profile                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetColorGradingProfile(class UObject* WorldContextObject, const struct FColorGradingProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetColorGradingProfile");
		
		UPhotoModeStatics_SetColorGradingProfile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetColorGradingLUT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    ColorGradingLUT                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetColorGradingLUT(class UObject* WorldContextObject, class UTexture* ColorGradingLUT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetColorGradingLUT");
		
		UPhotoModeStatics_SetColorGradingLUT_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ColorGradingLUT = ColorGradingLUT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetColorGradingIntensityValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetColorGradingIntensityValue(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetColorGradingIntensityValue");
		
		UPhotoModeStatics_SetColorGradingIntensityValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetCameraRoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetCameraRoll(class UObject* WorldContextObject, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetCameraRoll");
		
		UPhotoModeStatics_SetCameraRoll_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.SetAnimMontagePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::SetAnimMontagePose(class ACharacter* Character, class UAnimMontage* AnimMontage, float BlendValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.SetAnimMontagePose");
		
		UPhotoModeStatics_SetAnimMontagePose_Params params {};
		params.Character = Character;
		params.AnimMontage = AnimMontage;
		params.BlendValue = BlendValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.OpenPhotoDirectoryInExplorer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::OpenPhotoDirectoryInExplorer(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.OpenPhotoDirectoryInExplorer");
		
		UPhotoModeStatics_OpenPhotoDirectoryInExplorer_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetVignetteValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetVignetteValue(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetVignetteValue");
		
		UPhotoModeStatics_GetVignetteValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetTonemapperGamma
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetTonemapperGamma(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetTonemapperGamma");
		
		UPhotoModeStatics_GetTonemapperGamma_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetSceneFringeIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetSceneFringeIntensity(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetSceneFringeIntensity");
		
		UPhotoModeStatics_GetSceneFringeIntensity_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetPhotoModeValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPhotoModeValues                            Values                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeStatics::GetPhotoModeValues(class UObject* WorldContextObject, struct FPhotoModeValues* Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetPhotoModeValues");
		
		UPhotoModeStatics_GetPhotoModeValues_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Values != nullptr)
			*Values = params.Values;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetOriginalPawnDistanceToCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetOriginalPawnDistanceToCamera(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetOriginalPawnDistanceToCamera");
		
		UPhotoModeStatics_GetOriginalPawnDistanceToCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetMotionBlurAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetMotionBlurAmount(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetMotionBlurAmount");
		
		UPhotoModeStatics_GetMotionBlurAmount_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetFOV(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetFOV");
		
		UPhotoModeStatics_GetFOV_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetFilmGrainIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetFilmGrainIntensity(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetFilmGrainIntensity");
		
		UPhotoModeStatics_GetFilmGrainIntensity_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetFilmbackWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetFilmbackWidth(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetFilmbackWidth");
		
		UPhotoModeStatics_GetFilmbackWidth_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetFilmbackHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetFilmbackHeight(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetFilmbackHeight");
		
		UPhotoModeStatics_GetFilmbackHeight_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetExponentialHeightFogViewDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetExponentialHeightFogViewDistance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetExponentialHeightFogViewDistance");
		
		UPhotoModeStatics_GetExponentialHeightFogViewDistance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetDOFFstop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetDOFFstop(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetDOFFstop");
		
		UPhotoModeStatics_GetDOFFstop_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetDOFFocusDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetDOFFocusDistance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetDOFFocusDistance");
		
		UPhotoModeStatics_GetDOFFocusDistance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetColorGradingProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColorGradingProfile UPhotoModeStatics::GetColorGradingProfile(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetColorGradingProfile");
		
		UPhotoModeStatics_GetColorGradingProfile_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetColorGradingLUT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UPhotoModeStatics::GetColorGradingLUT(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetColorGradingLUT");
		
		UPhotoModeStatics_GetColorGradingLUT_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetColorGradingIntensityValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetColorGradingIntensityValue(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetColorGradingIntensityValue");
		
		UPhotoModeStatics_GetColorGradingIntensityValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.GetCameraRoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPhotoModeStatics::GetCameraRoll(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.GetCameraRoll");
		
		UPhotoModeStatics_GetCameraRoll_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeStatics.ChangePhotoPawnType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APhotoPawn* UPhotoModeStatics::ChangePhotoPawnType(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeStatics.ChangePhotoPawnType");
		
		UPhotoModeStatics_ChangePhotoPawnType_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.ToggleTIme
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::ToggleTIme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.ToggleTIme");
		
		UPhotoModeSubsystem_ToggleTIme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.TogglePhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhotoModeSubsystem::TogglePhotoMode(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.TogglePhotoMode");
		
		UPhotoModeSubsystem_TogglePhotoMode_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.ShowPoseableClone
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::ShowPoseableClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.ShowPoseableClone");
		
		UPhotoModeSubsystem_ShowPoseableClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.ShowOriginalPawn
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::ShowOriginalPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.ShowOriginalPawn");
		
		UPhotoModeSubsystem_ShowOriginalPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.SetPoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  InClone                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSubsystem::SetPoseableClone(class ACharacter* InClone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.SetPoseableClone");
		
		UPhotoModeSubsystem_SetPoseableClone_Params params {};
		params.InClone = InClone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.SetPhotoModeQualityCVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSubsystem::SetPhotoModeQualityCVars(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.SetPhotoModeQualityCVars");
		
		UPhotoModeSubsystem_SetPhotoModeQualityCVars_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.SetPhotoModeConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPhotoModeConfig                            InConfig                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeSubsystem::SetPhotoModeConfig(struct FPhotoModeConfig* InConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.SetPhotoModeConfig");
		
		UPhotoModeSubsystem_SetPhotoModeConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InConfig != nullptr)
			*InConfig = params.InConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.ResumeTime
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::ResumeTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.ResumeTime");
		
		UPhotoModeSubsystem_ResumeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.PauseTime
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::PauseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.PauseTime");
		
		UPhotoModeSubsystem_PauseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.OnRequestExitPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhotoModeSubsystem::OnRequestExitPhotoMode(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.OnRequestExitPhotoMode");
		
		UPhotoModeSubsystem_OnRequestExitPhotoMode_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.OnRequestEnterPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPossessedPawn                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhotoModeSubsystem::OnRequestEnterPhotoMode(class APlayerController* PlayerController, class APawn* InstigatingPossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.OnRequestEnterPhotoMode");
		
		UPhotoModeSubsystem_OnRequestEnterPhotoMode_Params params {};
		params.PlayerController = PlayerController;
		params.InstigatingPossessedPawn = InstigatingPossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.IsTimePaused
	 * 		Flags  -> ()
	 */
	bool UPhotoModeSubsystem::IsTimePaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.IsTimePaused");
		
		UPhotoModeSubsystem_IsTimePaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.IsInPhotoMode
	 * 		Flags  -> ()
	 */
	bool UPhotoModeSubsystem::IsInPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.IsInPhotoMode");
		
		UPhotoModeSubsystem_IsInPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.HidePoseableClone
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::HidePoseableClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.HidePoseableClone");
		
		UPhotoModeSubsystem_HidePoseableClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.HideOriginalPawn
	 * 		Flags  -> ()
	 */
	void UPhotoModeSubsystem::HideOriginalPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.HideOriginalPawn");
		
		UPhotoModeSubsystem_HideOriginalPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetUIDelegatesObject
	 * 		Flags  -> ()
	 */
	class UPhotoModeUIDelegates* UPhotoModeSubsystem::GetUIDelegatesObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetUIDelegatesObject");
		
		UPhotoModeSubsystem_GetUIDelegatesObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPrePhotoModeSettingValues
	 * 		Flags  -> ()
	 */
	struct FPhotoModeValues UPhotoModeSubsystem::GetPrePhotoModeSettingValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPrePhotoModeSettingValues");
		
		UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPoseableClone
	 * 		Flags  -> ()
	 */
	class ACharacter* UPhotoModeSubsystem::GetPoseableClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPoseableClone");
		
		UPhotoModeSubsystem_GetPoseableClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoOutputPath
	 * 		Flags  -> ()
	 */
	class FString UPhotoModeSubsystem::GetPhotoOutputPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoOutputPath");
		
		UPhotoModeSubsystem_GetPhotoOutputPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeUIOptions
	 * 		Flags  -> ()
	 */
	struct FPhotoModeUIOptions UPhotoModeSubsystem::GetPhotoModeUIOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeUIOptions");
		
		UPhotoModeSubsystem_GetPhotoModeUIOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModePawn
	 * 		Flags  -> ()
	 */
	class APhotoPawn* UPhotoModeSubsystem::GetPhotoModePawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModePawn");
		
		UPhotoModeSubsystem_GetPhotoModePawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeMPC
	 * 		Flags  -> ()
	 */
	class UMaterialParameterCollection* UPhotoModeSubsystem::GetPhotoModeMPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeMPC");
		
		UPhotoModeSubsystem_GetPhotoModeMPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeGeneralOptions
	 * 		Flags  -> ()
	 */
	struct FPhotoModeGeneralOptions UPhotoModeSubsystem::GetPhotoModeGeneralOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeGeneralOptions");
		
		UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoBaseFilename
	 * 		Flags  -> ()
	 */
	class FString UPhotoModeSubsystem::GetPhotoBaseFilename()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoBaseFilename");
		
		UPhotoModeSubsystem_GetPhotoBaseFilename_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetOriginalPawn
	 * 		Flags  -> ()
	 */
	class APawn* UPhotoModeSubsystem::GetOriginalPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetOriginalPawn");
		
		UPhotoModeSubsystem_GetOriginalPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalPoseableClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACharacter* UPhotoModeSubsystem::GetGlobalPoseableClone(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalPoseableClone");
		
		UPhotoModeSubsystem_GetGlobalPoseableClone_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalPhotoModePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APhotoPawn* UPhotoModeSubsystem::GetGlobalPhotoModePawn(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalPhotoModePawn");
		
		UPhotoModeSubsystem_GetGlobalPhotoModePawn_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalOriginalPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UPhotoModeSubsystem::GetGlobalOriginalPawn(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalOriginalPawn");
		
		UPhotoModeSubsystem_GetGlobalOriginalPawn_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalActivatingPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerController* UPhotoModeSubsystem::GetGlobalActivatingPlayerController(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalActivatingPlayerController");
		
		UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.GetActivatingPlayerController
	 * 		Flags  -> ()
	 */
	class APlayerController* UPhotoModeSubsystem::GetActivatingPlayerController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.GetActivatingPlayerController");
		
		UPhotoModeSubsystem_GetActivatingPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.ExitPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhotoModeSubsystem::ExitPhotoMode(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.ExitPhotoMode");
		
		UPhotoModeSubsystem_ExitPhotoMode_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.EnterPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhotoModeSubsystem::EnterPhotoMode(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.EnterPhotoMode");
		
		UPhotoModeSubsystem_EnterPhotoMode_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeSubsystem.ChangePawnType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoPawnType                                     NewType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APhotoPawn* UPhotoModeSubsystem::ChangePawnType(EPhotoPawnType NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeSubsystem.ChangePawnType");
		
		UPhotoModeSubsystem_ChangePawnType_Params params {};
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeTextBlock.SetLocalizedString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  LocString                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeTextBlock::SetLocalizedString(const struct FLocString& LocString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeTextBlock.SetLocalizedString");
		
		UPhotoModeTextBlock_SetLocalizedString_Params params {};
		params.LocString = LocString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.SetCharacterVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::SetCharacterVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.SetCharacterVisibility");
		
		UPhotoModeUIDelegates_SetCharacterVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnVignetteValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnVignetteValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnVignetteValueChanged");
		
		UPhotoModeUIDelegates_OnVignetteValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnTonemapperGammaChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnTonemapperGammaChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnTonemapperGammaChanged");
		
		UPhotoModeUIDelegates_OnTonemapperGammaChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnSceneFringeSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnSceneFringeSliderChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnSceneFringeSliderChanged");
		
		UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnPoseSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnPoseSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnPoseSelectionChanged");
		
		UPhotoModeUIDelegates_OnPoseSelectionChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnPoseBlendValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnPoseBlendValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnPoseBlendValueChanged");
		
		UPhotoModeUIDelegates_OnPoseBlendValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnLUTSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnLUTSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnLUTSelectionChanged");
		
		UPhotoModeUIDelegates_OnLUTSelectionChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnHideCharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChecked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnHideCharacterChanged(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnHideCharacterChanged");
		
		UPhotoModeUIDelegates_OnHideCharacterChanged_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnFOVValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnFOVValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnFOVValueChanged");
		
		UPhotoModeUIDelegates_OnFOVValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnFogViewDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnFogViewDistanceChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnFogViewDistanceChanged");
		
		UPhotoModeUIDelegates_OnFogViewDistanceChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnFilmGrainSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnFilmGrainSliderChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnFilmGrainSliderChanged");
		
		UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnDOFFstopChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnDOFFstopChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnDOFFstopChanged");
		
		UPhotoModeUIDelegates_OnDOFFstopChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnDOFFocusDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnDOFFocusDistanceChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnDOFFocusDistanceChanged");
		
		UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingProfileSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnColorGradingProfileSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingProfileSelectionChanged");
		
		UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingProfileIntensityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnColorGradingProfileIntensityChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingProfileIntensityChanged");
		
		UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingIntensityValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnColorGradingIntensityValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingIntensityValueChanged");
		
		UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnCharacterYawOffsetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnCharacterYawOffsetChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnCharacterYawOffsetChanged");
		
		UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnCameraTiltSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnCameraTiltSliderChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnCameraTiltSliderChanged");
		
		UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.PhotoModeUIDelegates.OnCameraSpeedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhotoModeUIDelegates::OnCameraSpeedChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.PhotoModeUIDelegates.OnCameraSpeedChanged");
		
		UPhotoModeUIDelegates_OnCameraSpeedChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoModeUIDelegates.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoModeUIDelegates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.PhotoModeUIDelegates");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.SpringArmPhotoPawn.SetBoomAdjustOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpringArmPhotoPawn::SetBoomAdjustOut(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.SpringArmPhotoPawn.SetBoomAdjustOut");
		
		ASpringArmPhotoPawn_SetBoomAdjustOut_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIPhotoMode.SpringArmPhotoPawn.SetBoomAdjustIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpringArmPhotoPawn::SetBoomAdjustIn(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIPhotoMode.SpringArmPhotoPawn.SetBoomAdjustIn");
		
		ASpringArmPhotoPawn_SetBoomAdjustIn_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpringArmPhotoPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpringArmPhotoPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIPhotoMode.SpringArmPhotoPawn");
		return ptr;
	}

}


