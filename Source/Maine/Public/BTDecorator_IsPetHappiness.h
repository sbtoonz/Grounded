#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_IsPetHappiness.generated.h"

UCLASS()
class MAINE_API UBTDecorator_IsPetHappiness : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 MinStep;
    
    UPROPERTY(EditAnywhere)
    int32 MaxStep;
    
public:
    UBTDecorator_IsPetHappiness();
};

