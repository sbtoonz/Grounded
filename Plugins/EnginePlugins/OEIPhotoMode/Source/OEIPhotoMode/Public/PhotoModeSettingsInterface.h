#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhotoModeSettingsInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPhotoModeSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class IPhotoModeSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterWithPhotoModeSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterWithPhotoModeSubsystem();
    
};

