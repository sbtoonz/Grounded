#pragma once
#include "CoreMinimal.h"
#include "EOEIGender.generated.h"

UENUM()
enum class EOEIGender : uint8 {
    Male,
    Female,
    Neuter,
    GenderNeutral,
};

