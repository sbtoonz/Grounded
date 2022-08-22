#pragma once
#include "CoreMinimal.h"
#include "AutoEquipmentProperties.generated.h"

USTRUCT(BlueprintType)
struct FAutoEquipmentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ItemName;
    
    UPROPERTY(EditAnywhere)
    int32 Slot;
    
    UPROPERTY(EditAnywhere)
    int32 Amount;
    
    UPROPERTY(EditAnywhere)
    bool bRefill;
    
    UPROPERTY(EditAnywhere)
    bool bCanThrow;
    
    MAINE_API FAutoEquipmentProperties();
};

