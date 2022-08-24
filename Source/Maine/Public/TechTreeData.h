#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "Styling/SlateBrush.h"
#include "TechTreeData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct MAINE_API FTechTreeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TechTreeRecipesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScienceRewardOnUnlock;
    
    FTechTreeData();
};

