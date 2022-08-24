#include "AttachmentPoint.h"
#include "Components/ArrowComponent.h"

void AAttachmentPoint::SetInUse(bool Value) {
}

bool AAttachmentPoint::GetInUse() {
    return false;
}

UArrowComponent* AAttachmentPoint::GetArrow() {
    return NULL;
}

AAttachmentPoint::AAttachmentPoint() {
    this->bIsInUse = false;
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
}

