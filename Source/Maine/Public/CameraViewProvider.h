#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraViewProvider.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCameraViewProvider : public UInterface {
    GENERATED_BODY()
};

class ICameraViewProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasLookAtLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLookAtLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetCameraViewTransform();
    
};

