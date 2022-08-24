#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "GameFramework/DamageType.h"
#include "Engine/DataTable.h"
#include "ESurvivalDamageTypeFlags.h"
#include "SurvivalDamageType.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAINE_API USurvivalDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Icon;
    
    UPROPERTY(EditAnywhere)
    uint32 DamageTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBlockWithWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanApplyDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DeathNotification;
    
    USurvivalDamageType();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasDamageTypeFlag(ESurvivalDamageTypeFlags flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasAnyDamageTypeFlag(int32 flag) const;
    
};

