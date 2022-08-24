#pragma once
#include "CoreMinimal.h"
#include "Name_NetCrc.h"
#include "RecipeKnowledge.generated.h"

USTRUCT(BlueprintType)
struct FRecipeKnowledge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName_NetCrc RecipeRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaced;
    
    MAINE_API FRecipeKnowledge();
};

