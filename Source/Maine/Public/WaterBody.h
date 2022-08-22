#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WaterBody.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;
class UStaticMesh;
class UBoxComponent;
class UPostProcessComponent;
class UMaterialInstanceDynamic;

UCLASS()
class MAINE_API AWaterBody : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* DepthImpostorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ImpostorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpostorRelativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMeshToTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> MaterialLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntVector NumTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* PostProcessVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PostProcessVolumeHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PostProcessVolumeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPostProcessComponent* UnderwaterPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* UnderwaterPostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* BaseCollider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BaseCollisionVolumeHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BaseCollisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* CameraCollider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CameraCollisionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CameraCollisionVolumeHeight;
    
protected:
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> MeshComponents;
    
private:
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> WaterMIDs;
    
public:
    AWaterBody();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMeshVisibility();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMaterialParameters(int32 MaterialIndex, UMaterialInstanceDynamic* Mid);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayerAboveWater() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterSurfaceWorldHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocalPlayerDistanceToWater() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

