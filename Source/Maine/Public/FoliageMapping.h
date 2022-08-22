#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EFoliageInstanceState.h"
#include "EFoliageSwapLevel.h"
#include "AttractionCDOData.h"
#include "FoliageMapping.generated.h"

class UAttractionComponent;
class USoundBase;
class AActor;
class USoundAttenuation;
class UVisualEffect;

USTRUCT(BlueprintType)
struct FFoliageMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<AActor> FoliageBlueprintClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EFoliageInstanceState DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool CanAttackToSwap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EFoliageSwapLevel DisplaceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerSwapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* DisplaceAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundAttenuation* DisplaceAudioAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UVisualEffect*> InteractVisualEffects;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SpringStrength;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SpringDecay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAnimate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bActiveInDevelopmentContentOnly;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowGOAPAdvertisements;
    
    UPROPERTY()
    float HeightAboveOrigin;
    
    UPROPERTY(Transient)
    TMap<UAttractionComponent*, FAttractionCDOData> CDOAttractionData;
    
    MAINE_API FFoliageMapping();
};

