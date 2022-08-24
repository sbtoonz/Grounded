#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "CameraViewProvider.h"
#include "PersistentInterface.h"
#include "LocString.h"
#include "ScanSwitch.generated.h"

class UPersistenceComponent;
class UOCLComponent;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class MAINE_API AScanSwitch : public AActor, public IInteractableInterface, public IPersistentInterface, public ICameraViewProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractLocationSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractLocationZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InteractUnderwater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bScanned: 1;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CurrentUser)
    TWeakObjectPtr<AActor> CurrentUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AScanSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopScan(bool bInteractSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartScan();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentUser();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopScan(bool bInteractSuccess);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartScan();
    
    
    // Fix for true pure virtual functions not being implemented
};

