#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "EPlayerUpgradeType.h"
#include "PlayerUpgradeTier.h"
#include "PlayerUpgradeData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAINE_API FPlayerUpgradeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerUpgradeType UpgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerUpgradeTier> Tiers;
    
    FPlayerUpgradeData();
};

