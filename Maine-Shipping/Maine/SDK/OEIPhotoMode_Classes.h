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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OEIPhotoMode.ColorGradingProfileData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UColorGradingProfileData : public UDataAsset
	{
	public:
		TArray<struct FColorGradingProfile>                        Profiles;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		bool IsValidIndex(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoPawn
	 * Size -> 0x0040 (FullSize[0x02F8] - InheritedSize[0x02B8])
	 */
	class APhotoPawn : public ASpectatorPawn
	{
	public:
		class USpringArmComponent*                                 SpringArmComponent;                                      // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCineCameraComponent*                                CameraComponent;                                         // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseSpeedMultiplier;                                     // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            RotationInput;                                           // 0x02CC(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ShutterEffectFloatCurve;                                 // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  CameraShutterPPM;                                        // 0x02E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShutterEffectDuration;                                   // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShutterEffectStartTime;                                  // 0x02EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ShutterActive;                                           // 0x02F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DidUnregisterFromPerception;                             // 0x02F1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IB3P[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (PADDING)

	public:
		void TakePhoto();
		bool SwapInputAxisBinding(const class FName& OldAxisName, const class FName& NewAxisName);
		void RequestScreenshot();
		void OnPhotoTakenXbox();
		void OnPhotoTaken(int32_t Width, int32_t Height, TArray<struct FColor> Colors);
		EPhotoPawnType GetPhotoPawnType();
		struct FVector GetCameraLocation();
		struct FVector GetCameraForwardVector();
		void ExitPhotoMode();
		void ChangeCameraType();
		void BrowsePhotos();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.FreeCamPhotoPawn
	 * Size -> 0x0010 (FullSize[0x0308] - InheritedSize[0x02F8])
	 */
	class AFreeCamPhotoPawn : public APhotoPawn
	{
	public:
		float                                                      SpeedIncreaseRate;                                       // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSpeedMultiplier;                                      // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSpeedMultiplier;                                      // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TetherDistance;                                          // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeCheckBoxBase
	 * Size -> 0x0348 (FullSize[0x0AC0] - InheritedSize[0x0778])
	 */
	class UPhotoModeCheckBoxBase : public UCheckBox
	{
	public:
		struct FSlateBrush                                         CheckedImage;                                            // 0x0778(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         UncheckedImage;                                          // 0x0800(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         CheckedPressedImage;                                     // 0x0888(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         UncheckedPressedImage;                                   // 0x0910(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         HoveredFocusedCheckedImage;                              // 0x0998(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         HoveredFocusedUncheckedImage;                            // 0x0A20(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		bool                                                       Focused;                                                 // 0x0AA8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2K5P[0x17];                                  // 0x0AA9(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetBrushes(const struct FSlateBrush& InCheckedImage, const struct FSlateBrush& InUncheckedImage, const struct FSlateBrush& InCheckedPressedImage, const struct FSlateBrush& InUncheckedPressedImage, const struct FSlateBrush& InHoveredFocusedCheckedImage, const struct FSlateBrush& InHoveredFocusedUncheckedImage);
		void OnFocusChanged(bool HasFocus);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeComboBoxBase
	 * Size -> 0x01B0 (FullSize[0x0FC8] - InheritedSize[0x0E18])
	 */
	class UPhotoModeComboBoxBase : public UComboBoxString
	{
	public:
		struct FSlateBrush                                         NormalStyle;                                             // 0x0E18(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         HoveredFocusedStyle;                                     // 0x0EA0(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         PressedStyle;                                            // 0x0F28(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		bool                                                       Focused;                                                 // 0x0FB0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TREO[0x17];                                  // 0x0FB1(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetBrushes(const struct FSlateBrush& InNormalImage, const struct FSlateBrush& InHoveredFocusedImage, const struct FSlateBrush& InPressedStyle);
		void OnFocusChanged(bool HasFocus);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UPhotoModeComponent : public UActorComponent
	{
	public:
		struct FTransform                                          CachedTransform;                                         // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CachedTransformValid;                                    // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReadyToEnterPhotoMode;                                 // 0x00E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ClientReadyCheckEnable;                                  // 0x00E2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       WereInputsSetup;                                         // 0x00E3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsPhotoModeClone;                                        // 0x00E4(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RTQ9[0xB];                                   // 0x00E5(0x000B) MISSED OFFSET (PADDING)

	public:
		class ACharacter* SpawnPoseableClone(class APlayerController* ActivatingController, class APawn* OriginalPawn);
		void ServerShowPoseableClone(class ACharacter* PoseableClone);
		void ServerShowOriginalPawn(class APawn* OriginalPawn);
		void ServerShowEquipment(class ACharacter* Character, const class FName& AssociatedTag);
		void ServerSetPhotoModePose(class ACharacter* Clone, class UAnimMontage* Montage, float BlendValue);
		void ServerSetIsReadyToEnterPhotoMode(bool Ready);
		void ServerPreSpawnPhotoModePoseableClone(class APawn* OriginalPawn);
		void ServerPrePhotoModeEntered(class APlayerController* PlayerController);
		void ServerPostSpawnPhotoModePoseableClone(class APawn* OriginalPawn, class ACharacter* Clone, const struct FPhotoModeCharacterCollisionInfo& CollisionInfo);
		void ServerPhotoModeSpawnPoseableClone(class APlayerController* ActivatingController, class APawn* OriginalPawn);
		void ServerOnPostLogin(class AGameModeBase* GameMode, class APlayerController* NewPlayer);
		void ServerOnPhotoModeExited();
		void ServerOnCharacterYawOffsetChanged(class AActor* Actor, const struct FTransform& Transform);
		void ServerHidePoseableClone(class ACharacter* PoseableClone);
		void ServerHideOriginalPawn(class APawn* OriginalPawn);
		void ServerHideEquipment(class ACharacter* Character, const class FName& AssociatedTag);
		void ServerExitPhotoModeAsGroup(class APawn* InstigatingPawn);
		void ServerEnterPhotoModeAsGroup(class APlayerController* InstigatingController);
		void ServerDestroyPhotoModePoseableClone(class ACharacter* Clone);
		void MulticastSetPhotoModePose(class ACharacter* Clone, class UAnimMontage* Montage, float BlendValue);
		void MulticastSetEquipmentVisibility(class ACharacter* Character, const class FName& AssociatedTag, bool Visible);
		void MulticastSetCharacterVisibility(class ACharacter* Character, bool Visible);
		void MulticastOnCharacterYawOffsetChanged(class AActor* Actor, const struct FTransform& Transform);
		void MulticastExitPhotoModeAsGroup(class APawn* InstigatingPawn);
		void MulticastEnterPhotoModeAsGroup(class APawn* InstigatingPossessedPawn);
		EPhotoModeEntryAllowedResult IsPhotoModeEntryAllowed();
		void EnterPhotoMode();
		void ClientSetPoseableCloneOnMatchingClient(class APlayerController* OwningController, class ACharacter* InClone, const struct FPhotoModeCharacterCollisionInfo& CollisionInfo);
		void ClientPrePhotoModeEntered(class APlayerController* PlayerController);
		void ClientOnPhotoPawnSetupInputs(class APhotoPawn* PhotoPawn, class UInputComponent* InputComponent);
		void ClientOnPhotoModeGroupEntryUnallowed(EPhotoModeEntryAllowedResult Reason);
		void ClientOnPhotoModeExited();
		void ClientOnPhotoModeEntered(class APhotoPawn* PhotoPawn);
		bool CheckIsReadyToEnterPhotoMode();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeConfiguration
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UPhotoModeConfiguration : public UDataAsset
	{
	public:
		struct FPhotoModeConfig                                    Config;                                                  // 0x0030(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeExportUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhotoModeExportUtils : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeHelperComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UPhotoModeHelperComponent : public UActorComponent
	{
	public:
		struct FPhotoModeHelperOptions                             Options;                                                 // 0x00B0(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R33S[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPhotoModeHelpersState                              State;                                                   // 0x00B8(0x0058) BlueprintVisible, NativeAccessSpecifierPublic
		class UPhotoModePoseData*                                  PhotoModePoseSet;                                        // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnPhotoModePrePause();
		void OnPhotoModePreEntered(class APlayerController* InController);
		void OnPhotoModeExit();
		void ForceLOD(int32_t ForcedLOD);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModePoseData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPhotoModePoseData : public UDataAsset
	{
	public:
		TArray<struct FPhotoModePose>                              Poses;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSettingsBase
	 * Size -> 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
	 */
	class UPhotoModeSettingsBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_4UYT[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhotoModeTextBlock*                                 TitleText;                                               // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     SettingsGroupSwitcher;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MouseDownInWidget;                                       // 0x0280(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YLL1[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (PADDING)

	public:
		void RefreshAllSettings();
		void GoToPreviousGroup();
		void GoToNextGroup();
		void GoToGroupByIndex(int32_t Index);
		class UPhotoModeSettingWidget* GetSettingWidgetWithTag(EPhotoModeSetting Setting, const class FName& InAssociatedTag);
		class UPhotoModeSettingWidget* GetSettingWidget(EPhotoModeSetting Setting);
		class UPhotoModeSettingWidget* GetHoveredSetting();
		class UPhotoModeSettingWidget* GetFocusedSetting();
		class UPhotoModeSettingsGroupBase* GetCurrentSettingsGroup();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSettingsData
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UPhotoModeSettingsData : public UDataAsset
	{
	public:
		TMap<EPhotoModeSetting, struct FSettingInfo>               SettingInfo;                                             // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UColorGradingProfileData*                            ColorGradingProfiles;                                    // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSettingsGroupBase
	 * Size -> 0x0028 (FullSize[0x0290] - InheritedSize[0x0268])
	 */
	class UPhotoModeSettingsGroupBase : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        Container;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        SettingsBox;                                             // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhotoSettingsGroup                                        SettingGroup;                                            // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1D1[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          SettingGroupName;                                        // 0x027C(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JP0D[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (PADDING)

	public:
		void RefreshAllSettings();
		bool IsHDRActive();
		bool HasSetting(EPhotoModeSetting Setting);
		class UPhotoModeSettingWidget* GetSettingWidgetWithTag(EPhotoModeSetting Setting, const class FName& InAssociatedTag);
		class UPhotoModeSettingWidget* GetSetting(EPhotoModeSetting Setting);
		class UPhotoModeSettingWidget* GetHoveredSetting();
		class UPhotoModeSettingWidget* GetFocusedSetting();
		class UPhotoModeSettingWidget* GetFirstSetting();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSettingsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhotoModeSettingsInterface : public UInterface
	{
	public:
		void UnregisterWithPhotoModeSubsystem();
		void RegisterWithPhotoModeSubsystem();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSettingWidget
	 * Size -> 0x0050 (FullSize[0x02B8] - InheritedSize[0x0268])
	 */
	class UPhotoModeSettingWidget : public UUserWidget
	{
	public:
		class UOverlay*                                            Overlay;                                                 // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      Container;                                               // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhotoModeTextBlock*                                 SettingTitleText;                                        // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhotoModeSliderBase*                                Slider;                                                  // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhotoModeCheckBoxBase*                              CheckBox;                                                // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhotoModeComboBoxBase*                              ComboBox;                                                // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          ValueText;                                               // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhotoModeSetting                                          ControlledSetting;                                       // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhotoModeValueFormat                                      ValueFormat;                                             // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC2E[0x2];                                   // 0x02A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaximumIntegralDigits;                                   // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumFractionalDigits;                                 // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssociatedTag;                                           // 0x02AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrePhotoModeShowHideState;                               // 0x02B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OF1X[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetValue(float Value);
		void SetSelectedIndex(int32_t Index);
		void SetEquipmentVisibilityForActor(class AActor* Actor, bool Visible);
		void SetEquipmentVisibility(bool Visible);
		void SetEnabledState(bool Enabled);
		void SetComboBoxOptions(TArray<struct FLocString> InOptions);
		void SetChecked(ECheckBoxState State);
		void RestorePrePhotoModeState();
		void RefreshSetting();
		void OnSliderValueChanged(float Value);
		void OnSettingChangedSlider(float Value);
		void OnSettingChangedComboBox(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnSettingChangedCheckBox(bool bChecked);
		void OnPhotoModeSettingChanged(class UPhotoModeSettingWidget* ChangedSetting);
		void OnFocusedHoveredChanged(bool FocusedOrHovered);
		void OnEnabledChanged(bool Enabled);
		bool IsInputHovered();
		bool IsChecked();
		float GetValue();
		int32_t GetSelectedIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSliderBase
	 * Size -> 0x0098 (FullSize[0x0598] - InheritedSize[0x0500])
	 */
	class UPhotoModeSliderBase : public USlider
	{
	public:
		struct FLinearColor                                        DefaultSliderColor;                                      // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBarColor;                                         // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        CapturedSliderColor;                                     // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        CapturedBarColor;                                        // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        FocusReceivedSliderColor;                                // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        FocusReceivedBarColor;                                   // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DisabledSliderColor;                                     // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DisabledBarColor;                                        // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Focused;                                                 // 0x0580(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L2B9[0x3];                                   // 0x0581(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreviousValue;                                           // 0x0584(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9ELS[0x10];                                  // 0x0588(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnFocusChanged(bool HasFocus);
		void OnCaptureEnd();
		void OnCaptureBegin();
		void HandleValueChanged(float NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhotoModeStatics : public UBlueprintFunctionLibrary
	{
	public:
		void TakePhotoWithPhotoPawn(class UObject* WorldContextObject);
		void SetVignetteValue(class UObject* WorldContextObject, float Value);
		void SetTonemapperGamma(class UObject* WorldContextObject, float Value);
		void SetSceneFringeIntensity(class UObject* WorldContextObject, float Value);
		void SetPhotoModeValues(class UObject* WorldContextObject, const struct FPhotoModeValues& Values);
		void SetMotionBlurAmount(class UObject* WorldContextObject, float Value);
		void SetFOV(class UObject* WorldContextObject, float Value);
		void SetFilmGrainIntensity(class UObject* WorldContextObject, float Value);
		void SetFilmbackWidth(class UObject* WorldContextObject, float Value);
		void SetFilmbackHeight(class UObject* WorldContextObject, float Value);
		void SetExponentialHeightFogViewDistance(class UObject* WorldContextObject, float Value);
		void SetDOFFstop(class UObject* WorldContextObject, float Value);
		void SetDOFFocusDistance(class UObject* WorldContextObject, float Value);
		void SetColorGradingProfile(class UObject* WorldContextObject, const struct FColorGradingProfile& Profile);
		void SetColorGradingLUT(class UObject* WorldContextObject, class UTexture* ColorGradingLUT);
		void SetColorGradingIntensityValue(class UObject* WorldContextObject, float Value);
		void SetCameraRoll(class UObject* WorldContextObject, float Value);
		void SetAnimMontagePose(class ACharacter* Character, class UAnimMontage* AnimMontage, float BlendValue);
		void OpenPhotoDirectoryInExplorer(class UObject* WorldContextObject);
		float GetVignetteValue(class UObject* WorldContextObject);
		float GetTonemapperGamma(class UObject* WorldContextObject);
		float GetSceneFringeIntensity(class UObject* WorldContextObject);
		void GetPhotoModeValues(class UObject* WorldContextObject, struct FPhotoModeValues* Values);
		float GetOriginalPawnDistanceToCamera(class UObject* WorldContextObject);
		float GetMotionBlurAmount(class UObject* WorldContextObject);
		float GetFOV(class UObject* WorldContextObject);
		float GetFilmGrainIntensity(class UObject* WorldContextObject);
		float GetFilmbackWidth(class UObject* WorldContextObject);
		float GetFilmbackHeight(class UObject* WorldContextObject);
		float GetExponentialHeightFogViewDistance(class UObject* WorldContextObject);
		float GetDOFFstop(class UObject* WorldContextObject);
		float GetDOFFocusDistance(class UObject* WorldContextObject);
		struct FColorGradingProfile GetColorGradingProfile(class UObject* WorldContextObject);
		class UTexture* GetColorGradingLUT(class UObject* WorldContextObject);
		float GetColorGradingIntensityValue(class UObject* WorldContextObject);
		float GetCameraRoll(class UObject* WorldContextObject);
		class APhotoPawn* ChangePhotoPawnType(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeSubsystem
	 * Size -> 0x0400 (FullSize[0x0430] - InheritedSize[0x0030])
	 */
	class UPhotoModeSubsystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnPhotoModePrePause;                                     // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PhotoModeEntryAllowed;                                   // 0x0040(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoModeEntryUnallowed;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PhotoModeExitAllowed;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoModePreEntered;                                   // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoModeEntered;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoModePreExit;                                      // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoModeExited;                                       // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoPawnChanged;                                      // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TakePhotoOverride;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoTaken;                                            // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoPawnSetupInput;                                   // 0x00E0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SpawnPoseableCloneOverride;                              // 0x00F0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DestroyPoseableCloneOverride;                            // 0x0100(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HideOriginalPawnOverride;                                // 0x0110(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ShowOriginalPawnOverride;                                // 0x0120(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HidePoseableCloneOverride;                               // 0x0130(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ShowPoseableCloneOverride;                               // 0x0140(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhotoModeSettingChanged;                               // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      UserCameraSpeedMultiplier;                               // 0x0160(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YW66[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPhotoModeConfig                                    Config;                                                  // 0x0168(0x0058) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class APhotoPawn*                                          PhotoPawn;                                               // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialParameterCollection*                        PhotoModeMPC;                                            // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2AR[0x10];                                  // 0x01D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          PoseableClone;                                           // 0x01E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JVS5[0x10];                                  // 0x01E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhotoModeUIDelegates*                               UIDelegateObject;                                        // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UISettingsInterface[0x10];                               // 0x0200(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_DF2W[0x60];                                  // 0x0210(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPhotoModeValues                                    PrePhotoModeValues;                                      // 0x0270(0x01C0) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void ToggleTIme();
		bool TogglePhotoMode(class APlayerController* PlayerController);
		void ShowPoseableClone();
		void ShowOriginalPawn();
		void SetPoseableClone(class ACharacter* InClone);
		void SetPhotoModeQualityCVars(bool Reset);
		void SetPhotoModeConfig(struct FPhotoModeConfig* InConfig);
		void ResumeTime();
		void PauseTime();
		bool OnRequestExitPhotoMode(class APlayerController* PlayerController);
		bool OnRequestEnterPhotoMode(class APlayerController* PlayerController, class APawn* InstigatingPossessedPawn);
		bool IsTimePaused();
		bool IsInPhotoMode();
		void HidePoseableClone();
		void HideOriginalPawn();
		class UPhotoModeUIDelegates* GetUIDelegatesObject();
		struct FPhotoModeValues GetPrePhotoModeSettingValues();
		class ACharacter* GetPoseableClone();
		class FString GetPhotoOutputPath();
		struct FPhotoModeUIOptions GetPhotoModeUIOptions();
		class APhotoPawn* GetPhotoModePawn();
		class UMaterialParameterCollection* GetPhotoModeMPC();
		struct FPhotoModeGeneralOptions GetPhotoModeGeneralOptions();
		class FString GetPhotoBaseFilename();
		class APawn* GetOriginalPawn();
		class ACharacter* GetGlobalPoseableClone(class UObject* WorldContextObject);
		class APhotoPawn* GetGlobalPhotoModePawn(class UObject* WorldContextObject);
		class APawn* GetGlobalOriginalPawn(class UObject* WorldContextObject);
		class APlayerController* GetGlobalActivatingPlayerController(class UObject* WorldContextObject);
		class APlayerController* GetActivatingPlayerController();
		bool ExitPhotoMode(class APlayerController* PlayerController);
		bool EnterPhotoMode(class APlayerController* PlayerController);
		class APhotoPawn* ChangePawnType(EPhotoPawnType NewType);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeTextBlock
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class UPhotoModeTextBlock : public UTextBlock
	{
	public:
		bool                                                       ForceAllUpperCase;                                       // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNDI[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          LocalizedString;                                         // 0x02B4(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASRV[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          TextBlock;                                               // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetLocalizedString(const struct FLocString& LocString);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.PhotoModeUIDelegates
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhotoModeUIDelegates : public UObject
	{
	public:
		void SetCharacterVisibility(bool Visible);
		void OnVignetteValueChanged(float Value);
		void OnTonemapperGammaChanged(float Value);
		void OnSceneFringeSliderChanged(float Value);
		void OnPoseSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnPoseBlendValueChanged(float Value);
		void OnLUTSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnHideCharacterChanged(bool bChecked);
		void OnFOVValueChanged(float Value);
		void OnFogViewDistanceChanged(float Value);
		void OnFilmGrainSliderChanged(float Value);
		void OnDOFFstopChanged(float Value);
		void OnDOFFocusDistanceChanged(float Value);
		void OnColorGradingProfileSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnColorGradingProfileIntensityChanged(float Value);
		void OnColorGradingIntensityValueChanged(float Value);
		void OnCharacterYawOffsetChanged(float Value);
		void OnCameraTiltSliderChanged(float Value);
		void OnCameraSpeedChanged(float Value);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIPhotoMode.SpringArmPhotoPawn
	 * Size -> 0x0028 (FullSize[0x0320] - InheritedSize[0x02F8])
	 */
	class ASpringArmPhotoPawn : public APhotoPawn
	{
	public:
		float                                                      BoomNearSpeed;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BoomFarSpeed;                                            // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BoomMaxLength;                                           // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StartingBoomLength;                                      // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoMinBoomLength;                                      // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CO7Q[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoomMinLength;                                           // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BoomPanSpeed;                                            // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxVerticalOffset;                                       // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BoomAdjustAccumulatorIn;                                 // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BoomAdjustAccumulatorOut;                                // 0x031C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetBoomAdjustOut(float Val);
		void SetBoomAdjustIn(float Val);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
