#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "FrankenlineMaster.generated.h"

class UStaticMeshComponent;
class UTextureRenderTarget2D;
class UObsidianIDComponent;
class UPersistenceComponent;

UCLASS()
class MAINE_API AFrankenlineMaster : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<uint8> ImageStreamingBuffer;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float BrushSize;
    
    UPROPERTY(EditDefaultsOnly)
    float WriteHeadSize;
    
    UPROPERTY(EditDefaultsOnly)
    float LineReplicationRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor WriteHeadColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FLinearColor> Colors;
    
    UPROPERTY(Transient)
    uint8 CurrentColorIndex;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector2D CursorPosition;
    
    UPROPERTY(EditDefaultsOnly)
    FIntPoint RenderTargetDimensions;
    
public:
    AFrankenlineMaster();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
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
    UFUNCTION(BlueprintImplementableEvent)
    void HandleRenderTargetCreated();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleHitEdge();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleCycleColor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleClearScreen();
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetNextColor() const;
    
    UFUNCTION(BlueprintPure)
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

