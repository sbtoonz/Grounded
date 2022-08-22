#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "PredefinedColonyData.h"
#include "ColonyManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UColonyManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPredefinedColonyData> EditorColonyData;
    
public:
    UColonyManagerComponent();
    UFUNCTION(Exec)
    void DebugDumpColonies();
    
    
    // Fix for true pure virtual functions not being implemented
};

