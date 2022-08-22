#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ESurvivalDamageTypeFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
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

