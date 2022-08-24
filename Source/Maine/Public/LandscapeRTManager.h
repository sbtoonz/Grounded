#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LandscapeRTManager.generated.h"

UCLASS(Blueprintable)
class MAINE_API ALandscapeRTManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> NativeActorsUsingRT;
    
    ALandscapeRTManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActors() const;
    
};

