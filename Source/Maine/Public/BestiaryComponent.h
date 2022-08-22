#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BestiaryStat.h"
#include "ESurvivalDamageTypeFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BestiaryComponent.generated.h"

class UPlayerStatConfig;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBestiaryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    TArray<FBestiaryStat> BestiaryStats;
    
public:
    UBestiaryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRareDataUnlocked(FDataTableRowHandle BestiaryRowHandle);
    
    UFUNCTION(BlueprintPure)
    int32 GetStatValue(UPlayerStatConfig* Stat) const;
    
    UFUNCTION(BlueprintPure)
    float GetBestiaryHealth(FDataTableRowHandle BestiaryRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ESurvivalDamageTypeFlags> GetBestiaryDamageWeaknesses(FDataTableRowHandle BestiaryRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ESurvivalDamageTypeFlags> GetBestiaryDamageResistances(FDataTableRowHandle BestiaryRowHandle) const;
    
};

