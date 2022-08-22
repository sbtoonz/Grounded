#pragma once
#include "CoreMinimal.h"
#include "PlayerUpgradeTier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPlayerUpgradeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "PlayerUpgradeData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAINE_API FPlayerUpgradeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UObject> Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPlayerUpgradeType UpgradeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPlayerUpgradeTier> Tiers;
    
    FPlayerUpgradeData();
};

