#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "EMapEntryType.h"
#include "BaseMapEntryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UBaseMapEntryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UBaseMapEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWorldPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWorldPosition2D();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapEntryType GetMapEntryType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEntryName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FSlateBrush GetDescriptionWindowIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanToggleVisibility() const;
    
};

