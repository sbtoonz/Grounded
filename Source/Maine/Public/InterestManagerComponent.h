#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "InterestManagerComponent.generated.h"

class UProxyAttractionComponent;
class UInterestCore;
class UAttractionComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInterestManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UInterestCore*> ImmediateScanList;
    
    UPROPERTY(Transient)
    TArray<UProxyAttractionComponent*> MovingProxyAdvertisements;
    
    UPROPERTY(Export, Transient)
    TArray<UAttractionComponent*> FullAdvertisements;
    
public:
    UInterestManagerComponent();
};

