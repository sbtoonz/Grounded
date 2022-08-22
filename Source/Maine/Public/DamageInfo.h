#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EHitReactionType.h"
#include "EBlockType.h"
#include "EInflictDamageStyle.h"
#include "EDamageSourceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "DamageInfo.generated.h"

class AController;
class UObject;
class UAttack;
class AActor;
class UDamageType;

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
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAttack> OriginAttack;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Tier;
    
    UPROPERTY(BlueprintReadOnly)
    int32 HitStun;
    
    UPROPERTY(BlueprintReadOnly)
    EHitReactionType ForcedHitReaction;
    
    UPROPERTY(BlueprintReadOnly)
    EBlockType BlockType;
    
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

