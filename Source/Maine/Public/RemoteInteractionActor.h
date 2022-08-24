#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EInteractionType.h"
#include "RemoteInteractionActor.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MAINE_API ARemoteInteractionActor : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractedByList, meta=(AllowPrivateAccess=true))
    TArray<FGuid> InteractedByList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ItemsToGrantOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OverrideInteractAnim;
    
public:
    ARemoteInteractionActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Use(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractedByList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRemoteInteractionState(bool bIsRemoteInteracted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EInteractionType GetUseInteractionType(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUse(const AActor* InstigatedBy) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

