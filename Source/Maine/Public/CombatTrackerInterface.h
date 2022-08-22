#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

