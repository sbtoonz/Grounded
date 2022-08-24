#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FrankenlineMaster.generated.h"

class UStaticMeshComponent;
class UObsidianIDComponent;
class UTextureRenderTarget2D;
class UPersistenceComponent;

UCLASS(Blueprintable)
class MAINE_API AFrankenlineMaster : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TArray<uint8> ImageStreamingBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WriteHeadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineReplicationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WriteHeadColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Colors;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 CurrentColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector2D CursorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint RenderTargetDimensions;
    
public:
    AFrankenlineMaster();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReplicateDrawLine();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDrawLine(FVector2D To, uint8 ColorIndex);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCycleColor();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClear();
    
    UFUNCTION(BlueprintCallable)
    void InputMotion(FVector2D Motion);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleRenderTargetCreated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHitEdge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCycleColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleClearScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetNextColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentColor() const;
    
    UFUNCTION(BlueprintCallable)
    void FinallyCycleColor();
    
    UFUNCTION(BlueprintCallable)
    void FinallyClear();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheCursorMesh(UStaticMeshComponent* InCursorMesh);
    
    
    // Fix for true pure virtual functions not being implemented
};

