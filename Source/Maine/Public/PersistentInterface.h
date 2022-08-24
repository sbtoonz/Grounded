#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameVersion.h"
#include "PersistentInterface.generated.h"

class USaveWriter;
class USaveReader;

UINTERFACE(Blueprintable, MinimalAPI)
class UPersistentInterface : public UInterface {
    GENERATED_BODY()
};

class IPersistentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SkippedLoadOfActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Save(USaveWriter* Writer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessLoadData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LoadAll(USaveReader* Reader, int32 Version);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Load(USaveReader* Reader, int32 Version);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSaveVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetProcessLoadDataOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameVersion GetMinimumSaveVersionToRestore() const;
    
};

