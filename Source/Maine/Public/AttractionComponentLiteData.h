#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "EGeneratedLocationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AttractionComponentLiteData.generated.h"

class UGoapAction;
class UActorLiteData;

UCLASS(BlueprintType)
class MAINE_API UAttractionComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UGoapAction*> AdvertisedActions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bForceRuntimeActionAlloc: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bProjectToGround: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bForceNoTrack;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EGeneratedLocationType GeneratedLocationType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag RestrictedToColonyTag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UActorLiteData* RestrictedToClassLiteData;
    
    UAttractionComponentLiteData();
};

