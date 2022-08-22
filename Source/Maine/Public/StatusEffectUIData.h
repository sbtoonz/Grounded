#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "StatusEffectUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString Description;
    
    FStatusEffectUIData();
};

