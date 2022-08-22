#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "CreditsClosedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
#include "CreditsWidget.generated.h"

class UVerticalBox;
class UCreditsData;
class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UCreditsWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FCreditsClosed CreditsClosedDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName CancelAction;
    
    UPROPERTY(EditDefaultsOnly)
    FName AccelerateAction;
    
    UPROPERTY(EditAnywhere)
    float ScrollSpeed;
    
    UPROPERTY(EditAnywhere)
    float AcceleratedScrollSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WidgetsPerSecond;
    
    UPROPERTY(EditDefaultsOnly)
    UCreditsData* CreditsAsset;
    
    UPROPERTY(Export)
    UScrollBox* CreditsScrollBox;
    
    UPROPERTY(Export)
    UVerticalBox* CreditsVerticalBox;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReference CreditsMusicGlobalVariable;
    
    UPROPERTY(EditAnywhere)
    int32 OnCreditsStartGlobalVariableValue;
    
    UPROPERTY(EditAnywhere)
    int32 OnCreditsSkippedGlobalVariableValue;
    
    UPROPERTY(EditAnywhere)
    int32 OnCreditsEndedGlobalVariableValue;
    
    UPROPERTY(Transient)
    UCreditsData* CreditsAssetToUse;
    
public:
    UCreditsWidget();
    UFUNCTION(BlueprintCallable)
    void StopCredits(bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void StartCredits();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreditsStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreditsEnded();
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
};

