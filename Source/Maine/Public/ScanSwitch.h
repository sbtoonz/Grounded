#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
#include "CameraViewProvider.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ScanSwitch.generated.h"

class UPersistenceComponent;
class UOCLComponent;
class UObsidianIDComponent;

UCLASS()
class MAINE_API AScanSwitch : public AActor, public IInteractableInterface, public IPersistentInterface, public ICameraViewProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLocString DisplayName;
    
    UPROPERTY(EditAnywhere)
    FLocString InteractionText;
    
    UPROPERTY(EditAnywhere)
    FLocString LockedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScanTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName InteractLocationSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InteractLocationZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InteractUnderwater;
    
    UPROPERTY(Replicated)
    uint8 bScanned: 1;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentUser)
    TWeakObjectPtr<AActor> CurrentUser;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AScanSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopScan(bool bInteractSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartScan();
    
protected:
    UFUNCTION()
    void OnRep_CurrentUser();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStopScan(bool bInteractSuccess);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartScan();
    
    
    // Fix for true pure virtual functions not being implemented
};

