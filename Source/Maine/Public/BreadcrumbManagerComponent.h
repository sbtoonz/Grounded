#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreadcrumbManagerComponent.generated.h"

class UGoapAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBreadcrumbManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGoapAction*> BreadcrumbsFlat;
    
    UBreadcrumbManagerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimestamp() const;
    
};

