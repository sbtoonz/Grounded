#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnItemStacksChangedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "OnNewRecipeKnownDelegateDelegate.h"
#include "PersistentInterface.h"
#include "RestDelegateDelegate.h"
#include "LocString.h"
#include "OnTechTreeUnlockedDelegateDelegate.h"
#include "StatusEffectOrigin.h"
#include "RestStatusDelegateDelegate.h"
#include "OnKeyItemObtainedDelegateDelegate.h"
#include "RecipeKnowledge.h"
#include "OnBestiaryItemObtainedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnNewResourceKnownDelegateDelegate.h"
#include "OnResourceResaerchedDelegateDelegate.h"
#include "OnUpgradePointsAquiredDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "PartyUpgradePointsChangedDelegateDelegate.h"
#include "OnNewRecipesKnownDelegateDelegate.h"
#include "TechChipRedeemedDelegateDelegate.h"
#include "OnTechUnlockDataUnlockedDelegateDelegate.h"
#include "OnTechTreeNodeSpendDelegateDelegate.h"
#include "PointOfInterestPlayerDelegateDelegate.h"
#include "ColorThemePlayerDelegateDelegate.h"
#include "OnRecipeChangedDelegateDelegate.h"
#include "OnItemKnowledgeChangedDelegateDelegate.h"
#include "OnItemStackUpgradeChangedDelegateDelegate.h"
#include "OnScienceChangedDelegate.h"
#include "OnResearchPointsChangedDelegate.h"
#include "OnRecipeCraftedDelegateDelegate.h"
#include "OnItemCraftedDelegateDelegate.h"
#include "OnCozinessLevelAchievedDelegateDelegate.h"
#include "OnCreatureKilledDelegateDelegate.h"
#include "OnPlayerIdentitiesChangedDelegate.h"
#include "ReputationNotificationData.h"
#include "ItemKnowledge.h"
#include "TechUnlockData.h"
#include "DataTableRowHandle_NetCrc.h"
#include "GameplayTagContainer.h"
#include "ERecipeUnlockSource.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ItemStackUpgrade.h"
#include "EPlayerCharacterIdentity.h"
#include "RecipeRequirements.h"
#include "ETechChipQuery.h"
#include "PartyComponent.generated.h"

class ASurvivalCharacter;
class APlayerController;
class UInventoryComponent;
class URestMovieDataAsset;
class UItem;
class ULevelSequencePlayer;
class ASurvivalPlayerController;
class APlayerState;
class ABuilding;
class ASurvivalPlayerCharacter;
class UCutsceneDataAsset;
class UPointOfInterestDataAsset;
class UGlobalColorTheme;
class ASurvivalPlayerState;
class UPointOfInterestComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPartyComponent : public UActorComponent, public IPersistentInterface, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestDelegate OnGameRest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestDelegate OnGameRestMulticast;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestStatusDelegate OnPartyRestStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyItemObtainedDelegate OnKeyItemObtainedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBestiaryItemObtainedDelegate OnBestiaryItemObtainedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewResourceKnownDelegate OnNewResourceKnownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceResaerchedDelegate OnResourceResearchedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpgradePointsAquiredDelegate OnUpgradePointsAquiredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyUpgradePointsChangedDelegate OnPartyUpgradePointsSpent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewRecipeKnownDelegate OnNewRecipeKnownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewRecipesKnownDelegate OnNewRecipesKnownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeUnlockedDelegate OnTechTreeUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTechChipRedeemedDelegate OnTechChipRedeemed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechUnlockDataUnlockedDelegate OnTechUnlockDataUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeNodeSpendDelegate OnTechTreeNodeSpendDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestPlayerDelegate OnPointOfInterestDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorThemePlayerDelegate OnColorThemeDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecipeChangedDelegate OnRecipeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemKnowledgeChangedDelegate OnItemKnowledgeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemStacksChangedDelegate OnItemStacksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemStackUpgradeChangedDelegate OnItemStackUpgradeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScienceChanged OnScienceFoundChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResearchPointsChanged OnResearchPointsChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecipeCraftedDelegate OnRecipeCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemCraftedDelegate OnItemCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCozinessLevelAchievedDelegate OnCozinessLevelAchieved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatureKilledDelegate OnCreatureKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerIdentitiesChanged OnPlayerIdentitiesChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseAlternateRecipeMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultRestDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumDayToAccrueReputation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeakingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddCraftingIngredientsAsKnownResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASurvivalPlayerCharacter*> PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RestingPartyMembers, meta=(AllowPrivateAccess=true))
    TArray<ASurvivalPlayerCharacter*> RestingPartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCutsceneDataAsset* RestCustscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCutsceneDataAsset* TimelapseRestCustscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URestMovieDataAsset*> RestMovies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float LastRestTime;
    
    UPROPERTY(EditAnywhere)
    uint32 RestCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* ActiveRestSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ScienceFound, meta=(AllowPrivateAccess=true))
    int32 ScienceFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResearchPointsAdded, meta=(AllowPrivateAccess=true))
    int32 ResearchPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PartyUpgradePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PersonalUpgradePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> OwnedKeyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_KnownRecipesChanged, meta=(AllowPrivateAccess=true))
    TArray<FRecipeKnowledge> KnownCraftingRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_KnownRecipesChanged, meta=(AllowPrivateAccess=true))
    TArray<FRecipeKnowledge> KnownBuildingRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemKnowledge, meta=(AllowPrivateAccess=true))
    TArray<FItemKnowledge> AllItemKnowledge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TechUnlockDatas, meta=(AllowPrivateAccess=true))
    TArray<FTechUnlockData> TechUnlockDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle_NetCrc> UnlockedTechTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPointOfInterestDataAsset*> DiscoveredPointsOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGlobalColorTheme>> DiscoveredColorThemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle_NetCrc> UnlockedSignSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> PartyStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> DefaultTechTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedTransmitterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AssignedPlayerIdentities, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayerIdentities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AssignedPlayerIdentities, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> RandomPlayerIdentities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemStackUpgrades, meta=(AllowPrivateAccess=true))
    TArray<FItemStackUpgrade> ItemStackUpgrades;
    
