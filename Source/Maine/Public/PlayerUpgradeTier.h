#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerUpgradeTier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPlayerUpgradeTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StatusEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FPlayerUpgradeTier();
};

