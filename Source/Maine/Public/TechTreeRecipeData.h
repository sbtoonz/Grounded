#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ETechTreeUnlockType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "TechTreeRecipeData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTechTreeRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString OverrideDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString OverrideDisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETechTreeUnlockType UnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> UnlockData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FGameplayTag> UnlockDataTags;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 RequiredTechTreeUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bRecommended;
    
    FTechTreeRecipeData();
};

