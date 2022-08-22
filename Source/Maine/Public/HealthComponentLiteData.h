#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "HealthComponentLiteData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UHealthComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxHits;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxHealth;
    
    UHealthComponentLiteData();
};

