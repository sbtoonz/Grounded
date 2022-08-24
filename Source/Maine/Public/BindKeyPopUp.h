#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "Framework/Commands/InputChord.h"
#include "AnyControlMapping.h"
#include "LocString.h"
#include "AnyControlMappingKey.h"
#include "BindKeyPopUp.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UBindKeyPopUp : public UWindowWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlBound, FAnyControlMapping, NewValue);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString KeyboardInstructionsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString GamepadInstructionsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CancelActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyControlMapping CurrentMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamepad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlBound OnControlBound;
    
    UBindKeyPopUp();
    UFUNCTION(BlueprintCallable)
    void SelectControl(FInputChord Chord);
    
    UFUNCTION(BlueprintCallable)
    void InitControlMapping(const FAnyControlMapping& Control, bool bInIsGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMapped() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInstructionsText() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAnyControlMappingKey GetCurrentMappingKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputChord GetCurrentInputChord() const;
    
};

