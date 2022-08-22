#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameOptions.generated.h"

class UControlOptions;

UCLASS(BlueprintType)
class MAINE_API UGameOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UControlOptions* MouseOptions;
    
    UPROPERTY(BlueprintReadOnly)
    UControlOptions* GamepadOptions;
    
    UGameOptions();
    UFUNCTION(BlueprintCallable)
    void UnbindGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Save() const;
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintPure)
    UControlOptions* GetControlOptions(bool bIsGamepad) const;
    
    UFUNCTION(BlueprintCallable)
    void BindGame();
    
};

