#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "AnyControlMapping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "AnyControlMappingKey.h"
#include "BindKeyPopUp.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBindKeyPopUp : public UWindowWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlBound, FAnyControlMapping, NewValue);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString KeyboardInstructionsText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString GamepadInstructionsText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CancelActionName;
    
    UPROPERTY(BlueprintReadOnly)
    FAnyControlMapping CurrentMapping;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsGamepad;
    
    UPROPERTY(BlueprintAssignable)
    FControlBound OnControlBound;
    
    UBindKeyPopUp();
    UFUNCTION(BlueprintCallable)
    void SelectControl(FInputChord Chord);
    
    UFUNCTION(BlueprintCallable)
    void InitControlMapping(const FAnyControlMapping& Control, bool bInIsGamepad);
    
    UFUNCTION(BlueprintPure)
    bool GetIsMapped() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FText GetInstructionsText() const;
    
public:
    UFUNCTION(BlueprintPure)
    FAnyControlMappingKey GetCurrentMappingKey() const;
    
    UFUNCTION(BlueprintPure)
    FInputChord GetCurrentInputChord() const;
    
};

