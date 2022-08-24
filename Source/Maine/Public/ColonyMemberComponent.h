#pragma once
#include "CoreMinimal.h"
#include "ColonyIdentifier.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "LODableComponentInterface.h"
#include "GameplayTagContainer.h"
#include "DamageInfo.h"
#include "ColonyMemberComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UColonyMemberComponent : public UActorComponent, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultColony;
    
public:
    UColonyMemberComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathCallback(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMemberOf(const FColonyIdentifier& Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyIdentifier GetColonyIdentifier() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

