#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameVersion.h"
#include "ItemSpawnPointData.generated.h"

class AActor;
class UItemSpawnData;
class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;

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

