#include "ProductionBuilding.h"
#include "Net/UnrealNetwork.h"
#include "InventoryComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialBillboardComponent -FallbackName=MaterialBillboardComponent

class UItem;


void AProductionBuilding::TickProduction(float DeltaTime) {
}


bool AProductionBuilding::ProductionCapacityIsFull() const {
    return false;
}

void AProductionBuilding::OnRep_ProductionItemsChanged() {
}

void AProductionBuilding::NotifyProductionItemStarted_Implementation() {
}

void AProductionBuilding::MulticastNotifyProductionItemStarted_Implementation() {
}

bool AProductionBuilding::IsItemFinished(UItem* Item) const {
    return false;
}

bool AProductionBuilding::IsInstantProducer() const {
    return false;
}

bool AProductionBuilding::HasItemsInProduction() const {
    return false;
}

bool AProductionBuilding::HasAnyFinishedItem() const {
    return false;
}

UItem* AProductionBuilding::GetRecipeModItem() const {
    return NULL;
}

TArray<UItem*> AProductionBuilding::GetRecipeItems() const {
    return TArray<UItem*>();
}

float AProductionBuilding::GetProductionTime() const {
    return 0.0f;
}

TArray<FRecipeProductionItem> AProductionBuilding::GetProductionItems() const {
    return TArray<FRecipeProductionItem>();
}

float AProductionBuilding::GetItemProgress(UItem* Item) const {
    return 0.0f;
}

FDataTableRowHandle AProductionBuilding::GetDefaultItemResult() const {
    return FDataTableRowHandle{};
}

FDataTableRowHandle AProductionBuilding::FindBestRecipe() const {
    return FDataTableRowHandle{};
}

bool AProductionBuilding::CanCraft() const {
    return false;
}

bool AProductionBuilding::CanAddItem(UItem* Item) const {
    return false;
}

bool AProductionBuilding::AreIngredientsFull() const {
    return false;
}

void AProductionBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProductionBuilding, ProductionItems);
}

AProductionBuilding::AProductionBuilding() {
    this->MaxIngredients = 0;
    this->bCanProduceNonRecipeItems = false;
    this->bRequiresModItem = false;
    this->ProductionTime = 0.00f;
    this->MaxProductionItems = 0;
    this->MaxSimulateousItems = 0;
    this->FlavorImage = NULL;
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->MaterialBillboardComponent = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("MaterialBillboardComponent"));
}

