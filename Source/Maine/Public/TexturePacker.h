#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SourceTexture.h"
#include "TexturePacker.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UCanvas;

UCLASS(Blueprintable)
class MAINE_API ATexturePacker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceTexture> SourceTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DestinationTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TexturePackMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TexturePackMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCanvas* Canvas;
    
public:
    ATexturePacker();
};

