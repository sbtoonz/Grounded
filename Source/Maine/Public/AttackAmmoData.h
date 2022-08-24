#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttackAmmoData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAttackAmmoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AmmoItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Attack;
    
    FAttackAmmoData();
};

