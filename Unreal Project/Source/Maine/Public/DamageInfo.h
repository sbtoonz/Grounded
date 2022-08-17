#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EHitReactionType.h"
//#include "EBlockType.h"
#include "EInflictDamageStyle.h"
#include "EDamageSourceType.h"
#include "Engine/DataTable.h"
#include "DamageInfo.generated.h"

class UObject;
class AController;
class AActor;
class UDamageType;
class UAttack;

USTRUCT(BlueprintType)
struct FDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AController> InstigatorController;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UObject> DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadOnly)
    EInflictDamageStyle InflictStyle;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UDamageType> DamageType;
    
    /*UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAttack> OriginAttack;*/
    
    UPROPERTY(BlueprintReadOnly)
    int32 Tier;
    
    UPROPERTY(BlueprintReadOnly)
    int32 HitStun;
    
    UPROPERTY(BlueprintReadOnly)
    EHitReactionType ForcedHitReaction;
    
    /*UPROPERTY(BlueprintReadOnly)
    EBlockType BlockType;*/
    
    UPROPERTY(BlueprintReadOnly)
    EDamageSourceType DamageSourceType;
    
    UPROPERTY(BlueprintReadOnly)
    float Pushback;
    
    UPROPERTY(BlueprintReadOnly)
    int32 DamageFlags;
    
    UPROPERTY(BlueprintReadOnly)
    FDataTableRowHandle DeathNotification;
    
    MAINE_API FDamageInfo();
};

