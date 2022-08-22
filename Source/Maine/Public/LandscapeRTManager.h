#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LandscapeRTManager.generated.h"

UCLASS()
class MAINE_API ALandscapeRTManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSet<AActor*> NativeActorsUsingRT;
    
    ALandscapeRTManager();
    UFUNCTION(BlueprintPure)
    bool HasAnyActors() const;
    
};

