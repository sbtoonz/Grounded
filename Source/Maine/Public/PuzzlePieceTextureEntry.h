#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceTextureEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPuzzlePieceTextureEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* KnownAreaTexture;
    
public:
    MAINE_API FPuzzlePieceTextureEntry();
};

