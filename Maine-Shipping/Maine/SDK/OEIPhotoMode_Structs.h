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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OEIPhotoMode.EPhotoModeEntryAllowedResult
	 */
	enum class EPhotoModeEntryAllowedResult : uint8_t
	{
		Allowed                    = 0,
		UnallowedGameplaySequence  = 1,
		UnallowedSpectatorMode     = 2,
		UnallowedMultiplayer       = 3,
		UnallowedPlayerUnpossessed = 4,
		Unallowed                  = 5,
		MAX                        = 6
	};

	/**
	 * Enum OEIPhotoMode.EPhotoModeSetting
	 */
	enum class EPhotoModeSetting : uint8_t
	{
		None                         = 0,
		ShowHideCharacter            = 1,
		ShowHideEquipment            = 2,
		PoseSelection                = 3,
		PoseBlend                    = 4,
		Vignette                     = 5,
		FilmGrain                    = 6,
		SceneFringe                  = 7,
		ColorGradingLUTSelection     = 8,
		ColorGradingProfileSelection = 9,
		ColorGradingIntensity        = 10,
		CameraTilt                   = 11,
		FOV                          = 12,
		DOFFstop                     = 13,
		DOFFocusDistance             = 14,
		TonemapperGamma              = 15,
		FogViewDistance              = 16,
		CharacterYawOffset           = 17,
		CameraSpeed                  = 18,
		TimeOfDay                    = 19,
		AzimuthAngleOffset           = 20,
		Custom0                      = 21,
		Custom1                      = 22,
		Custom2                      = 23,
		Custom3                      = 24,
		Custom4                      = 25,
		Custom5                      = 26,
		Custom6                      = 27,
		Custom7                      = 28,
		Custom8                      = 29,
		MAX                          = 30
	};

	/**
	 * Enum OEIPhotoMode.EPhotoModeValueFormat
	 */
	enum class EPhotoModeValueFormat : uint8_t
	{
		PlainNumber  = 0,
		Aperture     = 1,
		Degrees      = 2,
		Percent      = 3,
		Seconds      = 4,
		TimeOfDay24h = 5,
		MAX          = 6
	};

	/**
	 * Enum OEIPhotoMode.EPhotoModeInputType
	 */
	enum class EPhotoModeInputType : uint8_t
	{
		Slider   = 0,
		CheckBox = 1,
		ComboBox = 2,
		MAX      = 3
	};

	/**
	 * Enum OEIPhotoMode.EPhotoSettingsGroup
	 */
	enum class EPhotoSettingsGroup : uint8_t
	{
		None      = 0,
		Camera    = 1,
		Effects   = 2,
		Character = 3,
		World     = 4,
		MAX       = 5
	};

	/**
	 * Enum OEIPhotoMode.EPhotoPawnType
	 */
	enum class EPhotoPawnType : uint8_t
	{
		Base      = 0,
		FreeCam   = 1,
		SpringArm = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OEIPhotoMode.ColorGradingProfile
	 * Size -> 0x0180
	 */
	struct FColorGradingProfile
	{
	public:
		unsigned char                                              bOverride_WhiteTemp : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_WhiteTint : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturation : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrast : 1;                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGamma : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGain : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffset : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturationShadows : 1;                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrastShadows : 1;                      // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGammaShadows : 1;                         // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGainShadows : 1;                          // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffsetShadows : 1;                        // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturationMidtones : 1;                   // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrastMidtones : 1;                     // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGammaMidtones : 1;                        // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGainMidtones : 1;                         // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffsetMidtones : 1;                       // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturationHighlights : 1;                 // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrastHighlights : 1;                   // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGammaHighlights : 1;                      // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGainHighlights : 1;                       // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffsetHighlights : 1;                     // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorCorrectionShadowsMax : 1;                 // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorCorrectionHighlightsMin : 1;              // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BlueCorrection : 1;                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ExpandGamut : 1;                               // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          ProfileName;                                             // 0x0004(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STH3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            ColorGradingLUT;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WhiteTemp;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WhiteTint;                                               // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLJA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            ColorSaturation;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrast;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGamma;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGain;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffset;                                             // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturationShadows;                                  // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrastShadows;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGammaShadows;                                       // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGainShadows;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffsetShadows;                                      // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturationMidtones;                                 // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrastMidtones;                                   // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGammaMidtones;                                      // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGainMidtones;                                       // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffsetMidtones;                                     // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturationHighlights;                               // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrastHighlights;                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGammaHighlights;                                    // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGainHighlights;                                     // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffsetHighlights;                                   // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorCorrectionHighlightsMin;                            // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorCorrectionShadowsMax;                               // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlueCorrection;                                          // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpandGamut;                                             // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeGeneralOptions
	 * Size -> 0x0018
	 */
	struct FPhotoModeGeneralOptions
	{
	public:
		bool                                                       UseShutterEffect;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMOA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultShutterMaterial;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DefaultShutterMaterialControl;                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModePawnOptions
	 * Size -> 0x0018
	 */
	struct FPhotoModePawnOptions
	{
	public:
		EPhotoPawnType                                             DefaultPhotoPawnType;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IG2D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FreeCamPhotoPawnClass;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SpringArmPhotoPawnClass;                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeStorageOptions
	 * Size -> 0x0020
	 */
	struct FPhotoModeStorageOptions
	{
	public:
		class FString                                              FileNameBase;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeUIOptions
	 * Size -> 0x0008
	 */
	struct FPhotoModeUIOptions
	{
	public:
		class UPhotoModeSettingsData*                              SettingData;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeConfig
	 * Size -> 0x0058
	 */
	struct FPhotoModeConfig
	{
	public:
		struct FPhotoModeGeneralOptions                            GeneralOptions;                                          // 0x0000(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPhotoModePawnOptions                               PawnOptions;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPhotoModeStorageOptions                            StorageOptions;                                          // 0x0030(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPhotoModeUIOptions                                 UIOptions;                                               // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeHelperOptions
	 * Size -> 0x0004
	 */
	struct FPhotoModeHelperOptions
	{
	public:
		bool                                                       ForceLOD0;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TimeDilation;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RenderStateDirtyOnTick;                                  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickableWhenPaused;                                      // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeHelpersState
	 * Size -> 0x0058
	 */
	struct FPhotoModeHelpersState
	{
	public:
		TMap<int32_t, int32_t>                                     MeshObjectIdToForcedLOD;                                 // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      PrePhotoModeCustomTimeDilation;                          // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrePhotoModeTickableWhenPaused;                          // 0x0054(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IY4U[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModePose
	 * Size -> 0x0020
	 */
	struct FPhotoModePose
	{
	public:
		struct FLocString                                          PoseName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PoseMontage;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultBlend;                                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3BB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIPhotoMode.SliderSettings
	 * Size -> 0x0010
	 */
	struct FSliderSettings
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepSize;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhotoModeValueFormat                                      ValueFormat;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QM7C[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIPhotoMode.SettingInfo
	 * Size -> 0x0078
	 */
	struct FSettingInfo
	{
	public:
		struct FLocString                                          SettingName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FLocString>                       SettingTagToName;                                        // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EPhotoModeInputType                                        InputType;                                               // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DMX[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderSettings                                     SliderSettings;                                          // 0x0064(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJIA[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeValues
	 * Size -> 0x01C0
	 */
	struct FPhotoModeValues
	{
	public:
		float                                                      VignetteIntensity;                                       // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCFP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            ColorGradingLUT;                                         // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorGradingIntensity;                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MotionBlurAmount;                                        // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocusDistance;                               // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraFilmbackWidth;                                     // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraFilmbackHeight;                                    // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraRoll;                                              // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainIntensity;                                          // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SceneFringeIntensity;                                    // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TonemapperGamma;                                         // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricFogDistance;                                   // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColorGradingProfile                                ColorGradingProfile;                                     // 0x0040(0x0180) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEIPhotoMode.PhotoModeCharacterCollisionInfo
	 * Size -> 0x002C
	 */
	struct FPhotoModeCharacterCollisionInfo
	{
	public:
		class FName                                                CollisionProfileName;                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionObjectType;                                     // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionEnabled                                          CollisionEnabled;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCollisionResponseContainer                         CollisionResponseContainer;                              // 0x000A(0x0020) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JSP[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
