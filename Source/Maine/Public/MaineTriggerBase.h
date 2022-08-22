#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ETriggerType.h"
#include "PersistentInterface.h"
#include "TriggerDelegateDelegate.h"
#include "GlobalVariableReferenceConditional.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaineTriggerBase.generated.h"

class UShapeComponent;
class UObsidianIDComponent;
class UPersistenceComponent;

UCLASS(Abstract)
class MAINE_API AMaineTriggerBase : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTriggerDelegate OnTriggered;
    
private:
    UPROPERTY(EditAnywhere)
    int32 MaxTriggerCount;
    
    UPROPERTY(EditAnywhere)
    bool bPlayersOnly;
    
    UPROPERTY(EditAnywhere)
    ETriggerType TriggerType;
    
    UPROPERTY(EditAnywhere)
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
public:
    AMaineTriggerBase();
    UFUNCTION(BlueprintCallable)
    void ResetTriggerCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTrigger(AActor* OtherActor);
    
private:
    UFUNCTION()
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActorInstigator);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetTriggerCount() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