public:
    UPartyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    UFUNCTION(BlueprintCallable)
    void RecipeCraftedCallback(UInventoryComponent* Sender, FDataTableRowHandle RecipeRow);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayRestMovie();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TechUnlockDatas();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScienceFound(int32 PreviousScienceFound);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestingPartyMembers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResearchPointsAdded(int32 PreviousAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_KnownRecipesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemStackUpgrades();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemKnowledge();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssignedPlayerIdentities();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyCreatureKillCredit(ASurvivalCharacter* Creature, ASurvivalPlayerState* Killer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpgradePointsAdded(bool IsPartyUpgradePoints, int32 Amount, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTechUnlockDataUnlocked(FDataTableRowHandle TechUnlockDataRowHandle, ASurvivalPlayerState* UnlockerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTechTreeUnlocked(FDataTableRowHandle TechTreeRowHandle, ASurvivalPlayerState* UnlockerPlayerState);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetRestMovie(int32 RestMovieIndex);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPointOfInterestDiscovered(UPointOfInterestDataAsset* ColorTheme, ASurvivalPlayerState* UnlockerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyResourceResearched(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastNotifyReputationThresholdPassed(FGameplayTag FactionTag, const FReputationNotificationData& ReputationNotificationData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyNewResourceKnown(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyNewRecipesKnownCoziness(const TArray<FDataTableRowHandle>& RecipeRowHandles, ASurvivalPlayerState* AcquirerPlayerState, int32 CozinessLevel);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyNewRecipesKnown(const TArray<FDataTableRowHandle>& RecipeRowHandles, ASurvivalPlayerState* AcquirerPlayerState, ERecipeUnlockSource RecipeUnlockSource, FLocString DisplayName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyNewRecipeKnown(FDataTableRowHandle RecipeRowHandle, ASurvivalPlayerState* AcquirerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyKeyItemCollected(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyBestiaryItemCollected(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastItemStackUpgradeChanged(FGameplayTag ItemStackTag, ASurvivalPlayerState* AquirerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastColorThemeDiscovered(TSubclassOf<UGlobalColorTheme> PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBroadcastOnGameRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsResourceName(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsResource(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsRecipeForIngredient(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsOtherRecipeThatContainsIngredientRecipe(FDataTableRowHandle RecipeRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsOtherRecipeThatContainsIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsOfRecipeIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsCraftingRecipeInCategory(FGameplayTag Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsCraftingRecipeForIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsCraftingRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsBuildingRecipeInCategory(FGameplayTag Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsBuildingRecipeForIngredient(FDataTableRowHandle IngredientRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool KnowsBuildingRecipe(FDataTableRowHandle RecipeRowHandle, bool bIncludeHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTechTreeRecipeUnlocked(FDataTableRowHandle TechTreeRecipeRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestOnCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPartyMemberInRange(FVector Location, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUninspectedResource(ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUninspectedCraftingRecipe(FGameplayTag Category, ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUninspectedBuildingRecipe(FGameplayTag Category, ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResearchedResourceName(FName ItemRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResearchedResource(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyItemSubcategory(FGameplayTag KeyItemCategory, FGameplayTag KeyItemSubCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyItemCategory(FGameplayTag KeyItemCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyItem(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle_NetCrc> GetUnlockedTechTrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle_NetCrc> GetUnlockedSignSets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPointOfInterestDataAsset*> GetUnlockedPOIs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGlobalColorTheme>> GetUnlockedColorThemes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPersonalUpgradePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPartyUpgradePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetTechTreeKeyItem(bool bCheckUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamReputation(FDataTableRowHandle TeamRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScienceFound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRestCooldownRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResearchPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResearchLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReputation(FGameplayTag FactionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingPartyUpgradePoints() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FDataTableRowHandle> GetRecipesUnlockedForResearchLevel(int32 ResearchLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetRecipeForItems(const TArray<FDataTableRowHandle>& Items, FGameplayTag CraftingBuildingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetRecipeForIngredients(const TArray<FRecipeRequirements>& Requirements, FGameplayTag CraftingBuildingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressTowardsNextResearchLevel(int32 Points) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointsSpentOnTechUnlock(FDataTableRowHandle TechUnlockRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointsRequiredForResearchLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointsRequiredForNextResearchLevel(int32 Points) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalPlayerState* GetPlayerStateMatchingIdentity(EPlayerCharacterIdentity Identity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerCharacterIdentity GetPlayerIdentityViaPlayerState(const ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerCharacterIdentity GetPlayerIdentityViaController(const APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerCharacterIdentity GetPlayerIdentity(const FUniqueNetIdRepl& UniqueId) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASurvivalPlayerCharacter*> GetPartyMembers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumTechTreeUnlocksPurchased();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTechDatasUnlockedForTreeRowHandle(FDataTableRowHandle TechTreeRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumResearchedResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPartyMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKeyTechTreeKeyItemsWithKeyItemTag(FGameplayTag KeyItemSubCategory, ETechChipQuery TechChipQuery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeakingRangeSq() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeakingRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastRestTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetKnownResources(FGameplayTag ItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetKeyItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemStackUpgradeTier(FGameplayTag ItemStackTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemStackUpgradeCost(FGameplayTag ItemStackTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemStackUpgradeBonus(FGameplayTag ItemStackTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemResearchPoints(FGameplayTag RarityTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetHighestReputation() const;
    
    UFUNCTION(BlueprintCallable)
    ASurvivalPlayerCharacter* GetFirstPartyMemberByIdentity(EPlayerCharacterIdentity Identity);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABuilding*> GetEssentialBuildings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentResearchLevelForPointTotal(int32 Points) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetCraftingRecipesWithIngredient(FDataTableRowHandle IngredientRowHandle, bool OnlyIncludeKnownRecipes);
    
    UFUNCTION(BlueprintCallable)
    ASurvivalPlayerCharacter* GetClosestPlayer(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestPartyMemberDistanceSquared(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetBuildingRecipesWithIngredient(FDataTableRowHandle IngredientRowHandle, bool OnlyIncludeKnownRecipes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusScienceForResearchLevel(int32 ResearchLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void FreePlayerIdentityViaPlayerController(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void FinishRestSequence();
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverPointOfInterestData(UPointOfInterestDataAsset* PointOfInterestData, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverPointOfInterest(UPointOfInterestComponent* PointOfInterest, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiscoveredResourceName(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiscoveredResource(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverColorTheme(TSubclassOf<UGlobalColorTheme> Theme, ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ClearTeamReputation(FDataTableRowHandle TeamRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void ClearReputation(FGameplayTag FactionTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllReputations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

