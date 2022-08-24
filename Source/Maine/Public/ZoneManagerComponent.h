#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnUpdateZoneDelegate.h"
#include "OverlappedVolumes.h"
#include "Engine/DataTable.h"
#include "ZoneManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UZoneManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateZone OnUpdateZoneDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerOverlapVolumes, meta=(AllowPrivateAccess=true))
    TArray<FOverlappedVolumes> PlayerOverlapVolumes;
    
public:
    UZoneManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerOverlapVolumes();
    
    UFUNCTION(BlueprintCallable)
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
    UFUNCTION(BlueprintCallable)
    void OnDayNightChange(bool bIsDayTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetLocalZoneRowHandle() const;
    
};

