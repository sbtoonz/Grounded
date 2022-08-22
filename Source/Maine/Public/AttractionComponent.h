#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "LODableComponentInterface.h"
#include "EGeneratedLocationType.h"
#include "ColonyIdentifier.h"
#include "AttractionComponent.generated.h"

class UGoapAction;
class AActor;
class UActorLiteData;
class UCharacterLODActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAttractionComponent : public USceneComponent, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UGoapAction*> AdvertisedActions;
    
    UPROPERTY(EditAnywhere)
    float AreaRadius;
    
    UPROPERTY(EditAnywhere)
    int32 SlotCount;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag RestrictedToColony;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> RestrictedToClass;
    
    UPROPERTY()
    UActorLiteData* RestrictedToClassLiteData;
    
    UPROPERTY(EditAnywhere)
    uint8 bProjectToGround: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceNoTrack: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bForceRuntimeActionAlloc: 1;
    
    UPROPERTY(EditAnywhere)
    EGeneratedLocationType GeneratedLocationType;
    
    UAttractionComponent();
    UFUNCTION(BlueprintPure)
    FColonyIdentifier GetRestrictedToColonyId() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UClass* GetLODComponentClass() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UGoapAction*> GetAdvertisedActions() const;
    
    UFUNCTION(BlueprintPure)
    bool CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const;
    
    UFUNCTION(BlueprintPure)
    bool CanCharacterUse(const UCharacterLODActor* Character) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

