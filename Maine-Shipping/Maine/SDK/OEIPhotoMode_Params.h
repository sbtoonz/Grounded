#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OEIPhotoMode.ColorGradingProfileData.IsValidIndex
	 */
	struct UColorGradingProfileData_IsValidIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.TakePhoto
	 */
	struct APhotoPawn_TakePhoto_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.SwapInputAxisBinding
	 */
	struct APhotoPawn_SwapInputAxisBinding_Params
	{
	public:
		class FName                                                OldAxisName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewAxisName;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.RequestScreenshot
	 */
	struct APhotoPawn_RequestScreenshot_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.OnPhotoTakenXbox
	 */
	struct APhotoPawn_OnPhotoTakenXbox_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.OnPhotoTaken
	 */
	struct APhotoPawn_OnPhotoTaken_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      Colors;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.GetPhotoPawnType
	 */
	struct APhotoPawn_GetPhotoPawnType_Params
	{
	public:
		EPhotoPawnType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.GetCameraLocation
	 */
	struct APhotoPawn_GetCameraLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.GetCameraForwardVector
	 */
	struct APhotoPawn_GetCameraForwardVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.ExitPhotoMode
	 */
	struct APhotoPawn_ExitPhotoMode_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.ChangeCameraType
	 */
	struct APhotoPawn_ChangeCameraType_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoPawn.BrowsePhotos
	 */
	struct APhotoPawn_BrowsePhotos_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeCheckBoxBase.SetBrushes
	 */
	struct UPhotoModeCheckBoxBase_SetBrushes_Params
	{
	public:
		struct FSlateBrush                                         InCheckedImage;                                          // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InUncheckedImage;                                        // 0x0088(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InCheckedPressedImage;                                   // 0x0110(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InUncheckedPressedImage;                                 // 0x0198(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InHoveredFocusedCheckedImage;                            // 0x0220(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InHoveredFocusedUncheckedImage;                          // 0x02A8(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeCheckBoxBase.OnFocusChanged
	 */
	struct UPhotoModeCheckBoxBase_OnFocusChanged_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComboBoxBase.SetBrushes
	 */
	struct UPhotoModeComboBoxBase_SetBrushes_Params
	{
	public:
		struct FSlateBrush                                         InNormalImage;                                           // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InHoveredFocusedImage;                                   // 0x0088(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         InPressedStyle;                                          // 0x0110(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComboBoxBase.OnFocusChanged
	 */
	struct UPhotoModeComboBoxBase_OnFocusChanged_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.SpawnPoseableClone
	 */
	struct UPhotoModeComponent_SpawnPoseableClone_Params
	{
	public:
		class APlayerController*                                   ActivatingController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               OriginalPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerShowPoseableClone
	 */
	struct UPhotoModeComponent_ServerShowPoseableClone_Params
	{
	public:
		class ACharacter*                                          PoseableClone;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerShowOriginalPawn
	 */
	struct UPhotoModeComponent_ServerShowOriginalPawn_Params
	{
	public:
		class APawn*                                               OriginalPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerShowEquipment
	 */
	struct UPhotoModeComponent_ServerShowEquipment_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssociatedTag;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerSetPhotoModePose
	 */
	struct UPhotoModeComponent_ServerSetPhotoModePose_Params
	{
	public:
		class ACharacter*                                          Clone;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlendValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerSetIsReadyToEnterPhotoMode
	 */
	struct UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerPreSpawnPhotoModePoseableClone
	 */
	struct UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Params
	{
	public:
		class APawn*                                               OriginalPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerPrePhotoModeEntered
	 */
	struct UPhotoModeComponent_ServerPrePhotoModeEntered_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerPostSpawnPhotoModePoseableClone
	 */
	struct UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Params
	{
	public:
		class APawn*                                               OriginalPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          Clone;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPhotoModeCharacterCollisionInfo                    CollisionInfo;                                           // 0x0010(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerPhotoModeSpawnPoseableClone
	 */
	struct UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Params
	{
	public:
		class APlayerController*                                   ActivatingController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               OriginalPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerOnPostLogin
	 */
	struct UPhotoModeComponent_ServerOnPostLogin_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   NewPlayer;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerOnPhotoModeExited
	 */
	struct UPhotoModeComponent_ServerOnPhotoModeExited_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerOnCharacterYawOffsetChanged
	 */
	struct UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UM9T[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerHidePoseableClone
	 */
	struct UPhotoModeComponent_ServerHidePoseableClone_Params
	{
	public:
		class ACharacter*                                          PoseableClone;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerHideOriginalPawn
	 */
	struct UPhotoModeComponent_ServerHideOriginalPawn_Params
	{
	public:
		class APawn*                                               OriginalPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerHideEquipment
	 */
	struct UPhotoModeComponent_ServerHideEquipment_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssociatedTag;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerExitPhotoModeAsGroup
	 */
	struct UPhotoModeComponent_ServerExitPhotoModeAsGroup_Params
	{
	public:
		class APawn*                                               InstigatingPawn;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerEnterPhotoModeAsGroup
	 */
	struct UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Params
	{
	public:
		class APlayerController*                                   InstigatingController;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ServerDestroyPhotoModePoseableClone
	 */
	struct UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Params
	{
	public:
		class ACharacter*                                          Clone;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.MulticastSetPhotoModePose
	 */
	struct UPhotoModeComponent_MulticastSetPhotoModePose_Params
	{
	public:
		class ACharacter*                                          Clone;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlendValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.MulticastSetEquipmentVisibility
	 */
	struct UPhotoModeComponent_MulticastSetEquipmentVisibility_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssociatedTag;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visible;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.MulticastSetCharacterVisibility
	 */
	struct UPhotoModeComponent_MulticastSetCharacterVisibility_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.MulticastOnCharacterYawOffsetChanged
	 */
	struct UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UT1M[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.MulticastExitPhotoModeAsGroup
	 */
	struct UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Params
	{
	public:
		class APawn*                                               InstigatingPawn;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.MulticastEnterPhotoModeAsGroup
	 */
	struct UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Params
	{
	public:
		class APawn*                                               InstigatingPossessedPawn;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.IsPhotoModeEntryAllowed
	 */
	struct UPhotoModeComponent_IsPhotoModeEntryAllowed_Params
	{
	public:
		EPhotoModeEntryAllowedResult                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.EnterPhotoMode
	 */
	struct UPhotoModeComponent_EnterPhotoMode_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ClientSetPoseableCloneOnMatchingClient
	 */
	struct UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Params
	{
	public:
		class APlayerController*                                   OwningController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          InClone;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPhotoModeCharacterCollisionInfo                    CollisionInfo;                                           // 0x0010(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ClientPrePhotoModeEntered
	 */
	struct UPhotoModeComponent_ClientPrePhotoModeEntered_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoPawnSetupInputs
	 */
	struct UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Params
	{
	public:
		class APhotoPawn*                                          PhotoPawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputComponent*                                     InputComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeGroupEntryUnallowed
	 */
	struct UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Params
	{
	public:
		EPhotoModeEntryAllowedResult                               Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeExited
	 */
	struct UPhotoModeComponent_ClientOnPhotoModeExited_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.ClientOnPhotoModeEntered
	 */
	struct UPhotoModeComponent_ClientOnPhotoModeEntered_Params
	{
	public:
		class APhotoPawn*                                          PhotoPawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeComponent.CheckIsReadyToEnterPhotoMode
	 */
	struct UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModePrePause
	 */
	struct UPhotoModeHelperComponent_OnPhotoModePrePause_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModePreEntered
	 */
	struct UPhotoModeHelperComponent_OnPhotoModePreEntered_Params
	{
	public:
		class APlayerController*                                   InController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeHelperComponent.OnPhotoModeExit
	 */
	struct UPhotoModeHelperComponent_OnPhotoModeExit_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeHelperComponent.ForceLOD
	 */
	struct UPhotoModeHelperComponent_ForceLOD_Params
	{
	public:
		int32_t                                                    ForcedLOD;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.RefreshAllSettings
	 */
	struct UPhotoModeSettingsBase_RefreshAllSettings_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GoToPreviousGroup
	 */
	struct UPhotoModeSettingsBase_GoToPreviousGroup_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GoToNextGroup
	 */
	struct UPhotoModeSettingsBase_GoToNextGroup_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GoToGroupByIndex
	 */
	struct UPhotoModeSettingsBase_GoToGroupByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GetSettingWidgetWithTag
	 */
	struct UPhotoModeSettingsBase_GetSettingWidgetWithTag_Params
	{
	public:
		EPhotoModeSetting                                          Setting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FWVV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InAssociatedTag;                                         // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CPDQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GetSettingWidget
	 */
	struct UPhotoModeSettingsBase_GetSettingWidget_Params
	{
	public:
		EPhotoModeSetting                                          Setting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XL85[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GetHoveredSetting
	 */
	struct UPhotoModeSettingsBase_GetHoveredSetting_Params
	{
	public:
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GetFocusedSetting
	 */
	struct UPhotoModeSettingsBase_GetFocusedSetting_Params
	{
	public:
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsBase.GetCurrentSettingsGroup
	 */
	struct UPhotoModeSettingsBase_GetCurrentSettingsGroup_Params
	{
	public:
		class UPhotoModeSettingsGroupBase*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.RefreshAllSettings
	 */
	struct UPhotoModeSettingsGroupBase_RefreshAllSettings_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.IsHDRActive
	 */
	struct UPhotoModeSettingsGroupBase_IsHDRActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.HasSetting
	 */
	struct UPhotoModeSettingsGroupBase_HasSetting_Params
	{
	public:
		EPhotoModeSetting                                          Setting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetSettingWidgetWithTag
	 */
	struct UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Params
	{
	public:
		EPhotoModeSetting                                          Setting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JAKG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InAssociatedTag;                                         // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YIGP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetSetting
	 */
	struct UPhotoModeSettingsGroupBase_GetSetting_Params
	{
	public:
		EPhotoModeSetting                                          Setting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JTML[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetHoveredSetting
	 */
	struct UPhotoModeSettingsGroupBase_GetHoveredSetting_Params
	{
	public:
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetFocusedSetting
	 */
	struct UPhotoModeSettingsGroupBase_GetFocusedSetting_Params
	{
	public:
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsGroupBase.GetFirstSetting
	 */
	struct UPhotoModeSettingsGroupBase_GetFirstSetting_Params
	{
	public:
		class UPhotoModeSettingWidget*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsInterface.UnregisterWithPhotoModeSubsystem
	 */
	struct UPhotoModeSettingsInterface_UnregisterWithPhotoModeSubsystem_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingsInterface.RegisterWithPhotoModeSubsystem
	 */
	struct UPhotoModeSettingsInterface_RegisterWithPhotoModeSubsystem_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetValue
	 */
	struct UPhotoModeSettingWidget_SetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetSelectedIndex
	 */
	struct UPhotoModeSettingWidget_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetEquipmentVisibilityForActor
	 */
	struct UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetEquipmentVisibility
	 */
	struct UPhotoModeSettingWidget_SetEquipmentVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetEnabledState
	 */
	struct UPhotoModeSettingWidget_SetEnabledState_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetComboBoxOptions
	 */
	struct UPhotoModeSettingWidget_SetComboBoxOptions_Params
	{
	public:
		TArray<struct FLocString>                                  InOptions;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.SetChecked
	 */
	struct UPhotoModeSettingWidget_SetChecked_Params
	{
	public:
		ECheckBoxState                                             State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.RestorePrePhotoModeState
	 */
	struct UPhotoModeSettingWidget_RestorePrePhotoModeState_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.RefreshSetting
	 */
	struct UPhotoModeSettingWidget_RefreshSetting_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnSliderValueChanged
	 */
	struct UPhotoModeSettingWidget_OnSliderValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedSlider
	 */
	struct UPhotoModeSettingWidget_OnSettingChangedSlider_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedComboBox
	 */
	struct UPhotoModeSettingWidget_OnSettingChangedComboBox_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnSettingChangedCheckBox
	 */
	struct UPhotoModeSettingWidget_OnSettingChangedCheckBox_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnPhotoModeSettingChanged
	 */
	struct UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Params
	{
	public:
		class UPhotoModeSettingWidget*                             ChangedSetting;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnFocusedHoveredChanged
	 */
	struct UPhotoModeSettingWidget_OnFocusedHoveredChanged_Params
	{
	public:
		bool                                                       FocusedOrHovered;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.OnEnabledChanged
	 */
	struct UPhotoModeSettingWidget_OnEnabledChanged_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.IsInputHovered
	 */
	struct UPhotoModeSettingWidget_IsInputHovered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.IsChecked
	 */
	struct UPhotoModeSettingWidget_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.GetValue
	 */
	struct UPhotoModeSettingWidget_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSettingWidget.GetSelectedIndex
	 */
	struct UPhotoModeSettingWidget_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSliderBase.OnFocusChanged
	 */
	struct UPhotoModeSliderBase_OnFocusChanged_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSliderBase.OnCaptureEnd
	 */
	struct UPhotoModeSliderBase_OnCaptureEnd_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSliderBase.OnCaptureBegin
	 */
	struct UPhotoModeSliderBase_OnCaptureBegin_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSliderBase.HandleValueChanged
	 */
	struct UPhotoModeSliderBase_HandleValueChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.TakePhotoWithPhotoPawn
	 */
	struct UPhotoModeStatics_TakePhotoWithPhotoPawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetVignetteValue
	 */
	struct UPhotoModeStatics_SetVignetteValue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetTonemapperGamma
	 */
	struct UPhotoModeStatics_SetTonemapperGamma_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetSceneFringeIntensity
	 */
	struct UPhotoModeStatics_SetSceneFringeIntensity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetPhotoModeValues
	 */
	struct UPhotoModeStatics_SetPhotoModeValues_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HA32[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPhotoModeValues                                    Values;                                                  // 0x0010(0x01C0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetMotionBlurAmount
	 */
	struct UPhotoModeStatics_SetMotionBlurAmount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetFOV
	 */
	struct UPhotoModeStatics_SetFOV_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetFilmGrainIntensity
	 */
	struct UPhotoModeStatics_SetFilmGrainIntensity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetFilmbackWidth
	 */
	struct UPhotoModeStatics_SetFilmbackWidth_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetFilmbackHeight
	 */
	struct UPhotoModeStatics_SetFilmbackHeight_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetExponentialHeightFogViewDistance
	 */
	struct UPhotoModeStatics_SetExponentialHeightFogViewDistance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetDOFFstop
	 */
	struct UPhotoModeStatics_SetDOFFstop_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetDOFFocusDistance
	 */
	struct UPhotoModeStatics_SetDOFFocusDistance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetColorGradingProfile
	 */
	struct UPhotoModeStatics_SetColorGradingProfile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S60C[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FColorGradingProfile                                Profile;                                                 // 0x0010(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetColorGradingLUT
	 */
	struct UPhotoModeStatics_SetColorGradingLUT_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ColorGradingLUT;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetColorGradingIntensityValue
	 */
	struct UPhotoModeStatics_SetColorGradingIntensityValue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetCameraRoll
	 */
	struct UPhotoModeStatics_SetCameraRoll_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.SetAnimMontagePose
	 */
	struct UPhotoModeStatics_SetAnimMontagePose_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        AnimMontage;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlendValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.OpenPhotoDirectoryInExplorer
	 */
	struct UPhotoModeStatics_OpenPhotoDirectoryInExplorer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetVignetteValue
	 */
	struct UPhotoModeStatics_GetVignetteValue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetTonemapperGamma
	 */
	struct UPhotoModeStatics_GetTonemapperGamma_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetSceneFringeIntensity
	 */
	struct UPhotoModeStatics_GetSceneFringeIntensity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetPhotoModeValues
	 */
	struct UPhotoModeStatics_GetPhotoModeValues_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IQ1S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPhotoModeValues                                    Values;                                                  // 0x0010(0x01C0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetOriginalPawnDistanceToCamera
	 */
	struct UPhotoModeStatics_GetOriginalPawnDistanceToCamera_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetMotionBlurAmount
	 */
	struct UPhotoModeStatics_GetMotionBlurAmount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetFOV
	 */
	struct UPhotoModeStatics_GetFOV_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetFilmGrainIntensity
	 */
	struct UPhotoModeStatics_GetFilmGrainIntensity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetFilmbackWidth
	 */
	struct UPhotoModeStatics_GetFilmbackWidth_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetFilmbackHeight
	 */
	struct UPhotoModeStatics_GetFilmbackHeight_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetExponentialHeightFogViewDistance
	 */
	struct UPhotoModeStatics_GetExponentialHeightFogViewDistance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetDOFFstop
	 */
	struct UPhotoModeStatics_GetDOFFstop_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetDOFFocusDistance
	 */
	struct UPhotoModeStatics_GetDOFFocusDistance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetColorGradingProfile
	 */
	struct UPhotoModeStatics_GetColorGradingProfile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0VJT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FColorGradingProfile                                ReturnValue;                                             // 0x0010(0x0180)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetColorGradingLUT
	 */
	struct UPhotoModeStatics_GetColorGradingLUT_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetColorGradingIntensityValue
	 */
	struct UPhotoModeStatics_GetColorGradingIntensityValue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.GetCameraRoll
	 */
	struct UPhotoModeStatics_GetCameraRoll_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeStatics.ChangePhotoPawnType
	 */
	struct UPhotoModeStatics_ChangePhotoPawnType_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APhotoPawn*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.ToggleTIme
	 */
	struct UPhotoModeSubsystem_ToggleTIme_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.TogglePhotoMode
	 */
	struct UPhotoModeSubsystem_TogglePhotoMode_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.ShowPoseableClone
	 */
	struct UPhotoModeSubsystem_ShowPoseableClone_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.ShowOriginalPawn
	 */
	struct UPhotoModeSubsystem_ShowOriginalPawn_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.SetPoseableClone
	 */
	struct UPhotoModeSubsystem_SetPoseableClone_Params
	{
	public:
		class ACharacter*                                          InClone;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.SetPhotoModeQualityCVars
	 */
	struct UPhotoModeSubsystem_SetPhotoModeQualityCVars_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.SetPhotoModeConfig
	 */
	struct UPhotoModeSubsystem_SetPhotoModeConfig_Params
	{
	public:
		struct FPhotoModeConfig                                    InConfig;                                                // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.ResumeTime
	 */
	struct UPhotoModeSubsystem_ResumeTime_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.PauseTime
	 */
	struct UPhotoModeSubsystem_PauseTime_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.OnRequestExitPhotoMode
	 */
	struct UPhotoModeSubsystem_OnRequestExitPhotoMode_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.OnRequestEnterPhotoMode
	 */
	struct UPhotoModeSubsystem_OnRequestEnterPhotoMode_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               InstigatingPossessedPawn;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.IsTimePaused
	 */
	struct UPhotoModeSubsystem_IsTimePaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.IsInPhotoMode
	 */
	struct UPhotoModeSubsystem_IsInPhotoMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.HidePoseableClone
	 */
	struct UPhotoModeSubsystem_HidePoseableClone_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.HideOriginalPawn
	 */
	struct UPhotoModeSubsystem_HideOriginalPawn_Params
	{	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetUIDelegatesObject
	 */
	struct UPhotoModeSubsystem_GetUIDelegatesObject_Params
	{
	public:
		class UPhotoModeUIDelegates*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPrePhotoModeSettingValues
	 */
	struct UPhotoModeSubsystem_GetPrePhotoModeSettingValues_Params
	{
	public:
		struct FPhotoModeValues                                    ReturnValue;                                             // 0x0000(0x01C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPoseableClone
	 */
	struct UPhotoModeSubsystem_GetPoseableClone_Params
	{
	public:
		class ACharacter*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoOutputPath
	 */
	struct UPhotoModeSubsystem_GetPhotoOutputPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeUIOptions
	 */
	struct UPhotoModeSubsystem_GetPhotoModeUIOptions_Params
	{
	public:
		struct FPhotoModeUIOptions                                 ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModePawn
	 */
	struct UPhotoModeSubsystem_GetPhotoModePawn_Params
	{
	public:
		class APhotoPawn*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeMPC
	 */
	struct UPhotoModeSubsystem_GetPhotoModeMPC_Params
	{
	public:
		class UMaterialParameterCollection*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoModeGeneralOptions
	 */
	struct UPhotoModeSubsystem_GetPhotoModeGeneralOptions_Params
	{
	public:
		struct FPhotoModeGeneralOptions                            ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetPhotoBaseFilename
	 */
	struct UPhotoModeSubsystem_GetPhotoBaseFilename_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetOriginalPawn
	 */
	struct UPhotoModeSubsystem_GetOriginalPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalPoseableClone
	 */
	struct UPhotoModeSubsystem_GetGlobalPoseableClone_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalPhotoModePawn
	 */
	struct UPhotoModeSubsystem_GetGlobalPhotoModePawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APhotoPawn*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalOriginalPawn
	 */
	struct UPhotoModeSubsystem_GetGlobalOriginalPawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetGlobalActivatingPlayerController
	 */
	struct UPhotoModeSubsystem_GetGlobalActivatingPlayerController_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.GetActivatingPlayerController
	 */
	struct UPhotoModeSubsystem_GetActivatingPlayerController_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.ExitPhotoMode
	 */
	struct UPhotoModeSubsystem_ExitPhotoMode_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.EnterPhotoMode
	 */
	struct UPhotoModeSubsystem_EnterPhotoMode_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeSubsystem.ChangePawnType
	 */
	struct UPhotoModeSubsystem_ChangePawnType_Params
	{
	public:
		EPhotoPawnType                                             NewType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZAYQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APhotoPawn*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeTextBlock.SetLocalizedString
	 */
	struct UPhotoModeTextBlock_SetLocalizedString_Params
	{
	public:
		struct FLocString                                          LocString;                                               // 0x0000(0x0010)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.SetCharacterVisibility
	 */
	struct UPhotoModeUIDelegates_SetCharacterVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnVignetteValueChanged
	 */
	struct UPhotoModeUIDelegates_OnVignetteValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnTonemapperGammaChanged
	 */
	struct UPhotoModeUIDelegates_OnTonemapperGammaChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnSceneFringeSliderChanged
	 */
	struct UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnPoseSelectionChanged
	 */
	struct UPhotoModeUIDelegates_OnPoseSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnPoseBlendValueChanged
	 */
	struct UPhotoModeUIDelegates_OnPoseBlendValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnLUTSelectionChanged
	 */
	struct UPhotoModeUIDelegates_OnLUTSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnHideCharacterChanged
	 */
	struct UPhotoModeUIDelegates_OnHideCharacterChanged_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnFOVValueChanged
	 */
	struct UPhotoModeUIDelegates_OnFOVValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnFogViewDistanceChanged
	 */
	struct UPhotoModeUIDelegates_OnFogViewDistanceChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnFilmGrainSliderChanged
	 */
	struct UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnDOFFstopChanged
	 */
	struct UPhotoModeUIDelegates_OnDOFFstopChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnDOFFocusDistanceChanged
	 */
	struct UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingProfileSelectionChanged
	 */
	struct UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingProfileIntensityChanged
	 */
	struct UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnColorGradingIntensityValueChanged
	 */
	struct UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnCharacterYawOffsetChanged
	 */
	struct UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnCameraTiltSliderChanged
	 */
	struct UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.PhotoModeUIDelegates.OnCameraSpeedChanged
	 */
	struct UPhotoModeUIDelegates_OnCameraSpeedChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.SpringArmPhotoPawn.SetBoomAdjustOut
	 */
	struct ASpringArmPhotoPawn_SetBoomAdjustOut_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIPhotoMode.SpringArmPhotoPawn.SetBoomAdjustIn
	 */
	struct ASpringArmPhotoPawn_SetBoomAdjustIn_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
