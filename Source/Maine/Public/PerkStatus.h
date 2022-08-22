#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=Name_NetCrc -FallbackName=Name_NetCrc
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PerkStatus.generated.h"

USTRUCT(BlueprintType)
struct FPerkStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName_NetCrc PerkName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Tier;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEquipped;
    
    UPROPERTY()
    FGuid StatusEffectID;
    
    MAINE_API FPerkStatus();
};

