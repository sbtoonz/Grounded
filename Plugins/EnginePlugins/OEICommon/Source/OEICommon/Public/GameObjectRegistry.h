#pragma once
#include "CoreMinimal.h"
#include "OEIWorldRuntimeSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "GameObjectRegistry.generated.h"

class AActor;

UCLASS(Blueprintable)
class OEICOMMON_API UGameObjectRegistry : public UOEIWorldRuntimeSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AActor*> RegisteredGameObjects;
    
public:
    UGameObjectRegistry();
};

