#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActiveCutscene.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class MAINE_API UActiveCutscene : public UObject {
    GENERATED_BODY()
public:
    UActiveCutscene();
    UFUNCTION(BlueprintCallable)
    void OnLevelSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnInitialCameraCut(UCameraComponent* CameraComponent);
    
};

