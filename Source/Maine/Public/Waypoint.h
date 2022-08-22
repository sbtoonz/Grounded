#pragma once
#include "CoreMinimal.h"
#include "EWaypointType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ChatterEventReference -FallbackName=ChatterEventReference
#include "Waypoint.generated.h"

class AWaypoint;
class UAnimMontage;
class AActor;
class UObsidianIDComponent;

UCLASS()
class MAINE_API AWaypoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWaypointType WaypointType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AWaypoint* NextWaypoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 EmergeVariation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Anim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> AnimProp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AnimPropSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FChatterEventReference ChatterEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChatterDelay;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AWaypoint();
    UFUNCTION(BlueprintCallable)
    void SetNextWaypoint(AWaypoint* InWaypoint);
    
};

