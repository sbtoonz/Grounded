#include "MapWidget.h"

class UHUDMarkerData;
class UBaseMapEntryWidget;
class UMapLegendEntryWidget;

void UMapWidget::ToggleMapMarkerOnFocusedMapEntry() {
}

void UMapWidget::PopulatePlayerWaypointLegend() {
}

void UMapWidget::PopulateEntriesForMap() {
}

void UMapWidget::OnPlayerWaypointRemoved(UHUDMarkerData* MarkerData) {
}

void UMapWidget::OnPlayerWaypointAdded(UHUDMarkerData* MarkerData) {
}

void UMapWidget::OnLegendEntrySelected(UBaseMapEntryWidget* EntryWidget, EMapEntryType MapEntryType) {
}

void UMapWidget::OnLegendEntryFocused(UMapLegendEntryWidget* Sender) {
}


UMapWidget::UMapWidget() {
    this->CloseButton = NULL;
    this->HeaderText = NULL;
    this->MapPanel = NULL;
    this->PlayerContainer = NULL;
    this->PlacesContainer = NULL;
    this->Player1LegendEntry = NULL;
    this->POIEntry = NULL;
    this->TrailMarkerEntry = NULL;
    this->RespawnPointEntry = NULL;
    this->LabEntry = NULL;
    this->FieldStationsEntry = NULL;
    this->OtherEntry = NULL;
    this->PlayerWaypointEntry = NULL;
    this->ResourceSurveyEntry = NULL;
    this->LegendEntryClass = NULL;
}

