#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldTraceManagerComponent.generated.h"

class UBaseLookTriggerComponent;
class ASurvivalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWorldTraceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseLookTriggerComponent*> LookTriggerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASurvivalCharacter*> RelevanceList;
    
public:
    UWorldTraceManagerComponent();
};

