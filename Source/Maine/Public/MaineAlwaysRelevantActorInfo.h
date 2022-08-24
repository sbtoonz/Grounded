#pragma once
#include "CoreMinimal.h"
#include "MaineAlwaysRelevantActorInfo.generated.h"

class UNetConnection;
class AActor;

USTRUCT(BlueprintType)
struct FMaineAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewTarget;
    
    MAINE_API FMaineAlwaysRelevantActorInfo();
};

