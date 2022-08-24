#include "ControlMetadataLibrary.h"

FLocString UControlMetadataLibrary::GetControlDisplayName(const FControlMetadata& MetaData, bool bDisplayingForGamepad) {
    return FLocString{};
}

int32 UControlMetadataLibrary::GetConflictCategoryMask(const FControlMetadata& MetaData) {
    return 0;
}

FAnyControlMapping UControlMetadataLibrary::AxisMappingToAnyMapping(const FInputAxisKeyMapping& InMapping) {
    return FAnyControlMapping{};
}

FAnyControlMapping UControlMetadataLibrary::ActionMappingToAnyMapping(const FInputActionKeyMapping& InMapping) {
    return FAnyControlMapping{};
}

UControlMetadataLibrary::UControlMetadataLibrary() {
}

