#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "HealthComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UHealthComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UHealthComponentLiteData();
};

