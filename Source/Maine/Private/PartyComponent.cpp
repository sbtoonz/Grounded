#include "PartyComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class APlayerState;
class ASurvivalPlayerController;
class ASurvivalPlayerState;
class ASurvivalPlayerCharacter;
class UItem;
class APlayerController;
class UInventoryComponent;
class ASurvivalCharacter;
class UPointOfInterestDataAsset;
class UGlobalColorTheme;
class ABuilding;
class UPointOfInterestComponent;

void UPartyComponent::UpdateResearchPointData(int32 PreviousAmount) {
}

void UPartyComponent::SetPlayerIdentityViaPlayerState(APlayerState* PlayerState, EPlayerCharacterIdentity PlayerIdentity) {
}

void UPartyComponent::ServerViewTutorial_Implementation(FDataTableRowHandle TutorialRowHandle) {
}
bool UPartyComponent::ServerViewTutorial_Validate(FDataTableRowHandle TutorialRowHandle) {
    return true;
}

void UPartyComponent::ServerUseTechTreeKeyItem_Implementation(const FDataTableRowHandle& Item, ASurvivalPlayerController* Instigator) {
}
bool UPartyComponent::ServerUseTechTreeKeyItem_Validate(const FDataTableRowHandle& Item, ASurvivalPlayerController* Instigator) {
    return true;
}

void UPartyComponent::ServerUnlockTechTree_Implementation(FDataTableRowHandle TechTreeRowHandle, ASurvivalPlayerController* Instigator) {
}
bool UPartyComponent::ServerUnlockTechTree_Validate(FDataTableRowHandle TechTreeRowHandle, ASurvivalPlayerController* Instigator) {
    return true;
}

void UPartyComponent::ServerUnlockItemStackUpgradeTier_Implementation(FGameplayTag ItemStackTag, ASurvivalPlayerState* AquirerPlayerState, bool bIgnoreCost) {
}
bool UPartyComponent::ServerUnlockItemStackUpgradeTier_Validate(FGameplayTag ItemStackTag, ASurvivalPlayerState* AquirerPlayerState, bool bIgnoreCost) {
    return true;
}

void UPartyComponent::ServerSpendPointsOnTechTreeUnlock_Implementation(FDataTableRowHandle TechTreeRecipeRowHandle, int32 Points, ASurvivalPlayerController* Instigator) {
}
bool UPartyComponent::ServerSpendPointsOnTechTreeUnlock_Validate(FDataTableRowHandle TechTreeRecipeRowHandle, int32 Points, ASurvivalPlayerController* Instigator) {
    return true;
}

void UPartyComponent::ServerSetTutorialComplete_Implementation(FDataTableRowHandle TutorialRowHandle) {
}
bool UPartyComponent::ServerSetTutorialComplete_Validate(FDataTableRowHandle TutorialRowHandle) {
    return true;
}

void UPartyComponent::ServerSetLastSuperChipReturned_Implementation(const FDataTableRowHandle& Item) {
}
bool UPartyComponent::ServerSetLastSuperChipReturned_Validate(const FDataTableRowHandle& Item) {
    return true;
}

void UPartyComponent::ServerRemoveKeyItem_Implementation(FDataTableRowHandle ItemRowHandle) {
}
bool UPartyComponent::ServerRemoveKeyItem_Validate(FDataTableRowHandle ItemRowHandle) {
    return true;
}

void UPartyComponent::ServerPurchaseRecipe_Implementation(FDataTableRowHandle TechTreeRecipeRowHandle, ASurvivalPlayerController* Instigator) {
}
bool UPartyComponent::ServerPurchaseRecipe_Validate(FDataTableRowHandle TechTreeRecipeRowHandle, ASurvivalPlayerController* Instigator) {
    return true;
}

void UPartyComponent::ServerCreateAndAddKeyItem_Implementation(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerCharacter* Acquirer, bool bHideNotification) {
}
bool UPartyComponent::ServerCreateAndAddKeyItem_Validate(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerCharacter* Acquirer, bool bHideNotification) {
    return true;
}

void UPartyComponent::ServerAddScienceFound_Implementation(int32 ScienceAmount) {
}
bool UPartyComponent::ServerAddScienceFound_Validate(int32 ScienceAmount) {
    return true;
}

void UPartyComponent::ServerAddKeyItem_Implementation(UItem* Item, ASurvivalPlayerCharacter* Acquirer, bool bHideNotification) {
}
bool UPartyComponent::ServerAddKeyItem_Validate(UItem* Item, ASurvivalPlayerCharacter* Acquirer, bool bHideNotification) {
    return true;
}

