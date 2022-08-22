#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ResearchLevelGlobalData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FResearchLevelGlobalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ResearchPointThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> UnlockRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 BonusScienceAtLevel;
    
    FResearchLevelGlobalData();
};

