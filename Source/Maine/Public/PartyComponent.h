#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RestDelegateDelegate.h"
#include "OnTechTreeUnlockedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnKeyItemObtainedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=DataTableRowHandle_NetCrc -FallbackName=DataTableRowHandle_NetCrc
#include "PersistentInterface.h"
#include "ColorThemePlayerDelegateDelegate.h"
#include "StatusEffectOrigin.h"
#include "RestStatusDelegateDelegate.h"
#include "EPlayerCharacterIdentity.h"
#include "RecipeKnowledge.h"
#include "OnBestiaryItemObtainedDelegateDelegate.h"
#include "OnNewResourceKnownDelegateDelegate.h"
#include "OnResourceResaerchedDelegateDelegate.h"
#include "OnUpgradePointsAquiredDelegateDelegate.h"
#include "PartyUpgradePointsChangedDelegateDelegate.h"
#include "OnNewRecipeKnownDelegateDelegate.h"
#include "OnNewRecipesKnownDelegateDelegate.h"
#include "TechChipRedeemedDelegateDelegate.h"
#include "OnTechUnlockDataUnlockedDelegateDelegate.h"
#include "OnTechTreeNodeSpendDelegateDelegate.h"
#include "PointOfInterestPlayerDelegateDelegate.h"
#include "OnRecipeChangedDelegateDelegate.h"
#include "OnItemKnowledgeChangedDelegateDelegate.h"
#include "OnItemStacksChangedDelegateDelegate.h"
#include "OnItemStackUpgradeChangedDelegateDelegate.h"
#include "OnScienceChangedDelegate.h"
#include "OnResearchPointsChangedDelegate.h"
#include "OnRecipeCraftedDelegateDelegate.h"
#include "OnItemCraftedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnCozinessLevelAchievedDelegateDelegate.h"
#include "OnCreatureKilledDelegateDelegate.h"
#include "OnPlayerIdentitiesChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ReputationNotificationData.h"
#include "ItemKnowledge.h"
#include "TechUnlockData.h"
#include "ItemStackUpgrade.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ERecipeUnlockSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "RecipeRequirements.h"
#include "ETechChipQuery.h"
#include "PartyComponent.generated.h"

