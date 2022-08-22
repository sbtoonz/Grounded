#pragma once
#include "CoreMinimal.h"
#include "ArmorAttachData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FArmorAttachData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> ArmorAttachActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ArmorAttachSocket;
    
    FArmorAttachData();
};

