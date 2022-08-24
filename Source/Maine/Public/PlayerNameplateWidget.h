#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "PlayerNameplateWidget.generated.h"

class UCanvasPanel;
class USizeBox;
class UHUDMarkerData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UPlayerNameplateWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UHUDMarkerData> MarkerData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ContentCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* KnockedOutHolder;
    
public:
    UPlayerNameplateWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateNameplatePosition();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInfoForMarker();
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerDataSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncapacitationRatioChanged(float NewRatio);
    
};

