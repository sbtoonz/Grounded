#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "PredefinedColonyData.h"
#include "ColonyManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UColonyManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPredefinedColonyData> EditorColonyData;
    
public:
    UColonyManagerComponent();
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDumpColonies();
    
    
    // Fix for true pure virtual functions not being implemented
};

