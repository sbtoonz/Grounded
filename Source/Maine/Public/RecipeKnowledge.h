#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=Name_NetCrc -FallbackName=Name_NetCrc
#include "RecipeKnowledge.generated.h"

USTRUCT(BlueprintType)
struct FRecipeKnowledge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName_NetCrc RecipeRowName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bReplaced;
    
    MAINE_API FRecipeKnowledge();
};

