#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.generated.h"

UENUM()
enum class EInteractionType : uint8 {
    None,
    Pickup,
    Eat,
    Drink,
    Cook,
    Rest,
    PlaceBuilding,
    AddIngredient,
    LightFire,
    InventoryFull,
    Drying,
    InvalidPlayer,
    Equip,
    Cancel,
    UnableToLightFire,
    Storage,
    Conversation,
    Revive,
    MissingIngredients,
    Busy,
    StartZiplineConnection,
    ZiplineZip,
    Mount,
    CannotHaul,
    Climb,
    Pet,
    PetHome,
    ConfigureSign,
    SpinningWheel,
    Turret,
};

