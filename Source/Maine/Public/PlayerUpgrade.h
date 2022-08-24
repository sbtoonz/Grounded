#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Name_NetCrc.h"
#include "PlayerUpgrade.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPlayerUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName_NetCrc UpgradeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StatusEffectID;
    
    FPlayerUpgrade();
};

