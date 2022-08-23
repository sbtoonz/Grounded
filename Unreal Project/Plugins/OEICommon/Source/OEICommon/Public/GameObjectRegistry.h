#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OEIWorldRuntimeSubsystem.h"
#include "GameObjectRegistry.generated.h"

class AActor;

UCLASS()
class OEICOMMON_API UGameObjectRegistry : public UOEIWorldRuntimeSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGuid, AActor*> RegisteredGameObjects;
    
public:
    UGameObjectRegistry();
};

