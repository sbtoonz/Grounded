#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BestiaryStat.h"
#include "Engine/DataTable.h"
#include "ESurvivalDamageTypeFlags.h"
#include "BestiaryComponent.generated.h"

class UPlayerStatConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBestiaryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FBestiaryStat> BestiaryStats;
    
public:
    UBestiaryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRareDataUnlocked(FDataTableRowHandle BestiaryRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValue(UPlayerStatConfig* Stat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBestiaryHealth(FDataTableRowHandle BestiaryRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESurvivalDamageTypeFlags> GetBestiaryDamageWeaknesses(FDataTableRowHandle BestiaryRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESurvivalDamageTypeFlags> GetBestiaryDamageResistances(FDataTableRowHandle BestiaryRowHandle) const;
    
};

