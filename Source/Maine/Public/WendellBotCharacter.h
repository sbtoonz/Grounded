#pragma once
#include "CoreMinimal.h"
#include "FlyingSurvivalCharacter.h"
#include "PersistentInterface.h"
#include "WendellBotCharacter.generated.h"

class UPersistenceComponent;
class AActor;

UCLASS()
class MAINE_API AWendellBotCharacter : public AFlyingSurvivalCharacter, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bActivated;
    
public:
    AWendellBotCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void HandleGameRest(float RestDuration);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsActivated() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateFollow(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
    
    // Fix for true pure virtual functions not being implemented
};

