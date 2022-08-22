#pragma once
#include "CoreMinimal.h"
#include "ColonyIdentifier.h"
#include "ProxySceneComponent.h"
#include "ProxyAttractionComponent.generated.h"

class UCharacterLODActor;
class UGoapAction;
class UAttractionLODComponent;

UCLASS()
class MAINE_API UProxyAttractionComponent : public UProxySceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UGoapAction*> AdvertisedActions;
    
    UPROPERTY()
    UAttractionLODComponent* OwnerAttractionLODComponent;
    
    UProxyAttractionComponent();
    UFUNCTION(BlueprintPure)
    bool CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const;
    
    UFUNCTION(BlueprintPure)
    bool CanCharacterUse(const UCharacterLODActor* Character) const;
    
};

