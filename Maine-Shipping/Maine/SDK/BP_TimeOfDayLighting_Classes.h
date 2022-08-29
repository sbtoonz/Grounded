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
	 * BlueprintGeneratedClass BP_TimeOfDayLighting.BP_TimeOfDayLighting_C
	 * Size -> 0x03A8 (FullSize[0x0610] - InheritedSize[0x0268])
	 */
	class ABP_TimeOfDayLighting_C : public ATimeOfDayLightingManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UDirectionalLightComponent*                          SunLight;                                                // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcessMain;                                         // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UDirectionalLightComponent*                          MoonLight;                                               // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      CausticsFadeIn_NewTrack_0_A35833A344AEC615A640D888D43D4851; // 0x0290(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         CausticsFadeIn__Direction_A35833A344AEC615A640D888D43D4851; // 0x0294(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_384X[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CausticsFadeIn;                                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_HourlyPostProcessTransition_PPValue_E0358A0249856464FD5D9198D289FD56; // 0x02A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_HourlyPostProcessTransition__Direction_E0358A0249856464FD5D9198D289FD56; // 0x02A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H58N[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_HourlyPostProcessTransition;                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ASkyLight*                                           SkyLight;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SetTime;                                                 // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_26C4[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAtmosphericFog*                                     AtmosphericFog;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolumetricFogThicknessPreview;                           // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterMoonMultiplier;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterSunMultiplier;                                      // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterSkylightMultiplier;                                 // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndoorPrev;                                              // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Moon;                                                    // 0x02DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7E0A[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Sky_Sphere_2_C*                                  SkySphere;                                               // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxBrightnessOutdoor;                                    // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinBrightnessOutdoor;                                    // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogMultiplierRandom;                                     // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunDiscColorMultiplier;                                  // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunPosHorizon;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendIntensity;                                          // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightBlendStrength;                                   // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkylightMax;                                             // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteriorDaylightStrength;                                // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SkyLightColorTint;                                       // 0x030C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SunContribution;                                         // 0x031C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoonContribution;                                        // 0x031D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FogContribution;                                         // 0x031E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HedgeContribution;                                       // 0x031F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HourlyIntensity;                                         // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HedgeMoonIntensity;                                      // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentHour;                                             // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HDGT[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SunPitchCurve;                                           // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SunIntensityCurve;                                       // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MoonIntensityCurve;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MoonOcclusionMaskCurve;                                  // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MoonFadeCurve;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SunTemperatureCurve;                                     // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   SunDiscColorCurve;                                       // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FogExtinctionCurve;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   AtmosFogColorCurve;                                      // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SkyLightCubemapCurve;                                    // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SkyLightCubemapTranslucentCurve;                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   SkyLightFilterCurve;                                     // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         LootableIntensityCurve;                                  // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      FogVolumes;                                              // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class APostProcessVolume*>                          PostProcessVolumes;                                      // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<struct FVector>                                     VolumetricFogScales;                                     // 0x03B8(0x0010) Edit, BlueprintVisible
		bool                                                       Underwater;                                              // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoonPresence;                                            // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V1BW[0x6];                                   // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCalendarComponent*                                  Calendar;                                                // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OncePerDay;                                              // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U6ZJ[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DirtSpecularCurve;                                       // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FogSkylightScatterCurve;                                 // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   InteriorDaylightColorCurve;                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   HorizonColorCurve;                                       // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   ZenithColorCurve;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   WaterBallEmissiveCurve;                                  // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         HedgeSkylightCurve;                                      // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VolumetricFogs;                                          // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InteriorDaylight;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteriorDaylightContribution;                            // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PostProcessContribution;                                 // 0x0429(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0WS[0x2];                                   // 0x042A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PostProcessDayNight;                                     // 0x042C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Lights;                                                  // 0x0434(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndoorPreview;                                           // 0x0435(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HedgePreview;                                            // 0x0436(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PreviousIndoorPreview;                                   // 0x0437(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                InteriorDaylightBackground;                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ULightComponent*>                             InteriorDaylights;                                       // 0x0440(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<class UMaterialInstanceDynamic*>                    InteriorLightBGMIDs;                                     // 0x0450(0x0010) Edit, BlueprintVisible
		class UTextureCube*                                        CubemapSlot0;                                            // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureCube*                                        CubemapSlot1;                                            // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureCube*                                        EnvironmentCube_Midnight;                                // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureCube*                                        EnvironmentCube_Sunrise;                                 // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureCube*                                        EnvironmentCube_Noon;                                    // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureCube*                                        EnvironmentCube_Sunset;                                  // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   WaterlineColorCurve;                                     // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SunOcclusionMaskCurve;                                   // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerSetDOF;                                            // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5G9F[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PostProcessClass;                                        // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MeshComponentClass;                                      // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              LightComponentClass;                                     // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              NightEmissiveClass;                                      // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         VolumetricInscatterSunCurve;                             // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DOF;                                                     // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2GHZ[0x7];                                   // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveLinearColor*                                   CloudColorCurve;                                         // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CutsceneFogMultiplier;                                   // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UPK4[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTextureCube*>                                CubemapsDefault;                                         // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTextureCube*>                                CubemapsPond;                                            // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              CubemapsPondSoft[0x10];                                  // 0x0508(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       BakePreparation;                                         // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UsePondCubemaps;                                         // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3BOD[0x6];                                   // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Landscape_RT_Manager_C*                          RT_Manager;                                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Water_Base_C*>                            ActorsUsingRT;                                           // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_Water_Base_C*                                    NearestWaterBP;                                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Water_Base_C*                                    NearestWaterBP_Prev;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_LightFunction;                                       // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_LightFunction_wCaustics;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CausticsFadeCurAlpha;                                    // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isBlendingCaustics;                                      // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UnderwaterPreview;                                       // 0x055D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OEGQ[0x2];                                   // 0x055E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         WaterSkylightIntensityCurve;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HDR_Enabled;                                             // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TGJG[0x3];                                   // 0x0569(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HDR_Sun_Multiplier;                                      // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HDR_Sky_Multiplier;                                      // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HDR_SunDisc_Multiplier;                                  // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HDR_Moon_Multiplier;                                     // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HDR_MoonDisc_Multiplier;                                 // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HDR_CloudOpacity_Multiplier;                             // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HDR_SunDisc_BloomScale_Multiplier;                       // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         HDR_SkylightCurve;                                       // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OakTreeUVOffset1;                                        // 0x0590(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OakTreeUVOffset2;                                        // 0x059C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OakTreeWindSpeed1;                                       // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OakTreeWindSpeed2;                                       // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OakTreeWindStrength1;                                    // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OakTreeWindStrength2;                                    // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OakTreeShadowLeavesScale;                                // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundSpecularContribution;                              // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MO4V[0x3];                                   // 0x05BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_BlendTrigger_C*>                          BlendTriggerArray;                                       // 0x05C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FBlendTriggerAttributes                             BlendTriggerAttributesTOD;                               // 0x05D0(0x002C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I23R[0x4];                                   // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BlendTrigger_C*                                  CurrentTrigger;                                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BlendTrigger_C*                                  PreviousTrigger;                                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UPostProcessComponent* GetPostProcessMain();
		class UDirectionalLightComponent* GetSunLight();
		void SetPreviousTrigger(class ABP_BlendTrigger_C** PreviousTrigger);
		void SortTriggerArrayByPriority(TArray<class ABP_BlendTrigger_C*>* BlendTriggerArray, TArray<class ABP_BlendTrigger_C*>* OutBlendTriggerArray);
		void RegisterBlendTrigger(class ABP_BlendTrigger_C* BlendTrigger, bool Deregister);
		void Photo_Mode_Hourly_Event_Updates();
		void Get_Current_Hour(int32_t* Current_Hour);
		void UpdateOakTreeShadow();
		void UpdatePostProcess();
		void UpdateTransitions();
		void UpdateCollections();
		void UpdateVolumetricFog();
		void UpdateSkylight();
		void UpdateSky();
		void UpdateMoon();
		void UpdateSun();
		void GetNearestWaterBounds();
		void GetAllReferences();
		void SetBlendIntensity(float NewIntensity);
		void UserConstructionScript();
		void TL_HourlyPostProcessTransition__FinishedFunc();
		void TL_HourlyPostProcessTransition__UpdateFunc();
		void CausticsFadeIn__FinishedFunc();
		void CausticsFadeIn__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void CubemapSwap(int32_t NewHour, int32_t NewDay);
		void UpdateHourlyVariables(int32_t NewHour, int32_t NewDay);
		void DisableFog(int32_t NewHour, int32_t NewDay);
		void UpdateDailyVariables(int32_t NewDay);
		void SetSunAngle(float Angle);
		void ClearArrays();
		void ToggleDOF();
		void SetDOFDistance(float Distance);
		void SetDOFBlur(float Radius);
		void SetDOFDepthBlur(float Blur);
		void SetHourlyEvents(class UCalendarComponent* Calendar);
		void SetHourlyPostProcess();
		void SetSkylightCubemaps(class UCalendarComponent* Calendar);
		void SetHourlyFogEvents(class UCalendarComponent* Calendar);
		void SetCutsceneFog(float FogMultiplier);
		void SetFoliageViewDistance(float ViewDistanceOverride);
		void SetPondCubemaps();
		void SetDefaultCubemaps();
		void Set_Water_Caustic_Masks();
		void OnActiveBlendablesChanged();
		void Update_Hourly_Events();
		void ExecuteUbergraph_BP_TimeOfDayLighting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
