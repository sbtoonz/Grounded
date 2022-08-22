#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDMarkerWidget.generated.h"

class UHUDMarkerData;
class UTextBlock;
class UVerticalBox;
class UOverlay;
class UProgressBar;
class UImage;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDMarkerWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UHUDMarkerData* MarkerData;
    
    UPROPERTY(BlueprintReadWrite)
    float MarkerOpacity;
    
    UPROPERTY(BlueprintReadOnly)
    float MarkerDistance;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MarkerDistanceTruncated;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* DistanceText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* OuterBox;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOverlay* ArrowRotationOverlay;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* ArrowIcon;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UProgressBar* ProgressFillbar;
    
    UHUDMarkerWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateMarkerPosition();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarkerFade();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarkerDistance();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuildingMarkerHealth();
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowMarkerProgressBar();
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowMarkerArrow();
    
    UFUNCTION(BlueprintPure)
    bool ShouldMarkerLockToScreen();
    
    UFUNCTION(BlueprintPure)
    bool ShouldFadeMarkerAtEdge();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleStickiedQuestChanged();
    
    UFUNCTION(BlueprintPure)
    float GetMarkerScreenEdgeAlpha();
    
    UFUNCTION(BlueprintPure)
    float GetMarkerLifetimeFade();
    
};

