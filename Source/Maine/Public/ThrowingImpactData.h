#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ThrowingImpactData.generated.h"

USTRUCT(BlueprintType)
struct FThrowingImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle AttackData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundRange;
    
    MAINE_API FThrowingImpactData();
};

