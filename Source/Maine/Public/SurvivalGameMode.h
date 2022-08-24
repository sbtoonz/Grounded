#pragma once
#include "CoreMinimal.h"
#include "MaineGameModeBase.h"
#include "EPlayerCharacterIdentity.h"
#include "SurvivalGameMode.generated.h"

class ASurvivalPlayerCharacter;
class UEnvQuery;

UCLASS(Blueprintable, NonTransient)
class MAINE_API ASurvivalGameMode : public AMaineGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerCharacterIdentity, TSoftClassPtr<ASurvivalPlayerCharacter>> DefaultPlayerPawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* PlayerSpawnEQS;
    
    ASurvivalGameMode();
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
};

