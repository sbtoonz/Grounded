#include "ItemSpawnPoint.h"
#include "ObsidianIDComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/StaticMeshComponent.h"

AItemSpawnPoint::AItemSpawnPoint() {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->ItemSpawnGroupData = NULL;
    this->ItemSpawnData = NULL;
}

