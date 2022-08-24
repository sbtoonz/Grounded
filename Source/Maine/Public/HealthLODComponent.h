#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "DamageInfo.h"
#include "HealthLODComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API UHealthLODComponent : public UBaseLODComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UHealthLODComponent();
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnDeath(const FDamageInfo& DamageInfo);
    
    
    // Fix for true pure virtual functions not being implemented
};

