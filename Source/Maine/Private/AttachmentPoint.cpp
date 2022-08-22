#include "AttachmentPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

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

