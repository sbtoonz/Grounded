#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MapPanelPannedDelegateDelegate.h"
#include "GameUserWidget.h"
#include "FocusedMapEntryChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "EMapEntryType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MapPanelWidget.generated.h"

class UScaleBox;
class UBaseMapEntryWidget;
class UHUDMarkerData;
class UMapPlayerWaypointWidget;
class UMapResourceSurveyWidget;
class UImage;
class UCanvasPanel;
class USizeBox;
class UBorder;
class UMapPlayerWidget;
class UMapPOIWidget;
class UMapMarkerWidget;
class UMapComponent;
class UMapResourceWaypointWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapPanelWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMapPanelPannedDelegate OnMapPanelPanned;
    
    UPROPERTY(BlueprintAssignable)
    FFocusedMapEntryChangedDelegate OnFocusedEntryChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* GridEffect;
    
    UPROPERTY(Export)
    UCanvasPanel* OuterCanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* POICanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* MapMarkerCanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* PlayerCanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* PlayerWaypointCanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* ResourceWaypointCanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* ImageCanvas;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapResourceSurveyWidget* ResourceSurveyOverlay;
    
    UPROPERTY(Export)
    USizeBox* MapSizeBox;
    
    UPROPERTY(Export)
    UScaleBox* ImageScaleBox;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBorder* MapBorder;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMapPlayerWidget> PlayerEntryClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMapPOIWidget> PointOfInterestClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMapMarkerWidget> HUDMarkerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMapPlayerWaypointWidget> PlayerWaypointMarkerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMapResourceWaypointWidget> ResourceWaypointClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MaxBounds;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MinBounds;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D TextureSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MousePanSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    float GamepadPanSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D GamepadPanDeadzone;
    
    UPROPERTY(EditDefaultsOnly)
    float MapVisibleOrientationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float MinDistanceToFocusMarker;
    
    UPROPERTY(EditDefaultsOnly)
    float PanDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float PanEaseExponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> ZoomLevels;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CurrentZoomLevel;
    
public:
    UMapPanelWidget();
    UFUNCTION(BlueprintCallable)
    void SetOwnerScreen(UWidget* Owner);
    
    UFUNCTION(BlueprintCallable)
    void PopulateAll();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnZoomChange(int32 ZoomLevel);
    
    UFUNCTION()
    void OnUnlockedMapsChanged(UMapComponent* Sender);
    
public:
    UFUNCTION()
    void OnPlayerWaypointRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnPlayerWaypointAdded(UHUDMarkerData* MarkerData);
    
protected:
    UFUNCTION()
    void OnPlayerMarkerRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnPlayerMarkerAdded(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnMarkerRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnMarkerAdded(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnMapEntryMouseUnHovered(UBaseMapEntryWidget* EntryWidget);
    
    UFUNCTION()
    void OnMapEntryMouseHovered(UBaseMapEntryWidget* EntryWidget);
    
    UFUNCTION()
    FEventReply OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION()
    void HandleMapEntryFocusLost_Internal(bool ViaMouseHover);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMapEntryFocusLost(bool ViaMouseHover);
    
    UFUNCTION()
    void HandleMapEntryFocused_Internal(UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool ViaMouseHover);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMapEntryFocused(UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool ViaMouseHover);
    
public:
    UFUNCTION(BlueprintPure)
    FVector2D GetWorldPosition(FVector2D MapPosition, bool bIncludeRotation) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetViewCenterPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMapPosition(FVector WorldLocation, bool bIncludeRotation) const;
    
    UFUNCTION(BlueprintPure)
    UBaseMapEntryWidget* GetEntryUnderCursor() const;
    
    UFUNCTION(BlueprintCallable)
    UBaseMapEntryWidget* FindClosestValidMapEntryToMapCursor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CycleZoomValue();
    
public:
    UFUNCTION(BlueprintCallable)
    void CenterMapOnPlayer();
    
    UFUNCTION(BlueprintCallable)
    void AdjustZoomLevel(int32 ChangeInZoom);
    
};

