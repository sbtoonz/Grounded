#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "AutoRandomInputProperties.generated.h"

USTRUCT(BlueprintType)
struct FAutoRandomInputProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    bool bAxis;
    
    UPROPERTY(EditAnywhere)
    float MinAxisDeltaSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxAxisDeltaSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bHold;
    
    UPROPERTY(EditAnywhere)
    float MinHoldTime;
    
    UPROPERTY(EditAnywhere)
    float MaxHoldTime;
    
    UPROPERTY(EditAnywhere)
    float MinTriggerTime;
    
    UPROPERTY(EditAnywhere)
    float MaxTriggerTime;
    
    MAINE_API FAutoRandomInputProperties();
};

