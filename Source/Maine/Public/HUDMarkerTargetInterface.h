#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDMarkerTargetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHUDMarkerTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IHUDMarkerTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetShouldShowHUDMarker() const;
    
};

