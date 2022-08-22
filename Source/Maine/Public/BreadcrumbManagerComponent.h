#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BreadcrumbManagerComponent.generated.h"

class UGoapAction;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBreadcrumbManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UGoapAction*> BreadcrumbsFlat;
    
    UBreadcrumbManagerComponent();
    UFUNCTION(BlueprintPure)
    float GetCurrentTimestamp() const;
    
};

