#include "BaseAppearanceData.h"

class USkeletalMesh;

TSoftObjectPtr<USkeletalMesh> UBaseAppearanceData::GetDefaultMesh() const {
    return NULL;
}

UBaseAppearanceData::UBaseAppearanceData() {
}

