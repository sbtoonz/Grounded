#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InteractableInterface.h"
#include "EInteractionType.h"
#include "RemoteInteractionActor.generated.h"

class UAnimMontage;

UCLASS()
class MAINE_API ARemoteInteractionActor : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool HoldToUse;
    
    UPROPERTY(ReplicatedUsing=OnRep_InteractedByList)
    TArray<FGuid> InteractedByList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> ItemsToGrantOnUse;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* OverrideInteractAnim;
    
public:
    ARemoteInteractionActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Use(AActor* InstigatedBy);
    
    UFUNCTION()
    void OnRep_InteractedByList();
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleRemoteInteractionState(bool bIsRemoteInteracted);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EInteractionType GetUseInteractionType(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanUse(const AActor* InstigatedBy) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

