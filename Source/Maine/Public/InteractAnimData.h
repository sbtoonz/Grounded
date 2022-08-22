#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractAnimData.generated.h"

class UAnimEffect;
class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FInteractAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimEffect* Anim;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Prop;
    
    FInteractAnimData();
};