class APlayerState;
class UGlobalColorTheme;
class ASurvivalPlayerController;
class UPointOfInterestDataAsset;
class ULevelSequencePlayer;
class ASurvivalPlayerCharacter;
class UCutsceneDataAsset;
class URestMovieDataAsset;
class ASurvivalPlayerState;
class UPointOfInterestComponent;
class UItem;
class UInventoryComponent;
class ASurvivalCharacter;
class APlayerController;
class ABuilding;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPartyComponent : public UActorComponent, public IPersistentInterface, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FRestDelegate OnGameRest;
    
    UPROPERTY(BlueprintAssignable)
    FRestDelegate OnGameRestMulticast;
    
    UPROPERTY(BlueprintAssignable)
    FRestStatusDelegate OnPartyRestStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyItemObtainedDelegate OnKeyItemObtainedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnBestiaryItemObtainedDelegate OnBestiaryItemObtainedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNewResourceKnownDelegate OnNewResourceKnownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnResourceResaerchedDelegate OnResourceResearchedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpgradePointsAquiredDelegate OnUpgradePointsAquiredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPartyUpgradePointsChangedDelegate OnPartyUpgradePointsSpent;
    
    UPROPERTY(BlueprintAssignable)
    FOnNewRecipeKnownDelegate OnNewRecipeKnownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNewRecipesKnownDelegate OnNewRecipesKnownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTechTreeUnlockedDelegate OnTechTreeUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTechChipRedeemedDelegate OnTechChipRedeemed;
    
    UPROPERTY(BlueprintAssignable)
    FOnTechUnlockDataUnlockedDelegate OnTechUnlockDataUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTechTreeNodeSpendDelegate OnTechTreeNodeSpendDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPointOfInterestPlayerDelegate OnPointOfInterestDiscovered;
    
    UPROPERTY(BlueprintAssignable)
    FColorThemePlayerDelegate OnColorThemeDiscovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnRecipeChangedDelegate OnRecipeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemKnowledgeChangedDelegate OnItemKnowledgeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemStacksChangedDelegate OnItemStacksChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemStackUpgradeChangedDelegate OnItemStackUpgradeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnScienceChanged OnScienceFoundChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnResearchPointsChanged OnResearchPointsChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRecipeCraftedDelegate OnRecipeCrafted;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemCraftedDelegate OnItemCrafted;
    
    UPROPERTY(BlueprintAssignable)
    FOnCozinessLevelAchievedDelegate OnCozinessLevelAchieved;
    
    UPROPERTY(BlueprintAssignable)
    FOnCreatureKilledDelegate OnCreatureKilled;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerIdentitiesChanged OnPlayerIdentitiesChangedDelegate;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    uint8 bUseAlternateRecipeMode: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefaultRestDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinimumDayToAccrueReputation;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeakingRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAddCraftingIngredientsAsKnownResources;
    
    UPROPERTY(Replicated, Transient)
    TArray<ASurvivalPlayerCharacter*> PartyMembers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RestingPartyMembers)
    TArray<ASurvivalPlayerCharacter*> RestingPartyMembers;
    
    UPROPERTY(EditDefaultsOnly)
    UCutsceneDataAsset* RestCustscene;
    
    UPROPERTY(EditDefaultsOnly)
    UCutsceneDataAsset* TimelapseRestCustscene;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<URestMovieDataAsset*> RestMovies;
    
    UPROPERTY(Replicated, Transient)
    float LastRestTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 RestCooldown;
    
    UPROPERTY(Transient)
    ULevelSequencePlayer* ActiveRestSequencePlayer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ScienceFound)
    int32 ScienceFound;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ResearchPointsAdded)
    int32 ResearchPoints;
    
    UPROPERTY(Replicated, Transient)
    int32 PartyUpgradePoints;
    
    UPROPERTY(Replicated, Transient)
    int32 PersonalUpgradePoints;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle> OwnedKeyItems;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_KnownRecipesChanged)
    TArray<FRecipeKnowledge> KnownCraftingRecipes;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_KnownRecipesChanged)
    TArray<FRecipeKnowledge> KnownBuildingRecipes;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ItemKnowledge)
    TArray<FItemKnowledge> AllItemKnowledge;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TechUnlockDatas)
    TArray<FTechUnlockData> TechUnlockDatas;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle_NetCrc> UnlockedTechTrees;
    
    UPROPERTY(Replicated, Transient)
    TArray<UPointOfInterestDataAsset*> DiscoveredPointsOfInterest;
    
    UPROPERTY(Replicated, Transient)
    TArray<TSubclassOf<UGlobalColorTheme>> DiscoveredColorThemes;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle_NetCrc> UnlockedSignSetData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> PartyStatusEffects;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> DefaultTechTrees;
    
    UPROPERTY(EditDefaultsOnly, Replicated)
    TArray<FGameplayTag> UnlockedTransmitterTypes;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AssignedPlayerIdentities)
    TArray<FUniqueNetIdRepl> PlayerIdentities;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AssignedPlayerIdentities)
    TArray<FUniqueNetIdRepl> RandomPlayerIdentities;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ItemStackUpgrades)
    TArray<FItemStackUpgrade> ItemStackUpgrades;
    
