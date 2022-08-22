#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FaucetItemSpawnData.generated.h"

class UItemSpawnGroupData;
class UItemSpawnData;

USTRUCT(BlueprintType)
struct MAINE_API FFaucetItemSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UItemSpawnGroupData> SpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UItemSpawnData> SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> ValidSpawnPointSockets;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAttachToSockets;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAllowSocketRepeat;
    
    FFaucetItemSpawnData();
};

