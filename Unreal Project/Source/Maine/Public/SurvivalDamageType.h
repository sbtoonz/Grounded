#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "LocString.h"
#include "ESurvivalDamageTypeFlags.h"
#include "Engine/DataTable.h"
#include "SurvivalDamageType.generated.h"

class UObject;

UCLASS()
class MAINE_API USurvivalDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* Icon;
    
    UPROPERTY(EditAnywhere)
    uint32 DamageTypeFlags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBlockWithWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanApplyDamageReduction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanPlayHitReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDamageDurability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanRepair;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle DeathNotification;
    
    USurvivalDamageType();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasDamageTypeFlag(ESurvivalDamageTypeFlags flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasAnyDamageTypeFlag(int32 flag) const;
    
};

