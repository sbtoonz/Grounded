#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTService_UpdateCombatState.generated.h"

UCLASS()
class MAINE_API UBTService_UpdateCombatState : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CombatStateKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetActorKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DesiredAttackKey;
    
public:
    UBTService_UpdateCombatState();
};

