#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "StatusEffectUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString Description;
    
    FStatusEffectUIData();
};

