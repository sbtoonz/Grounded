#pragma once
#include "CoreMinimal.h"
#include "HUDMarkerTargetInterface.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "UObject/NoExportTypes.h"
#include "LocString.h"
#include "LootBag.generated.h"

class UActorLiteData;
class UInventoryComponent;
class ULootComponent;
class UPersistenceComponent;
class UObsidianIDComponent;
class UInteractionWidget;

UCLASS(Blueprintable)
class MAINE_API ALootBag : public AActor, public IInteractableInterface, public IHUDMarkerTargetInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString OwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAllowPreviousOwnerToLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLootOnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyWhenEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootComponent* LootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractionWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBuoyancy: 1;
    
public:
    ALootBag();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickBuoyancy(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResyncReplicationTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetShouldShowHUDMarker() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

