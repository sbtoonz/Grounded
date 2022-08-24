#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "ResearchLevelGlobalData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FResearchLevelGlobalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResearchPointThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> UnlockRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusScienceAtLevel;
    
    FResearchLevelGlobalData();
};

