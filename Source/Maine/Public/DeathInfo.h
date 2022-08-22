#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EDamageSourceType.h"
#include "DeathInfo.generated.h"

class AActor;
class UDamageType;
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