void UPartyComponent::RestParty() {
}

void UPartyComponent::ResetPlayerIdentities() {
}

void UPartyComponent::RemoveScience(int32 ScienceAmount) {
}

void UPartyComponent::RecipeCraftedCallback(UInventoryComponent* Sender, FDataTableRowHandle RecipeRow) {
}

void UPartyComponent::PlayRestMovie() {
}

void UPartyComponent::OnRep_TechUnlockDatas() {
}

void UPartyComponent::OnRep_ScienceFound(int32 PreviousScienceFound) {
}

void UPartyComponent::OnRep_RestingPartyMembers() {
}

void UPartyComponent::OnRep_ResearchPointsAdded(int32 PreviousAmount) {
}

void UPartyComponent::OnRep_KnownRecipesChanged() {
}

void UPartyComponent::OnRep_ItemStackUpgrades() {
}

void UPartyComponent::OnRep_ItemKnowledge() {
}

void UPartyComponent::OnRep_AssignedPlayerIdentities() {
}

void UPartyComponent::NotifyCreatureKillCredit(ASurvivalCharacter* Creature, ASurvivalPlayerState* Killer) {
}

void UPartyComponent::MulticastUpgradePointsAdded_Implementation(bool IsPartyUpgradePoints, int32 Amount, ASurvivalPlayerState* AquirerPlayerState) {
}

void UPartyComponent::MulticastTechUnlockDataUnlocked_Implementation(FDataTableRowHandle TechUnlockDataRowHandle, ASurvivalPlayerState* UnlockerPlayerState) {
}

void UPartyComponent::MulticastTechTreeUnlocked_Implementation(FDataTableRowHandle TechTreeRowHandle, ASurvivalPlayerState* UnlockerPlayerState) {
}

void UPartyComponent::MulticastSetRestMovie_Implementation(int32 RestMovieIndex) {
}

void UPartyComponent::MulticastPointOfInterestDiscovered_Implementation(UPointOfInterestDataAsset* ColorTheme, ASurvivalPlayerState* UnlockerPlayerState) {
}

void UPartyComponent::MulticastNotifyResourceResearched_Implementation(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned) {
}

void UPartyComponent::MulticastNotifyReputationThresholdPassed_Implementation(FGameplayTag FactionTag, const FReputationNotificationData& ReputationNotificationData) {
}

void UPartyComponent::MulticastNotifyNewResourceKnown_Implementation(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned) {
}

void UPartyComponent::MulticastNotifyNewRecipesKnownCoziness_Implementation(const TArray<FDataTableRowHandle>& RecipeRowHandles, ASurvivalPlayerState* AcquirerPlayerState, int32 CozinessLevel) {
}

void UPartyComponent::MulticastNotifyNewRecipesKnown_Implementation(const TArray<FDataTableRowHandle>& RecipeRowHandles, ASurvivalPlayerState* AcquirerPlayerState, ERecipeUnlockSource RecipeUnlockSource, FLocString DisplayName) {
}

void UPartyComponent::MulticastNotifyNewRecipeKnown_Implementation(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AcquirerPlayerState) {
}

void UPartyComponent::MulticastNotifyKeyItemCollected_Implementation(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned) {
}

void UPartyComponent::MulticastNotifyBestiaryItemCollected_Implementation(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState) {
}

void UPartyComponent::MulticastItemStackUpgradeChanged_Implementation(FGameplayTag ItemStackTag, ASurvivalPlayerState* AquirerPlayerState) {
}

void UPartyComponent::MulticastColorThemeDiscovered_Implementation(TSubclassOf<UGlobalColorTheme> PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState) {
}

void UPartyComponent::MulticastBroadcastOnGameRest_Implementation(float RestDuration) {
}

bool UPartyComponent::KnowsResourceName(FName ItemName) const {
    return false;
}

