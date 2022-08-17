#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "EDamageSourceType.h"
#include "DeathInfo.generated.h"

class UDamageType;
class AActor;
class APlayerState;

USTRUCT(BlueprintType)
struct FDeathInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FDataTableRowHandle DeathNotificationDataHandle;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<AActor> DamageInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<APlayerState> PlayerInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    EDamageSourceType DamageSourceType;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsIncapacitate;
    
    MAINE_API FDeathInfo();
};

