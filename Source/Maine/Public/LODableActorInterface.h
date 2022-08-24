#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LODableActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULODableActorInterface : public UInterface {
    GENERATED_BODY()
};

class ILODableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransferBlueprintInstanceDataToProxy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRestoreTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestoreBlueprintInstanceDataToFullActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasBlueprintInstanceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetLODActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetLifetimeDespawnWhenProxyOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetGameLifetimeHours() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorProxy() const;
    
};

