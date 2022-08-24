#pragma once
#include "CoreMinimal.h"
#include "OEIStringEntry.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FOEIStringEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    FString DefaultText;
    
    UPROPERTY(EditAnywhere)
    FString FemaleText;
    
    UPROPERTY(EditAnywhere)
    FString GenderNeutralText;
    
public:
    FOEIStringEntry();
};

