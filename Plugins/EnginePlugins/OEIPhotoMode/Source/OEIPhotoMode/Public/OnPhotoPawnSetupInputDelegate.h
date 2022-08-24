#pragma once
#include "CoreMinimal.h"
#include "OnPhotoPawnSetupInputDelegate.generated.h"

class UInputComponent;
class APhotoPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPhotoPawnSetupInput, APhotoPawn*, Pawn, UInputComponent*, InputComponent);

