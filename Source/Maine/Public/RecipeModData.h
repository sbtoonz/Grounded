#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "RecipeModData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRecipeModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedModType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedDescription;
    
    FRecipeModData();
};

