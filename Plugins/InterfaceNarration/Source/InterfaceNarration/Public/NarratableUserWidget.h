#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ENarratableWidgetLevel.h"
#include "NarrationChunk.h"
#include "NarratableUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INTERFACENARRATION_API UNarratableUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNarrateOnlyWhenFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNarrateOnlyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNarrateItemIndex;
    
    UNarratableUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ENarratableWidgetLevel GetNarrationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNarration(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, bool bVerbose) const;
    
};

