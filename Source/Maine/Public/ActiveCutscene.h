#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActiveCutscene.generated.h"

class UCameraComponent;

UCLASS()
class MAINE_API UActiveCutscene : public UObject {
    GENERATED_BODY()
public:
    UActiveCutscene();
    UFUNCTION()
    void OnLevelSequenceFinished();
    
    UFUNCTION()
    void OnInitialCameraCut(UCameraComponent* CameraComponent);
    
};

