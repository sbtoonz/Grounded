#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "PlayerNameplateWidget.generated.h"

class UHUDMarkerData;
class UCanvasPanel;
class USizeBox;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UPlayerNameplateWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UHUDMarkerData> MarkerData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ContentCanvas;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USizeBox* KnockedOutHolder;
    
public:
    UPlayerNameplateWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateNameplatePosition();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateInfoForMarker();
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerDataSet();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIncapacitationRatioChanged(float NewRatio);
    
};

