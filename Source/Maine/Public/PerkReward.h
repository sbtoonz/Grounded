#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PerkReward.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPerkReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> Recipes;
    
    FPerkReward();
};

