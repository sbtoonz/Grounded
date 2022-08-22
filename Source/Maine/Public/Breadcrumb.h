#pragma once
#include "CoreMinimal.h"
#include "EBreadcrumbType.h"
#include "GoapActionInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ColonyIdentifier.h"
#include "Breadcrumb.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBreadcrumb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EBreadcrumbType Type;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    float TravelDistance;
    
    UPROPERTY(BlueprintReadWrite)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite)
    float CreationTime;
    
    UPROPERTY(BlueprintReadWrite)
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite)
    FGoapActionInstance AdvertisedAction;
    
    UPROPERTY(BlueprintReadWrite)
    FColonyIdentifier Colony;
    
    FBreadcrumb();
};

