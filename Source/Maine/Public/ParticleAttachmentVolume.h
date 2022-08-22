#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "ParticleAttachmentVolume.generated.h"

class UMaterialParameterCollection;
class UNiagaraComponent;
class UBoxComponent;

UCLASS()
class MAINE_API AParticleAttachmentVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UNiagaraComponent* NiagaraParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParticleSystemActiveMPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EmitterLocationMPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ExtinctionVolumeLerpMPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SurfaceDistanceLerpMPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForwardOffsetMPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EnabledPhysMatMPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffsetFromActorForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceToSurfaceLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LerpWhenInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseXYDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlignParticleSystemWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSurfaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> EnabledPhysMatSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* ParticleVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BlockersTag;
    
    UPROPERTY(Transient)
    TArray<AActor*> Blockers;
    
    AParticleAttachmentVolume();
    UFUNCTION()
    void OnBeginPlay();
    
    UFUNCTION(BlueprintPure)
    bool IsVolumeReachableByPhotoMode() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsNiagaraActivationAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocalPlayerInVolume() const;
    
};

