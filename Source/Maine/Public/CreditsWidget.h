#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "CreditsClosedDelegate.h"
#include "GlobalVariableReference.h"
#include "CreditsWidget.generated.h"

class UVerticalBox;
class UCreditsData;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UCreditsWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreditsClosed CreditsClosedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CancelAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AccelerateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratedScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreditsData* CreditsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* CreditsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* CreditsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference CreditsMusicGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnCreditsStartGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnCreditsSkippedGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnCreditsEndedGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCreditsData* CreditsAssetToUse;
    
public:
    UCreditsWidget();
    UFUNCTION(BlueprintCallable)
    void StopCredits(bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void StartCredits();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreditsStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreditsEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
};

