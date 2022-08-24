#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
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

