#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "StatusEffectReferenceData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectReferenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString Description;
    
    FStatusEffectReferenceData();
};

