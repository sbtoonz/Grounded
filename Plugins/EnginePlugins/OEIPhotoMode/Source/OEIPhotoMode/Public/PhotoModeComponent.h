#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PhotoModeCharacterCollisionInfo.h"
#include "EPhotoModeEntryAllowedResult.h"
#include "PhotoModeComponent.generated.h"

class AActor;
class UAnimMontage;
class ACharacter;
class APlayerController;
class APawn;
class AGameModeBase;
class APhotoPawn;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIPHOTOMODE_API UPhotoModeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CachedTransformValid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReadyToEnterPhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClientReadyCheckEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WereInputsSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsPhotoModeClone;
    
public:
    UPhotoModeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    ACharacter* SpawnPoseableClone(APlayerController* ActivatingController, APawn* OriginalPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerShowPoseableClone(ACharacter* PoseableClone);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerShowOriginalPawn(APawn* OriginalPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerShowEquipment(ACharacter* Character, FName AssociatedTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPhotoModePose(ACharacter* Clone, UAnimMontage* Montage, float BlendValue);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIsReadyToEnterPhotoMode(bool Ready);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPreSpawnPhotoModePoseableClone(APawn* OriginalPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPrePhotoModeEntered(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPostSpawnPhotoModePoseableClone(APawn* OriginalPawn, ACharacter* Clone, FPhotoModeCharacterCollisionInfo CollisionInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPhotoModeSpawnPoseableClone(APlayerController* ActivatingController, APawn* OriginalPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnPostLogin(AGameModeBase* GameMode, APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnPhotoModeExited();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnCharacterYawOffsetChanged(AActor* Actor, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHidePoseableClone(ACharacter* PoseableClone);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHideOriginalPawn(APawn* OriginalPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHideEquipment(ACharacter* Character, FName AssociatedTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitPhotoModeAsGroup(APawn* InstigatingPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnterPhotoModeAsGroup(APlayerController* InstigatingController);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDestroyPhotoModePoseableClone(ACharacter* Clone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPhotoModePose(ACharacter* Clone, UAnimMontage* Montage, float BlendValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetEquipmentVisibility(ACharacter* Character, FName AssociatedTag, bool Visible);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCharacterVisibility(ACharacter* Character, bool Visible);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnCharacterYawOffsetChanged(AActor* Actor, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastExitPhotoModeAsGroup(APawn* InstigatingPawn);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEnterPhotoModeAsGroup(APawn* InstigatingPossessedPawn);
    
    UFUNCTION(BlueprintCallable)
    EPhotoModeEntryAllowedResult IsPhotoModeEntryAllowed();
    
    UFUNCTION(BlueprintCallable)
    void EnterPhotoMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPoseableCloneOnMatchingClient(APlayerController* OwningController, ACharacter* InClone, FPhotoModeCharacterCollisionInfo CollisionInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrePhotoModeEntered(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPhotoPawnSetupInputs(APhotoPawn* PhotoPawn, UInputComponent* InputComponent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPhotoModeGroupEntryUnallowed(EPhotoModeEntryAllowedResult Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPhotoModeExited();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckIsReadyToEnterPhotoMode();
    
};

