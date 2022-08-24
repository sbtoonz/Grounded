#pragma once
#include "CoreMinimal.h"
#include "SharedSaveFile.h"
#include "SharedSaveContainer.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSharedSaveContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSharedSaveFile> Files;
    
    FSharedSaveContainer();
};

