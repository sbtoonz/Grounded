#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveGameResult.h"
#include "ESaveGameType.h"
#include "SurvivalAutoPlayer.generated.h"

UCLASS(Blueprintable)
class USurvivalAutoPlayer : public UObject {
    GENERATED_BODY()
public:
    USurvivalAutoPlayer();
    UFUNCTION(BlueprintCallable, Exec)
    void StopAutoPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartAutoPlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAsyncSaveComplete(ESaveGameResult Result, ESaveGameType SaveType);
    
};

