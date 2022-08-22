#include "FaucetBuilding.h"
#include "FaucetSpawnerComponent.h"

AFaucetBuilding::AFaucetBuilding() {
    this->FaucetSpawnerComponent = CreateDefaultSubobject<UFaucetSpawnerComponent>(TEXT("FaucetSpawner"));
    this->bAllowTakeAll = false;
}

