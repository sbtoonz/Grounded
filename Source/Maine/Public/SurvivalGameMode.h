#pragma once
#include "CoreMinimal.h"
#include "MaineGameModeBase.h"
#include "EPlayerCharacterIdentity.h"
#include "SurvivalGameMode.generated.h"

class ASurvivalPlayerCharacter;
class UEnvQuery;

UCLASS(NonTransient)
class MAINE_API ASurvivalGameMode : public AMaineGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<EPlayerCharacterIdentity, TSoftClassPtr<ASurvivalPlayerCharacter>> DefaultPlayerPawnList;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* PlayerSpawnEQS;
    
    ASurvivalGameMode();
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
};

