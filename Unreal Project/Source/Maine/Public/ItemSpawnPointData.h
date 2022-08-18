#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameVersion.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ItemSpawnPointData.generated.h"

class UItemSpawnData;
class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;
class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FItemSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UItemSpawnData> ItemSpawnData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameVersion VersionAdded;
    
    UPROPERTY(BlueprintReadOnly)
    TScriptInterface<ISpawnPointProviderInterface> Provider;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> AttachParent;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ProviderIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsValid;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowMultipleUse;
    
    FItemSpawnPointData();
};

