#pragma once
#include "CoreMinimal.h"
#include "EHUDMarkerType.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveHUDMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveHUDMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorTagOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDMarkerType MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDistance;
    
    MAINE_API FObjectiveHUDMarkerData();
};

