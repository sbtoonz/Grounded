#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BuildingLiteData.generated.h"

UCLASS()
class MAINE_API UBuildingLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTagContainer BuildingTags;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag StructureWeightClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag StructureSturdinessClass;
    
    UBuildingLiteData();
};

