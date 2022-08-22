#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SourceTexture.h"
#include "TexturePacker.generated.h"

class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UMaterialInterface;
class UCanvas;

UCLASS()
class MAINE_API ATexturePacker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSourceTexture> SourceTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* DestinationTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* TexturePackMaterial;
    
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* TexturePackMID;
    
    UPROPERTY(Transient)
    UCanvas* Canvas;
    
public:
    ATexturePacker();
};

