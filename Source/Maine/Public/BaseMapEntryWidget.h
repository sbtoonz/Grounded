#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EMapEntryType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BaseMapEntryWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBaseMapEntryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UBaseMapEntryWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshVisuals();
    
    UFUNCTION(BlueprintPure)
    bool HasWorldPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetWorldPosition2D();
    
    UFUNCTION(BlueprintPure)
    EMapEntryType GetMapEntryType() const;
    
    UFUNCTION(BlueprintPure)
    FString GetEntryName();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FSlateBrush GetDescriptionWindowIcon();
    
    UFUNCTION(BlueprintPure)
    bool CanToggleVisibility() const;
    
};

