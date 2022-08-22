#pragma once
#include "CoreMinimal.h"
#include "BTTask_WaitButKeepUp.h"
#include "BTTask_ActivePetWait.generated.h"

UCLASS()
class MAINE_API UBTTask_ActivePetWait : public UBTTask_WaitButKeepUp {
    GENERATED_BODY()
public:
    UBTTask_ActivePetWait();
};

