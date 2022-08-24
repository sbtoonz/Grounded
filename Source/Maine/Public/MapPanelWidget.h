#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MapPanelPannedDelegateDelegate.h"
#include "GameUserWidget.h"
#include "FocusedMapEntryChangedDelegateDelegate.h"
#include "EMapEntryType.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "UObject/NoExportTypes.h"
#include "MapPanelWidget.generated.h"

class UCanvasPanel;
class USizeBox;
class UMapMarkerWidget;
class UMapResourceSurveyWidget;
class UImage;
class UScaleBox;
class UBorder;
class UMapPlayerWidget;
class UMapPOIWidget;
class UMapPlayerWaypointWidget;
class UMapComponent;
class UMapResourceWaypointWidget;
class UWidget;
class UHUDMarkerData;
class UBaseMapEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapPanelWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPanelPannedDelegate OnMapPanelPanned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusedMapEntryChangedDelegate OnFocusedEntryChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* GridEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* OuterCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* POICanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapMarkerCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PlayerCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PlayerWaypointCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ResourceWaypointCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ImageCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapResourceSurveyWidget* ResourceSurveyOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* MapSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScaleBox* ImageScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBorder* MapBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapPlayerWidget> PlayerEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapPOIWidget> PointOfInterestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapMarkerWidget> HUDMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapPlayerWaypointWidget> PlayerWaypointMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapResourceWaypointWidget> ResourceWaypointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MousePanSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadPanSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GamepadPanDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapVisibleOrientationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToFocusMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanEaseExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ZoomLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentZoomLevel;
    
public:
    UMapPanelWidget();
    UFUNCTION(BlueprintCallable)
    void SetOwnerScreen(UWidget* Owner);
    
    UFUNCTION(BlueprintCallable)
    void PopulateAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomChange(int32 ZoomLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnUnlockedMapsChanged(UMapComponent* Sender);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerWaypointRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWaypointAdded(UHUDMarkerData* MarkerData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMarkerRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMarkerAdded(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerAdded(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnMapEntryMouseUnHovered(UBaseMapEntryWidget* EntryWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnMapEntryMouseHovered(UBaseMapEntryWidget* EntryWidget);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void HandleMapEntryFocusLost_Internal(bool ViaMouseHover);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMapEntryFocusLost(bool ViaMouseHover);
    
    UFUNCTION(BlueprintCallable)
    void HandleMapEntryFocused_Internal(UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool ViaMouseHover);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMapEntryFocused(UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool ViaMouseHover);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWorldPosition(FVector2D MapPosition, bool bIncludeRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewCenterPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapPosition(FVector WorldLocation, bool bIncludeRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

