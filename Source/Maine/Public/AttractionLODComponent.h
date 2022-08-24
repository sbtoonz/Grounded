#pragma once
#include "CoreMinimal.h"
#include "SceneLODComponent.h"
#include "EGeneratedLocationType.h"
#include "ColonyIdentifier.h"
#include "AttractionLODComponent.generated.h"

class UProxyAttractionComponent;
class UGoapAction;
class UAttractionComponent;
class UCharacterLODActor;

UCLASS(Blueprintable)
class MAINE_API UAttractionLODComponent : public USceneLODComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProxyAttractionComponent* ProxyAttractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttractionComponent* FullAttractionComponent;
    
public:
    UAttractionLODComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProjectToGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGeneratedLocationType GetGeneratedLocationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGoapAction*> GetAdvertisedActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterUse(const UCharacterLODActor* Character) const;
    
};

