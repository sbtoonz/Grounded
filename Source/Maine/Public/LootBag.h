#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "HUDMarkerTargetInterface.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "LootBag.generated.h"

class UInventoryComponent;
class UActorLiteData;
class UObsidianIDComponent;
class ULootComponent;
class UPersistenceComponent;
class UInteractionWidget;

UCLASS()
class MAINE_API ALootBag : public AActor, public IInteractableInterface, public IHUDMarkerTargetInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleDefaultsOnly)
    UActorLiteData* LiteData;
    
    UPROPERTY(Replicated)
    FGuid OwnerPlayerGuid;
    
    UPROPERTY(Replicated)
    FString OwnerName;
    
    UPROPERTY(EditDefaultsOnly)
    FText OverrideName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyAllowPreviousOwnerToLoot;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoLootOnInteract;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDestroyWhenEmpty;
    
    UPROPERTY(Replicated)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    ULootComponent* LootComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UInteractionWidget> WidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseBuoyancy: 1;
    
public:
    ALootBag();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void TickBuoyancy(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResyncReplicationTransform();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool GetShouldShowHUDMarker() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

