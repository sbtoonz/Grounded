#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESaveGameResult.h"
#include "ESaveGameType.h"
#include "SurvivalAutoPlayer.generated.h"

UCLASS()
class USurvivalAutoPlayer : public UObject {
    GENERATED_BODY()
public:
    USurvivalAutoPlayer();
    UFUNCTION(Exec)
    void StopAutoPlayer();
    
    UFUNCTION(Exec)
    void StartAutoPlayer();
    
protected:
    UFUNCTION()
    void OnAsyncSaveComplete(ESaveGameResult Result, ESaveGameType SaveType);
    
};

