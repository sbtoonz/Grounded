#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PlayerUpgradeTier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPlayerUpgradeTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle StatusEffectData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Value;
    
    FPlayerUpgradeTier();
};

