#pragma once
#include "CoreMinimal.h"
#include "EFPSLimit.generated.h"

UENUM()
enum class EFPSLimit : uint8 {
    Thirty,
    Sixty,
    HundredTwenty,
    HundredFourtyFour,
    HundredSixty,
    HundredSixtyFive,
    HundredEighty,
    TwoHundred,
    TwoHundredFourty,
    Unlimited,
};

