#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=Name_NetCrc -FallbackName=Name_NetCrc
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PlayerUpgrade.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPlayerUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName_NetCrc UpgradeName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Tier;
    
    UPROPERTY()
    FGuid StatusEffectID;
    
    FPlayerUpgrade();
};

