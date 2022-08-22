#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
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

