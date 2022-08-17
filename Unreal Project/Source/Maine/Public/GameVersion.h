#pragma once
#include "CoreMinimal.h"
#include "GameVersion.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FGameVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Major;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Patch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Build;
    
    FGameVersion();
};

