#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "StatItemConfig.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UStatItemConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TargetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UStatItemConfig();
};

