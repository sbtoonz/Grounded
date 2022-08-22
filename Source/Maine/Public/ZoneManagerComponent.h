#pragma once
#include "CoreMinimal.h"
#include "OnUpdateZoneDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OverlappedVolumes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ZoneManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UZoneManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnUpdateZone OnUpdateZoneDelegate;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayerOverlapVolumes)
    TArray<FOverlappedVolumes> PlayerOverlapVolumes;
    
public:
    UZoneManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_PlayerOverlapVolumes();
    
    UFUNCTION()
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
    UFUNCTION()
    void OnDayNightChange(bool bIsDayTime);
    
public:
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetLocalZoneRowHandle() const;
    
};

