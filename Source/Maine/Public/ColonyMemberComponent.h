#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "LODableComponentInterface.h"
#include "DamageInfo.h"
#include "ColonyIdentifier.h"
#include "ColonyMemberComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UColonyMemberComponent : public UActorComponent, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag DefaultColony;
    
public:
    UColonyMemberComponent();
protected:
    UFUNCTION()
    void OnDeathCallback(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMemberOf(const FColonyIdentifier& Identifier) const;
    
    UFUNCTION(BlueprintPure)
    FColonyIdentifier GetColonyIdentifier() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

