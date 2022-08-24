#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "NativeRippleEvent.h"
#include "Engine/EngineTypes.h"
#include "FluidVolume.generated.h"

class UPrimitiveComponent;
class UMaterialParameterCollection;
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
class UBoxComponent;
class UPostProcessComponent;
class ASpawnedItem;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UParticleSystem;
class ALandscapeRTManager;
class APhotoPawn;

UCLASS(Blueprintable)
class MAINE_API AFluidVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* NativeWaterPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* NativeDepthImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* NativePostProcessAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* NativePostProcessBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* NativePostProcessUnderWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* NativeCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* NativeColliderCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeTickBoundsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NativeSetFootstepsInShallowWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeOpacityFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NativeEnableDepthImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeDepthImpostorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeDepthImpostorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeDepthLimitOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpawnedItem> PebbleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NativeMaxRippleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NativeNumRipples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeRippleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* NativeRTGlobalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NativeRippleAddMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* NativeOutputRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RippleUVBoundary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NativeSplashVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NativeAllowTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNativeRippleEvent> NativeRipples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RippleAddMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RippleRandomTickMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RippleRandomTickMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALandscapeRTManager* RTManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> NativeInitialOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> NativeActorsToConsider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> NativeActorsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> NativeOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AssociatedTickActors;
    
public:
    AFluidVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMaintainActorList(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickCreateRipples(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSplashVFX(AActor* Actor, bool IsOverlapEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNativeReferences();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeExit();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void NativeToggleDepthImpostorVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool NativeQualifyActor(AActor* ActorToCheck);
    
    UFUNCTION(BlueprintCallable)
    void NativeModifyRipple();
    
    UFUNCTION(BlueprintCallable)
    void NativeMaintainActorList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeIsLocalPlayerInTickRange() const;
    
    UFUNCTION(BlueprintCallable)
    void NativeInitDepthImpostor();
    
    UFUNCTION(BlueprintCallable)
    void NativeDrawAtLocation(FNativeRippleEvent RippleEvent);
    
    UFUNCTION(BlueprintCallable)
    void NativeCreateRippleEvents(bool bIsOverlapEvent);
    
    UFUNCTION(BlueprintCallable)
    void NativeCreateOverlapRipple();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraInVolume(bool XYOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorNearWaterSurface(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void GetInitialOverlaps();
    
};

