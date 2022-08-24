#pragma once
#include "CoreMinimal.h"
#include "ItemSpawnPointData.h"
#include "ItemSpawnGroup.generated.h"

class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;

USTRUCT(BlueprintType)
struct MAINE_API FItemSpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSpawnPointData> SpawnPointDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ISpawnPointProviderInterface>> SpawnPointProviders;
    
    FItemSpawnGroup();
};

