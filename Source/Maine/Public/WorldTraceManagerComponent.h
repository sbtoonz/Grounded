#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WorldTraceManagerComponent.generated.h"

class UBaseLookTriggerComponent;
class ASurvivalCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWorldTraceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UBaseLookTriggerComponent*> LookTriggerList;
    
    UPROPERTY(Transient)
    TArray<ASurvivalCharacter*> RelevanceList;
    
public:
    UWorldTraceManagerComponent();
};

