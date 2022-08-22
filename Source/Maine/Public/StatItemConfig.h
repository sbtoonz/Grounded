#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PlayerStatConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "StatItemConfig.generated.h"

UCLASS(Abstract)
class MAINE_API UStatItemConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TargetItem;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
    UStatItemConfig();
};

