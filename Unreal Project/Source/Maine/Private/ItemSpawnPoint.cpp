#include "ItemSpawnPoint.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ObsidianIDComponent.h"
#include "Components/BillboardComponent.h"

AItemSpawnPoint::AItemSpawnPoint() {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->ItemSpawnGroupData = NULL;
    this->ItemSpawnData = NULL;
}

