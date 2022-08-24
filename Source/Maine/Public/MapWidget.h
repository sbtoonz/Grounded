#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameUserWidget.h"
#include "GameplayTagContainer.h"
#include "EMapEntryType.h"
#include "MapWidget.generated.h"

class UUserWidget;
class UVerticalBox;
class UMapPanelWidget;
class UMapLegendEntryWidget;
class UHUDMarkerData;
class UBaseMapEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapPanelWidget* MapPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* PlayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* PlacesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* Player1LegendEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* POIEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* TrailMarkerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* RespawnPointEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* LabEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* FieldStationsEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* OtherEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* PlayerWaypointEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapLegendEntryWidget* ResourceSurveyEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapLegendEntryWidget> LegendEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EMapEntryType> PointOfInterestTypeMappings;
    
public:
    UMapWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleMapMarkerOnFocusedMapEntry();
    
    UFUNCTION(BlueprintCallable)
    void PopulatePlayerWaypointLegend();
    
    UFUNCTION(BlueprintCallable)
    void PopulateEntriesForMap();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWaypointRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWaypointAdded(UHUDMarkerData* MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnLegendEntrySelected(UBaseMapEntryWidget* EntryWidget, EMapEntryType MapEntryType);
    
    UFUNCTION(BlueprintCallable)
    void OnLegendEntryFocused(UMapLegendEntryWidget* Sender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLegendEntryFocused(UMapLegendEntryWidget* Widget);
    
};

