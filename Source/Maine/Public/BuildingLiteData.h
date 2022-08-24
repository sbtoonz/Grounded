#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BuildingLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBuildingLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BuildingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StructureWeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StructureSturdinessClass;
    
    UBuildingLiteData();
};

