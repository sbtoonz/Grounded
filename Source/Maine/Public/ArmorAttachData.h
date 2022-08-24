#pragma once
#include "CoreMinimal.h"
#include "ArmorAttachData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FArmorAttachData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ArmorAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorAttachSocket;
    
    FArmorAttachData();
};

