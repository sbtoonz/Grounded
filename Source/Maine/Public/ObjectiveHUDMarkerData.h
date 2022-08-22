#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EHUDMarkerType.h"
#include "ObjectiveHUDMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveHUDMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ActorTagOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EHUDMarkerType MarkerType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ShowDistance;
    
    MAINE_API FObjectiveHUDMarkerData();
};

