#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "ItemSpawnPointData.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPointProviderInterface.generated.h"

class UBaseLODActor;
class UItemSpawnGroupData;

UINTERFACE(Blueprintable, MinimalAPI)
class USpawnPointProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ISpawnPointProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseLODActor* Spawn(FItemSpawnPointData SpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpawnPoints(TArray<FItemSpawnPointData>& SpawnPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGuid GetProviderID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UItemSpawnGroupData> GetItemSpawnGroupData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesSpawnActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Despawn(FItemSpawnPointData SpawnPoint);
    
};

