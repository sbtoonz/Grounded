#pragma once
#include "CoreMinimal.h"
#include "ColonyIdentifier.h"
#include "ProxySceneComponent.h"
#include "ProxyAttractionComponent.generated.h"

class UGoapAction;
class UAttractionLODComponent;
class UCharacterLODActor;

UCLASS(Blueprintable)
class MAINE_API UProxyAttractionComponent : public UProxySceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGoapAction*> AdvertisedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttractionLODComponent* OwnerAttractionLODComponent;
    
    UProxyAttractionComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterUse(const UCharacterLODActor* Character) const;
    
};

