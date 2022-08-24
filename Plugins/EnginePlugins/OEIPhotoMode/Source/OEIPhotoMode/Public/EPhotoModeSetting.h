#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeSetting.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeSetting : uint8 {
    None,
    ShowHideCharacter,
    ShowHideEquipment,
    PoseSelection,
    PoseBlend,
    Vignette,
    FilmGrain,
    SceneFringe,
    ColorGradingLUTSelection,
    ColorGradingProfileSelection,
    ColorGradingIntensity,
    CameraTilt,
    FOV,
    DOFFstop,
    DOFFocusDistance,
    TonemapperGamma,
    FogViewDistance,
    CharacterYawOffset,
    CameraSpeed,
    TimeOfDay,
    AzimuthAngleOffset,
    Custom0,
    Custom1,
    Custom2,
    Custom3,
    Custom4,
    Custom5,
    Custom6,
    Custom7,
    Custom8,
};

