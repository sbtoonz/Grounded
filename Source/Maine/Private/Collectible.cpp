#include "Collectible.h"
#include "ObsidianIDComponent.h"

ACollectible::ACollectible() {
    this->LiteData = NULL;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

