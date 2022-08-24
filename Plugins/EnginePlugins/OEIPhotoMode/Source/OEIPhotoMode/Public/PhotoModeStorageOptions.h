#pragma once
#include "CoreMinimal.h"
#include "PhotoModeStorageOptions.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeStorageOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    OEIPHOTOMODE_API FPhotoModeStorageOptions();
};

