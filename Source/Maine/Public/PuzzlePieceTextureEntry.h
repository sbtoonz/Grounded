#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceTextureEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPuzzlePieceTextureEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTexture2D* KnownAreaTexture;
    
public:
    MAINE_API FPuzzlePieceTextureEntry();
};

