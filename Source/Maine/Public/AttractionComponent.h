#pragma once
#include "CoreMinimal.h"
#include "LODableComponentInterface.h"
#include "Components/SceneComponent.h"
#include "EGeneratedLocationType.h"
#include "GameplayTagContainer.h"
#include "ColonyIdentifier.h"
#include "AttractionComponent.generated.h"

class AActor;
class UGoapAction;
class UActorLiteData;
class UCharacterLODActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAttractionComponent : public USceneComponent, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGoapAction*> AdvertisedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RestrictedToColony;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RestrictedToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* RestrictedToClassLiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectToGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceNoTrack: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRuntimeActionAlloc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeneratedLocationType GeneratedLocationType;
    
    UAttractionComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyIdentifier GetRestrictedToColonyId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UClass* GetLODComponentClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGoapAction*> GetAdvertisedActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterUse(const UCharacterLODActor* Character) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