public:
    UPartyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void UpdateResearchPointData(int32 PreviousAmount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerIdentityViaPlayerState(APlayerState* PlayerState, EPlayerCharacterIdentity PlayerIdentity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerViewTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseTechTreeKeyItem(const FDataTableRowHandle& Item, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlockTechTree(FDataTableRowHandle TechTreeRowHandle, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlockItemStackUpgradeTier(FGameplayTag ItemStackTag, ASurvivalPlayerState* AquirerPlayerState, bool bIgnoreCost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpendPointsOnTechTreeUnlock(FDataTableRowHandle TechTreeRecipeRowHandle, int32 Points, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTutorialComplete(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetLastSuperChipReturned(const FDataTableRowHandle& Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveKeyItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPurchaseRecipe(FDataTableRowHandle TechTreeRecipeRowHandle, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateAndAddKeyItem(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerCharacter* Acquirer, bool bHideNotification);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddScienceFound(int32 ScienceAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddKeyItem(UItem* Item, ASurvivalPlayerCharacter* Acquirer, bool bHideNotification);
    
    UFUNCTION(BlueprintCallable)
    void RestParty();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerIdentities();
    
    UFUNCTION(BlueprintCallable)
    void RemoveScience(int32 ScienceAmount);
    
private:
    UFUNCTION()
    void RecipeCraftedCallback(UInventoryComponent* Sender, FDataTableRowHandle RecipeRow);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayRestMovie();
    
private:
    UFUNCTION()
    void OnRep_TechUnlockDatas();
    
    UFUNCTION()
    void OnRep_ScienceFound(int32 PreviousScienceFound);
    
    UFUNCTION()
    void OnRep_RestingPartyMembers();
    
    UFUNCTION()
    void OnRep_ResearchPointsAdded(int32 PreviousAmount);
    
    UFUNCTION()
    void OnRep_KnownRecipesChanged();
    
    UFUNCTION()
    void OnRep_ItemStackUpgrades();
    
    UFUNCTION()
    void OnRep_ItemKnowledge();
    
    UFUNCTION()
    void OnRep_AssignedPlayerIdentities();
    
public:
    UFUNCTION()
    void NotifyCreatureKillCredit(ASurvivalCharacter* Creature, ASurvivalPlayerState* Killer);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastUpgradePointsAdded(bool IsPartyUpgradePoints, int32 Amount, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastTechUnlockDataUnlocked(FDataTableRowHandle TechUnlockDataRowHandle, ASurvivalPlayerState* UnlockerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastTechTreeUnlocked(FDataTableRowHandle TechTreeRowHandle, ASurvivalPlayerState* UnlockerPlayerState);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetRestMovie(int32 RestMovieIndex);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPointOfInterestDiscovered(UPointOfInterestDataAsset* ColorTheme, ASurvivalPlayerState* UnlockerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyResourceResearched(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastNotifyReputationThresholdPassed(FGameplayTag FactionTag, const FReputationNotificationData& ReputationNotificationData);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyNewResourceKnown(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyNewRecipesKnownCoziness(const TArray<FDataTableRowHandle>& RecipeRowHandles, ASurvivalPlayerState* AcquirerPlayerState, int32 CozinessLevel);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyNewRecipesKnown(const TArray<FDataTableRowHandle>& RecipeRowHandles, ASurvivalPlayerState* AcquirerPlayerState, ERecipeUnlockSource RecipeUnlockSource, FLocString DisplayName);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyNewRecipeKnown(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AcquirerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyKeyItemCollected(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyBestiaryItemCollected(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastItemStackUpgradeChanged(FGameplayTag ItemStackTag, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastColorThemeDiscovered(TSubclassOf<UGlobalColorTheme> PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastBroadcastOnGameRest(float RestDuration);
    
    UFUNCTION(BlueprintPure)
    bool KnowsResourceName(FName ItemName) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsResource(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsRecipeForIngredient(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsOtherRecipeThatContainsIngredientRecipe(FDataTableRowHandle RecipeRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsOtherRecipeThatContainsIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsOfRecipeIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsCraftingRecipeInCategory(FGameplayTag Category) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsCraftingRecipeForIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsCraftingRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsBuildingRecipeInCategory(FGameplayTag Category) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsBuildingRecipeForIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool KnowsBuildingRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTechTreeRecipeUnlocked(FDataTableRowHandle TechTreeRecipeRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRestOnCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyPartyMemberInRange(FVector Location, float Range);
    
    UFUNCTION(BlueprintPure)
    bool HasUninspectedResource(ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintPure)
    bool HasUninspectedCraftingRecipe(FGameplayTag Category, ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintPure)
    bool HasUninspectedBuildingRecipe(FGameplayTag Category, ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintPure)
    bool HasResearchedResourceName(FName ItemRowName) const;
    
    UFUNCTION(BlueprintPure)
    bool HasResearchedResource(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool HasKeyItemSubcategory(FGameplayTag KeyItemCategory, FGameplayTag KeyItemSubCategory) const;
    
    UFUNCTION(BlueprintPure)
    bool HasKeyItemCategory(FGameplayTag KeyItemCategory) const;
    
    UFUNCTION(BlueprintPure)
    bool HasKeyItem(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle_NetCrc> GetUnlockedTechTrees() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle_NetCrc> GetUnlockedSignSets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPointOfInterestDataAsset*> GetUnlockedPOIs() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UGlobalColorTheme>> GetUnlockedColorThemes() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalPersonalUpgradePoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalPartyUpgradePoints() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetTechTreeKeyItem(bool bCheckUnlocked) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTeamReputation(FDataTableRowHandle TeamRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScienceFound() const;
    
    UFUNCTION(BlueprintPure)
    float GetRestCooldownRemaining() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetResearchPoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetResearchLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReputation(FGameplayTag FactionTag) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingPartyUpgradePoints() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FDataTableRowHandle> GetRecipesUnlockedForResearchLevel(int32 ResearchLevel);
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetRecipeForItems(const TArray<FDataTableRowHandle>& Items, FGameplayTag CraftingBuildingTag) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetRecipeForIngredients(const TArray<FRecipeRequirements>& Requirements, FGameplayTag CraftingBuildingTag) const;
    
    UFUNCTION(BlueprintPure)
    float GetProgressTowardsNextResearchLevel(int32 Points) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPointsSpentOnTechUnlock(FDataTableRowHandle TechUnlockRowHandle);
    
    UFUNCTION(BlueprintPure)
    int32 GetPointsRequiredForResearchLevel(int32 Level) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPointsRequiredForNextResearchLevel(int32 Points) const;
    
    UFUNCTION(BlueprintPure)
    ASurvivalPlayerState* GetPlayerStateMatchingIdentity(EPlayerCharacterIdentity Identity) const;
    
    UFUNCTION(BlueprintPure)
    EPlayerCharacterIdentity GetPlayerIdentityViaPlayerState(const ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintPure)
    EPlayerCharacterIdentity GetPlayerIdentityViaController(const APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintPure)
    EPlayerCharacterIdentity GetPlayerIdentity(const FUniqueNetIdRepl& UniqueId) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASurvivalPlayerCharacter*> GetPartyMembers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumTechTreeUnlocksPurchased();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTechDatasUnlockedForTreeRowHandle(FDataTableRowHandle TechTreeRowHandle);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumResearchedResources() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPartyMembers();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumKeyTechTreeKeyItemsWithKeyItemTag(FGameplayTag KeyItemSubCategory, ETechChipQuery TechChipQuery) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeakingRangeSq() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeakingRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastRestTime() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetKnownResources(FGameplayTag ItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetKeyItems() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemStackUpgradeTier(FGameplayTag ItemStackTag) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemStackUpgradeCost(FGameplayTag ItemStackTag) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemStackUpgradeBonus(FGameplayTag ItemStackTag) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemResearchPoints(FGameplayTag RarityTag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetHighestReputation() const;
    
    UFUNCTION(BlueprintCallable)
    ASurvivalPlayerCharacter* GetFirstPartyMemberByIdentity(EPlayerCharacterIdentity Identity);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABuilding*> GetEssentialBuildings();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentResearchLevelForPointTotal(int32 Points) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetCraftingRecipesWithIngredient(FDataTableRowHandle IngredientRowHandle, bool OnlyIncludeKnownRecipes);
    
    UFUNCTION(BlueprintCallable)
    ASurvivalPlayerCharacter* GetClosestPlayer(FVector Location);
    
    UFUNCTION(BlueprintPure)
    float GetClosestPartyMemberDistanceSquared(FVector Location);
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetBuildingRecipesWithIngredient(FDataTableRowHandle IngredientRowHandle, bool OnlyIncludeKnownRecipes);
    
    UFUNCTION(BlueprintPure)
    int32 GetBonusScienceForResearchLevel(int32 ResearchLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void FreePlayerIdentityViaPlayerController(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void FinishRestSequence();
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverPointOfInterestData(UPointOfInterestDataAsset* PointOfInterestData, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverPointOfInterest(UPointOfInterestComponent* PointOfInterest, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintPure)
    bool DiscoveredResourceName(FName ItemName) const;
    
    UFUNCTION(BlueprintPure)
    bool DiscoveredResource(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverColorTheme(TSubclassOf<UGlobalColorTheme> Theme, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ClearTeamReputation(FDataTableRowHandle TeamRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void ClearReputation(FGameplayTag FactionTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllReputations();
    
    UFUNCTION(BlueprintPure)
    bool CanUpgradeItemStack(FGameplayTag ItemStackTag, bool bIgnoreCost) const;
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedSignSet(FDataTableRowHandle SignSetDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddTeamReputation(FDataTableRowHandle TeamRowHandle, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddScience(int32 ScienceAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddResearchedResource(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void AddReputation(FGameplayTag FactionTag, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPersonalUpgradePoints(int32 Amount, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void AddPartyUpgadePoints(int32 Amount, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(BlueprintCallable)
    bool AddKnownRecipe(const FDataTableRowHandle& RecipeRowHandle, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked);
    
    UFUNCTION(BlueprintCallable)
    bool AddKnownCraftingRecipeByName(FName RecipeName, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked);
    
    UFUNCTION(BlueprintCallable)
    bool AddKnownCraftingRecipe(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked);
    
    UFUNCTION(BlueprintCallable)
    bool AddKnownBuildingRecipeByName(FName RecipeName, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked);
    
    UFUNCTION(BlueprintCallable)
    bool AddKnownBuildingRecipe(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AquirerPlayerState, bool bMulticastNewRecipeUnlocked);
    
    
    // Fix for true pure virtual functions not being implemented
};

