#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "HealthColliderConfig.generated.h"

class USurvivalDamageType;

USTRUCT(BlueprintType)
struct MAINE_API FHealthColliderConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ForwardComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForwardAngleRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer DamageSourceTags;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 DamageTypeFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> DamageType;
    
    FHealthColliderConfig();
};

