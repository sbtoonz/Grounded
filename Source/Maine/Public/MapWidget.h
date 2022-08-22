#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameUserWidget.h"
#include "EMapEntryType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "MapWidget.generated.h"

class UBaseMapEntryWidget;
class UMapLegendEntryWidget;
class UVerticalBox;
class UUserWidget;
class UMapPanelWidget;
class UHUDMarkerData;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUserWidget* CloseButton;
    
    UPROPERTY(Export)
    UUserWidget* HeaderText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMapPanelWidget* MapPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* PlayerContainer;
    
    UPROPERTY(Export)
    UVerticalBox* PlacesContainer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* Player1LegendEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* POIEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* TrailMarkerEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* RespawnPointEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* LabEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* FieldStationsEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* OtherEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* PlayerWaypointEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMapLegendEntryWidget* ResourceSurveyEntry;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMapLegendEntryWidget> LegendEntryClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
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
    
    UFUNCTION()
    void OnPlayerWaypointRemoved(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnPlayerWaypointAdded(UHUDMarkerData* MarkerData);
    
    UFUNCTION()
    void OnLegendEntrySelected(UBaseMapEntryWidget* EntryWidget, EMapEntryType MapEntryType);
    
    UFUNCTION()
    void OnLegendEntryFocused(UMapLegendEntryWidget* Sender);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnLegendEntryFocused(UMapLegendEntryWidget* Widget);
    
};

