#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ItemSpawnPointData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SpawnPointProviderInterface.generated.h"

class UItemSpawnGroupData;
class UBaseLODActor;

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

