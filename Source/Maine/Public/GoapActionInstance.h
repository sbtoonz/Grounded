#pragma once
#include "CoreMinimal.h"
#include "GoapActionOwner.h"
#include "GoapActionInstance.generated.h"

class UGoapAction;

USTRUCT(BlueprintType)
struct FGoapActionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGoapActionOwner Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGoapAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bProjectToGround;
    
    MAINE_API FGoapActionInstance();
};

