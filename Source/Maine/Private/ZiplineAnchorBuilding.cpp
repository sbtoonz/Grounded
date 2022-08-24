#include "ZiplineAnchorBuilding.h"
#include "ZiplineAnchor.h"

AZiplineAnchorBuilding::AZiplineAnchorBuilding() {
    this->ZiplineAnchor = CreateDefaultSubobject<UZiplineAnchor>(TEXT("ZiplineAnchor"));
    this->bPlayerCanInteract = true;
}

