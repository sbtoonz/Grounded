#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHitReactionType.h"
#include "EDamageEventType.h"
#include "Engine/DataTable.h"
#include "DamageData.generated.h"

class USurvivalDamageType;

USTRUCT(BlueprintType)
struct MAINE_API FDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Damage;
    
    /*UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USurvivalDamageType> DamageType;
    */
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDamageEventType DamageEventType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHitReactionType ForcedHitReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HitStun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Pushback;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle DeathNotification;
    
    FDamageData();
};

