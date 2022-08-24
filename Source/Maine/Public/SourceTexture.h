#pragma once
#include "CoreMinimal.h"
#include "SourceTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSourceTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    MAINE_API FSourceTexture();
};

