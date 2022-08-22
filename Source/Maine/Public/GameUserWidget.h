#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterfaceNarration -ObjectName=NarratableUserWidget -FallbackName=NarratableUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EGameInputType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "GameUserWidget.generated.h"

class AGameUI;
class ASurvivalPlayerCharacter;
class ASurvivalPlayerController;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UGameUserWidget : public UNarratableUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLocString LocalizedToolTipText;
    
public:
    UGameUserWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUsingGamepadChanged(bool bOnUsingGamepadChanged);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPossessedPlayerChange(ASurvivalPlayerCharacter* NewPlayerCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGlobalColorChange();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameInputTypeChanged(const EGameInputType NewGameInputType);
    
    UFUNCTION()
    void NativeOnLanguageChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HandleKeyEventChord(const FInputChord& InChord);
    
    UFUNCTION(BlueprintPure)
    ASurvivalPlayerCharacter* GetSurvivalPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    ASurvivalPlayerController* GetOwningSurvivalPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    AGameUI* GetGameUI() const;
    
};

