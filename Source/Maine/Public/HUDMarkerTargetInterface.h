#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

