#pragma once
#include "CoreMinimal.h"
#include "SharedSaveFileData.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSharedSaveFileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
    FSharedSaveFileData();
};

