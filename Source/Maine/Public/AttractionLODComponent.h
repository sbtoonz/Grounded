#pragma once
#include "CoreMinimal.h"
#include "SceneLODComponent.h"
#include "EGeneratedLocationType.h"
#include "ColonyIdentifier.h"
#include "AttractionLODComponent.generated.h"

class UProxyAttractionComponent;
class UAttractionComponent;
class UCharacterLODActor;
class UGoapAction;

UCLASS(BlueprintType)
class MAINE_API UAttractionLODComponent : public USceneLODComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UProxyAttractionComponent* ProxyAttractionComponent;
    
    UPROPERTY(Export)
    UAttractionComponent* FullAttractionComponent;
    
public:
    UAttractionLODComponent();
    UFUNCTION(BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetProjectToGround() const;
    
    UFUNCTION(BlueprintPure)
    EGeneratedLocationType GetGeneratedLocationType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UGoapAction*> GetAdvertisedActions() const;
    
    UFUNCTION(BlueprintPure)
    bool CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const;
    
    UFUNCTION(BlueprintPure)
    bool CanCharacterUse(const UCharacterLODActor* Character) const;
    
};

