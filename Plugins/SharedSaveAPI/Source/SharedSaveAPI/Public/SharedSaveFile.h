#pragma once
#include "CoreMinimal.h"
#include "SharedSaveFileData.h"
#include "SharedSaveFile.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSharedSaveFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSaveFileData Data;
    
    FSharedSaveFile();
};

