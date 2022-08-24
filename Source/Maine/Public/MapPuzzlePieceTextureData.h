#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPuzzlePieceZone.h"
#include "PuzzlePieceTextureEntry.h"
#include "MapPuzzlePieceTextureData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UMapPuzzlePieceTextureData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPuzzlePieceZone, FPuzzlePieceTextureEntry> PuzzlePieceTextures;
    
public:
    UMapPuzzlePieceTextureData();
};