bool UPartyComponent::KnowsResource(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsRecipeForIngredient(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const {
    return false;
}

bool UPartyComponent::KnowsOtherRecipeThatContainsIngredientRecipe(FDataTableRowHandle RecipeRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsOtherRecipeThatContainsIngredient(FDataTableRowHandle IngredientRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsOfRecipeIngredient(FDataTableRowHandle IngredientRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsCraftingRecipeInCategory(FGameplayTag Category) const {
    return false;
}

bool UPartyComponent::KnowsCraftingRecipeForIngredient(FDataTableRowHandle IngredientRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsCraftingRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const {
    return false;
}

bool UPartyComponent::KnowsBuildingRecipeInCategory(FGameplayTag Category) const {
    return false;
}

bool UPartyComponent::KnowsBuildingRecipeForIngredient(FDataTableRowHandle IngredientRowHandle) const {
    return false;
}

bool UPartyComponent::KnowsBuildingRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const {
    return false;
}

bool UPartyComponent::IsTechTreeRecipeUnlocked(FDataTableRowHandle TechTreeRecipeRowHandle) const {
    return false;
}

bool UPartyComponent::IsRestOnCooldown() const {
    return false;
}

bool UPartyComponent::IsAnyPartyMemberInRange(FVector Location, float Range) {
    return false;
}

bool UPartyComponent::HasUninspectedResource(ASurvivalPlayerState* PlayerState) const {
    return false;
}

bool UPartyComponent::HasUninspectedCraftingRecipe(FGameplayTag Category, ASurvivalPlayerState* PlayerState) const {
    return false;
}

bool UPartyComponent::HasUninspectedBuildingRecipe(FGameplayTag Category, ASurvivalPlayerState* PlayerState) const {
    return false;
}

bool UPartyComponent::HasResearchedResourceName(FName ItemRowName) const {
    return false;
}

bool UPartyComponent::HasResearchedResource(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UPartyComponent::HasKeyItemSubcategory(FGameplayTag KeyItemCategory, FGameplayTag KeyItemSubCategory) const {
    return false;
}

bool UPartyComponent::HasKeyItemCategory(FGameplayTag KeyItemCategory) const {
    return false;
}

bool UPartyComponent::HasKeyItem(const FDataTableRowHandle& ItemRowHandle) const {
    return false;
}

TArray<FDataTableRowHandle_NetCrc> UPartyComponent::GetUnlockedTechTrees() const {
    return TArray<FDataTableRowHandle_NetCrc>();
}

TArray<FDataTableRowHandle_NetCrc> UPartyComponent::GetUnlockedSignSets() const {
    return TArray<FDataTableRowHandle_NetCrc>();
}

TArray<UPointOfInterestDataAsset*> UPartyComponent::GetUnlockedPOIs() const {
    return TArray<UPointOfInterestDataAsset*>();
}

TArray<TSubclassOf<UGlobalColorTheme>> UPartyComponent::GetUnlockedColorThemes() const {
    return TArray<TSubclassOf<UGlobalColorTheme>>();
}

int32 UPartyComponent::GetTotalPersonalUpgradePoints() const {
    return 0;
}

int32 UPartyComponent::GetTotalPartyUpgradePoints() const {
    return 0;
}

FDataTableRowHandle UPartyComponent::GetTechTreeKeyItem(bool bCheckUnlocked) const {
    return FDataTableRowHandle{};
}

int32 UPartyComponent::GetTeamReputation(FDataTableRowHandle TeamRowHandle) const {
    return 0;
}

int32 UPartyComponent::GetScienceFound() const {
    return 0;
}

float UPartyComponent::GetRestCooldownRemaining() const {
    return 0.0f;
}

int32 UPartyComponent::GetResearchPoints() const {
    return 0;
}

int32 UPartyComponent::GetResearchLevel() const {
    return 0;
}

int32 UPartyComponent::GetReputation(FGameplayTag FactionTag) const {
    return 0;
}

int32 UPartyComponent::GetRemainingPartyUpgradePoints() const {
    return 0;
}

TArray<FDataTableRowHandle> UPartyComponent::GetRecipesUnlockedForResearchLevel(int32 ResearchLevel) {
    return TArray<FDataTableRowHandle>();
}

FDataTableRowHandle UPartyComponent::GetRecipeForItems(const TArray<FDataTableRowHandle>& Items, FGameplayTag CraftingBuildingTag) const {
    return FDataTableRowHandle{};
}

FDataTableRowHandle UPartyComponent::GetRecipeForIngredients(const TArray<FRecipeRequirements>& Requirements, FGameplayTag CraftingBuildingTag) const {
    return FDataTableRowHandle{};
}

float UPartyComponent::GetProgressTowardsNextResearchLevel(int32 Points) const {
    return 0.0f;
}

int32 UPartyComponent::GetPointsSpentOnTechUnlock(FDataTableRowHandle TechUnlockRowHandle) {
    return 0;
}

int32 UPartyComponent::GetPointsRequiredForResearchLevel(int32 Level) const {
    return 0;
}

int32 UPartyComponent::GetPointsRequiredForNextResearchLevel(int32 Points) const {
    return 0;
}

ASurvivalPlayerState* UPartyComponent::GetPlayerStateMatchingIdentity(EPlayerCharacterIdentity Identity) const {
    return NULL;
}

EPlayerCharacterIdentity UPartyComponent::GetPlayerIdentityViaPlayerState(const ASurvivalPlayerState* PlayerState) const {
    return EPlayerCharacterIdentity::Max;
}

EPlayerCharacterIdentity UPartyComponent::GetPlayerIdentityViaController(const APlayerController* PlayerController) const {
    return EPlayerCharacterIdentity::Max;
}

EPlayerCharacterIdentity UPartyComponent::GetPlayerIdentity(const FUniqueNetIdRepl& UniqueId) const {
    return EPlayerCharacterIdentity::Max;
}

TArray<ASurvivalPlayerCharacter*> UPartyComponent::GetPartyMembers() {
    return TArray<ASurvivalPlayerCharacter*>();
}

int32 UPartyComponent::GetNumTechTreeUnlocksPurchased() {
    return 0;
}

int32 UPartyComponent::GetNumTechDatasUnlockedForTreeRowHandle(FDataTableRowHandle TechTreeRowHandle) {
    return 0;
}

int32 UPartyComponent::GetNumResearchedResources() const {
    return 0;
}

int32 UPartyComponent::GetNumPartyMembers() {
    return 0;
}

int32 UPartyComponent::GetNumKeyTechTreeKeyItemsWithKeyItemTag(FGameplayTag KeyItemSubCategory, ETechChipQuery TechChipQuery) const {
    return 0;
}

float UPartyComponent::GetMaxSpeakingRangeSq() const {
    return 0.0f;
}

float UPartyComponent::GetMaxSpeakingRange() const {
    return 0.0f;
}

float UPartyComponent::GetLastRestTime() const {
    return 0.0f;
}

TArray<FDataTableRowHandle> UPartyComponent::GetKnownResources(FGameplayTag ItemTag) const {
    return TArray<FDataTableRowHandle>();
}

TArray<FDataTableRowHandle> UPartyComponent::GetKeyItems() const {
    return TArray<FDataTableRowHandle>();
}

int32 UPartyComponent::GetItemStackUpgradeTier(FGameplayTag ItemStackTag) const {
    return 0;
}

int32 UPartyComponent::GetItemStackUpgradeCost(FGameplayTag ItemStackTag) const {
    return 0;
}

int32 UPartyComponent::GetItemStackUpgradeBonus(FGameplayTag ItemStackTag) const {
    return 0;
}

int32 UPartyComponent::GetItemResearchPoints(FGameplayTag RarityTag) const {
    return 0;
}

FGameplayTag UPartyComponent::GetHighestReputation() const {
    return FGameplayTag{};
}

ASurvivalPlayerCharacter* UPartyComponent::GetFirstPartyMemberByIdentity(EPlayerCharacterIdentity Identity) {
    return NULL;
}

TArray<ABuilding*> UPartyComponent::GetEssentialBuildings() {
    return TArray<ABuilding*>();
}

int32 UPartyComponent::GetCurrentResearchLevelForPointTotal(int32 Points) const {
    return 0;
}

TArray<FDataTableRowHandle> UPartyComponent::GetCraftingRecipesWithIngredient(FDataTableRowHandle IngredientRowHandle, bool OnlyIncludeKnownRecipes) {
    return TArray<FDataTableRowHandle>();
}

ASurvivalPlayerCharacter* UPartyComponent::GetClosestPlayer(FVector Location) {
    return NULL;
}

float UPartyComponent::GetClosestPartyMemberDistanceSquared(FVector Location) {
    return 0.0f;
}

TArray<FDataTableRowHandle> UPartyComponent::GetBuildingRecipesWithIngredient(FDataTableRowHandle IngredientRowHandle, bool OnlyIncludeKnownRecipes) {
    return TArray<FDataTableRowHandle>();
}

int32 UPartyComponent::GetBonusScienceForResearchLevel(int32 ResearchLevel) const {
    return 0;
}

void UPartyComponent::FreePlayerIdentityViaPlayerController(const APlayerController* PlayerController) {
}

void UPartyComponent::FinishRestSequence() {
}

bool UPartyComponent::DiscoverPointOfInterestData(UPointOfInterestDataAsset* PointOfInterestData, ASurvivalPlayerController* Instigator) {
    return false;
}

bool UPartyComponent::DiscoverPointOfInterest(UPointOfInterestComponent* PointOfInterest, ASurvivalPlayerController* Instigator) {
    return false;
}

bool UPartyComponent::DiscoveredResourceName(FName ItemName) const {
    return false;
}

bool UPartyComponent::DiscoveredResource(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UPartyComponent::DiscoverColorTheme(TSubclassOf<UGlobalColorTheme> Theme, ASurvivalPlayerController* Instigator) {
    return false;
}

void UPartyComponent::ClearTeamReputation(FDataTableRowHandle TeamRowHandle) {
}

void UPartyComponent::ClearReputation(FGameplayTag FactionTag) {
}

void UPartyComponent::ClearAllReputations() {
}

bool UPartyComponent::CanUpgradeItemStack(FGameplayTag ItemStackTag, bool bIgnoreCost) const {
    return false;
}

void UPartyComponent::AddUnlockedSignSet(FDataTableRowHandle SignSetDataHandle) {
}

void UPartyComponent::AddTeamReputation(FDataTableRowHandle TeamRowHandle, int32 Value) {
}

void UPartyComponent::AddScience(int32 ScienceAmount) {
}

void UPartyComponent::AddResearchedResource(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AquirerPlayerState) {
}

void UPartyComponent::AddReputation(FGameplayTag FactionTag, int32 Value) {
}

void UPartyComponent::AddPersonalUpgradePoints(int32 Amount, ASurvivalPlayerState* AquirerPlayerState) {
}

void UPartyComponent::AddPartyUpgadePoints(int32 Amount, ASurvivalPlayerState* AquirerPlayerState) {
}

bool UPartyComponent::AddKnownRecipe(const FDataTableRowHandle& RecipeRowHandle, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked) {
    return false;
}

bool UPartyComponent::AddKnownCraftingRecipeByName(FName RecipeName, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked) {
    return false;
}

bool UPartyComponent::AddKnownCraftingRecipe(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked) {
    return false;
}

bool UPartyComponent::AddKnownBuildingRecipeByName(FName RecipeName, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked) {
    return false;
}

bool UPartyComponent::AddKnownBuildingRecipe(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked) {
    return false;
}

void UPartyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPartyComponent, bUseAlternateRecipeMode);
    DOREPLIFETIME(UPartyComponent, PartyMembers);
    DOREPLIFETIME(UPartyComponent, RestingPartyMembers);
    DOREPLIFETIME(UPartyComponent, LastRestTime);
    DOREPLIFETIME(UPartyComponent, ScienceFound);
    DOREPLIFETIME(UPartyComponent, ResearchPoints);
    DOREPLIFETIME(UPartyComponent, PartyUpgradePoints);
    DOREPLIFETIME(UPartyComponent, PersonalUpgradePoints);
    DOREPLIFETIME(UPartyComponent, OwnedKeyItems);
    DOREPLIFETIME(UPartyComponent, KnownCraftingRecipes);
    DOREPLIFETIME(UPartyComponent, KnownBuildingRecipes);
    DOREPLIFETIME(UPartyComponent, AllItemKnowledge);
    DOREPLIFETIME(UPartyComponent, TechUnlockDatas);
    DOREPLIFETIME(UPartyComponent, UnlockedTechTrees);
    DOREPLIFETIME(UPartyComponent, DiscoveredPointsOfInterest);
    DOREPLIFETIME(UPartyComponent, DiscoveredColorThemes);
    DOREPLIFETIME(UPartyComponent, UnlockedSignSetData);
    DOREPLIFETIME(UPartyComponent, UnlockedTransmitterTypes);
    DOREPLIFETIME(UPartyComponent, PlayerIdentities);
    DOREPLIFETIME(UPartyComponent, RandomPlayerIdentities);
    DOREPLIFETIME(UPartyComponent, ItemStackUpgrades);
}

UPartyComponent::UPartyComponent() {
    this->bUseAlternateRecipeMode = true;
    this->DefaultRestDuration = 8;
    this->MinimumDayToAccrueReputation = 5;
    this->MaxSpeakingRange = 2500.00f;
    this->bAddCraftingIngredientsAsKnownResources = false;
    this->RestCustscene = NULL;
    this->TimelapseRestCustscene = NULL;
    this->LastRestTime = 0.00f;
    this->RestCooldown = 12;
    this->ActiveRestSequencePlayer = NULL;
    this->ScienceFound = 0;
    this->ResearchPoints = 0;
    this->PartyUpgradePoints = 0;
    this->PersonalUpgradePoints = 0;
}

