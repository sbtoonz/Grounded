#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "StatProcessItemConfig.generated.h"

UCLASS(Blueprintable)
class MAINE_API UStatProcessItemConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetProcessingBuildingTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TargetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemTags;
    
    UStatProcessItemConfig();
};

