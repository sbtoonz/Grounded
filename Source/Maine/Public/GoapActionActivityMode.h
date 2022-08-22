#pragma once
#include "CoreMinimal.h"
#include "ECreatureActivityMode.h"
#include "GoapActionAdjustVitals.h"
#include "GoapActionActivityMode.generated.h"

UCLASS()
class MAINE_API UGoapActionActivityMode : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECreatureActivityMode ActivityMode;
    
    UGoapActionActivityMode();
};

