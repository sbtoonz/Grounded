#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "BTDecorator_IsMovementMode.generated.h"

UCLASS(BlueprintType)
class MAINE_API UBTDecorator_IsMovementMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CustomMovementMode;
    
public:
    UBTDecorator_IsMovementMode();
};

