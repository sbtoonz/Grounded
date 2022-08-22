#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NativeRippleEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "FluidVolume.generated.h"

class UMaterialParameterCollection;
class UPostProcessComponent;
class UStaticMeshComponent;
class USceneComponent;
class UTextureRenderTarget2D;
class UBoxComponent;
class ASpawnedItem;
class UMaterialInterface;
class UParticleSystem;
class UPrimitiveComponent;
class UMaterialInstanceDynamic;
class ALandscapeRTManager;
class APhotoPawn;

UCLASS()
class MAINE_API AFluidVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UStaticMeshComponent* NativeWaterPlane;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UStaticMeshComponent* NativeDepthImpostor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* NativePostProcessAnchor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBoxComponent* NativePostProcessBox;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPostProcessComponent* NativePostProcessUnderWater;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBoxComponent* NativeCollider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBoxComponent* NativeColliderCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NativeTickBoundsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NativeSetFootstepsInShallowWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NativeActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NativeOpacityFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NativeEnableDepthImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NativeDepthImpostorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NativeDepthImpostorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NativeDepthLimitOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASpawnedItem> PebbleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NativeMaxRippleCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NativeNumRipples;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NativeFadeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NativeRippleSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* NativeRTGlobalData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* NativeRippleAddMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* NativeOutputRT;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RippleUVBoundary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* NativeSplashVFX;
    
    UPROPERTY(BlueprintReadWrite)
    bool NativeAllowTick;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FNativeRippleEvent> NativeRipples;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceDynamic* RippleAddMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RippleRandomTickMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RippleRandomTickMax;
    
    UPROPERTY(Transient)
    ALandscapeRTManager* RTManager;
    
    UPROPERTY(Transient)
    TSet<AActor*> NativeInitialOverlappingActors;
    
    UPROPERTY(Transient)
    TSet<AActor*> NativeActorsToConsider;
    
    UPROPERTY(Transient)
    TSet<AActor*> NativeActorsToRemove;
    
    UPROPERTY(Transient)
    TSet<AActor*> NativeOverlappingActors;
    
    UPROPERTY(Transient)
    TArray<AActor*> AssociatedTickActors;
    
public:
    AFluidVolume();
protected:
    UFUNCTION()
    void TickMaintainActorList(float DeltaTime);
    
    UFUNCTION()
    void TickCreateRipples(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSplashVFX(AActor* Actor, bool IsOverlapEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupNativeReferences();
    
public:
    UFUNCTION()
    void SetTickEnabled(bool Enabled);
    
protected:
    UFUNCTION()
    void OnPhotoModeExit();
    
    UFUNCTION()
    void OnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
    UFUNCTION()
    void OnColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnCameraColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCameraColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void NativeToggleDepthImpostorVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool NativeQualifyActor(AActor* ActorToCheck);
    
    UFUNCTION(BlueprintCallable)
    void NativeModifyRipple();
    
    UFUNCTION(BlueprintCallable)
    void NativeMaintainActorList();
    
    UFUNCTION(BlueprintPure)
    bool NativeIsLocalPlayerInTickRange() const;
    
    UFUNCTION()
    void NativeInitDepthImpostor();
    
    UFUNCTION(BlueprintCallable)
    void NativeDrawAtLocation(FNativeRippleEvent RippleEvent);
    
    UFUNCTION(BlueprintCallable)
    void NativeCreateRippleEvents(bool bIsOverlapEvent);
    
    UFUNCTION(BlueprintCallable)
    void NativeCreateOverlapRipple();
    
    UFUNCTION(BlueprintPure)
    bool IsCameraInVolume(bool XYOnly) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorNearWaterSurface(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void GetInitialOverlaps();
    
};

