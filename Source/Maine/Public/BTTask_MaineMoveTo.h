#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_MoveTo -FallbackName=BTTask_MoveTo
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "EMovementSpeed.h"
#include "BTTask_MaineMoveTo.generated.h"

UCLASS(BlueprintType)
class MAINE_API UBTTask_MaineMoveTo : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EMovementSpeed MovementSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxMoveDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float RandomDeviation;
    
    UPROPERTY(Config, EditAnywhere)
    float SprintAfterDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxInefficiency;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowBreadcrumbs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAbortOnInterestChanged;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AdditionalRadiusBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutFailReasonBlackboardKey;
    
public:
    UBTTask_MaineMoveTo();
};

