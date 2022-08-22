#pragma once
#include "CoreMinimal.h"
#include "MaineAlwaysRelevantActorInfo.generated.h"

class UNetConnection;
class AActor;

USTRUCT(BlueprintType)
struct FMaineAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* Connection;
    
    UPROPERTY()
    AActor* LastViewer;
    
    UPROPERTY()
    AActor* LastViewTarget;
    
    MAINE_API FMaineAlwaysRelevantActorInfo();
};

