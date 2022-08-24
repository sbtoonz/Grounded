#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Name_NetCrc.h"
#include "PerkStatus.generated.h"

USTRUCT(BlueprintType)
struct FPerkStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName_NetCrc PerkName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StatusEffectID;
    
    MAINE_API FPerkStatus();
};

