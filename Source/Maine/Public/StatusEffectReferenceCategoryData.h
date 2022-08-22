#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "StatusEffectReferenceCategoryData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectReferenceCategoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString CategoryName;
    
    FStatusEffectReferenceCategoryData();
};

