#pragma once
#include "CoreMinimal.h"
#include "ERadialShortcut.generated.h"

UENUM()
enum class ERadialShortcut : uint8 {
    EmptyShortcut,
    OpenInventoryMenu,
    OpenCraftingMenu,
    OpenMapMenu,
    OpenQuestMenu,
    ToggleCameraMode,
    ToggleTimeMode,
    OpenFeedbackMenu,
    ToggleFarHUDMarkers,
    EnterPhotoMode,
    EnterSpyGlassMode,
};

