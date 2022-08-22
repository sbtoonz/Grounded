#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "TechTreeData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct MAINE_API FTechTreeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* TechTreeRecipesTable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ScienceRewardOnUnlock;
    
    FTechTreeData();
};

