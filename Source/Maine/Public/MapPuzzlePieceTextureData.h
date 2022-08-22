#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPuzzlePieceZone.h"
#include "PuzzlePieceTextureEntry.h"
#include "MapPuzzlePieceTextureData.generated.h"

UCLASS()
class MAINE_API UMapPuzzlePieceTextureData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EPuzzlePieceZone, FPuzzlePieceTextureEntry> PuzzlePieceTextures;
    
public:
    UMapPuzzlePieceTextureData();
};

