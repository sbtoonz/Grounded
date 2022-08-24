#pragma once
#include "CoreMinimal.h"
#include "FlyingSurvivalCharacter.h"
#include "PersistentInterface.h"
#include "WendellBotCharacter.generated.h"

class AActor;
class UPersistenceComponent;

UCLASS(Blueprintable)
class MAINE_API AWendellBotCharacter : public AFlyingSurvivalCharacter, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
public:
    AWendellBotCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGameRest(float RestDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActivated() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateFollow(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
    
    // Fix for true pure virtual functions not being implemented
};

