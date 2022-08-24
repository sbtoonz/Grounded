#pragma once
#include "CoreMinimal.h"
#include "GoapActionOwner.h"
#include "GoapActionInstance.generated.h"

class UGoapAction;

USTRUCT(BlueprintType)
struct FGoapActionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoapActionOwner Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectToGround;
    
    MAINE_API FGoapActionInstance();
};

