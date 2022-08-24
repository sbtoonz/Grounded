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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemSpawnGroupData> SpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemSpawnData> SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidSpawnPointSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSocketRepeat;
    
    FFaucetItemSpawnData();
};

