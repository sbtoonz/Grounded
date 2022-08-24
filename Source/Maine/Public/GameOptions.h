#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameOptions.generated.h"

class UControlOptions;

UCLASS(Blueprintable)
class MAINE_API UGameOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlOptions* MouseOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlOptions* GamepadOptions;
    
    UGameOptions();
    UFUNCTION(BlueprintCallable)
    void UnbindGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Save() const;
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlOptions* GetControlOptions(bool bIsGamepad) const;
    
    UFUNCTION(BlueprintCallable)
    void BindGame();
    
};

