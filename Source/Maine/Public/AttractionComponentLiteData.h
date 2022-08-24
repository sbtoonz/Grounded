#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComponentLiteData.h"
#include "EGeneratedLocationType.h"
#include "AttractionComponentLiteData.generated.h"

class UGoapAction;
class UActorLiteData;

UCLASS(Blueprintable)
class MAINE_API UAttractionComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGoapAction*> AdvertisedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRuntimeActionAlloc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectToGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNoTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeneratedLocationType GeneratedLocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RestrictedToColonyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* RestrictedToClassLiteData;
    
    UAttractionComponentLiteData();
};

