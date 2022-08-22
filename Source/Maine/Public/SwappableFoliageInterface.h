#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ECanRevertToFoliageState.h"
#include "SwappableFoliageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USwappableFoliageInterface : public UInterface {
    GENERATED_BODY()
};

class ISwappableFoliageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifySwapped(bool bFromDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECanRevertToFoliageState CanRevertToFoliage() const;
    
};

