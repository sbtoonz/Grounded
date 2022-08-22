#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "RecipeModData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRecipeModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ItemRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedModType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDescription;
    
    FRecipeModData();
};

