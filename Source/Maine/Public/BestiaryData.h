#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BestiaryData.generated.h"

class UPlayerStatConfig;
class ASurvivalCharacter;

USTRUCT(BlueprintType)
struct MAINE_API FBestiaryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASurvivalCharacter> Creature;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer WeakpointTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UPlayerStatConfig*> Stats;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle RareUnlockItemData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RareDropChance;
    
    FBestiaryData();
};

