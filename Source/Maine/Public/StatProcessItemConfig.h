#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PlayerStatConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "StatProcessItemConfig.generated.h"

UCLASS()
class MAINE_API UStatProcessItemConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetProcessingBuildingTypes;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TargetItem;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ItemTags;
    
    UStatProcessItemConfig();
};

