#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Engine/EngineTypes.h"
#include "BTDecorator_IsMovementMode.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsMovementMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(EditAnywhere)
    uint8 CustomMovementMode;
    
public:
    UBTDecorator_IsMovementMode();
};

