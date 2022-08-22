#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "HotBarQuickSlotItemTypeKey.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FHotBarQuickSlotItemTypeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FDataTableRowHandle ItemRowHandle;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EnhanceLevel;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BonusEnhanceLevel;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag BonusEnhanceTypeTag;
    
    FHotBarQuickSlotItemTypeKey();
};

