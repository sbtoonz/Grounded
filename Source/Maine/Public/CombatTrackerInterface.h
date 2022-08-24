#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "CombatTrackerInterface.generated.h"

class ASurvivalCharacter;

UINTERFACE(Blueprintable, MinimalAPI)
class UCombatTrackerInterface : public UInterface {
    GENERATED_BODY()
};

class ICombatTrackerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveCombatTracker(ASurvivalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetHighestPriorityCombatTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCombatTracker(ASurvivalCharacter* Character);
    
};

