#pragma once
#include "CoreMinimal.h"
#include "GoapActionAdjustVitals.h"
#include "ECreatureActivityMode.h"
#include "GoapActionActivityMode.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionActivityMode : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreatureActivityMode ActivityMode;
    
    UGoapActionActivityMode();
};

