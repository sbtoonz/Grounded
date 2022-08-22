#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "AttackAmmoData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ThrowData.h"
#include "EItemType.h"
#include "AttackComboData.h"
#include "GlidingData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EHUDMarkerType.h"
#include "GameplayTagChange.h"
#include "EquippedActorOption.h"
#include "ArmorAttachData.h"
#include "HaulingData.h"
#include "EquippableData.h"
#include "EEquipmentSlot.h"
#include "ESocketName.h"
#include "EChatterConsumableType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ChatterEventReference -FallbackName=ChatterEventReference
#include "EInteractAnimType.h"
#include "EGardenModifierType.h"
#include "ItemProcessingStateChange.h"
#include "SpoilData.h"
#include "ItemPowerData.h"
#include "InspectData.h"
#include "BaseItemData.generated.h"

class USoundBase;
class USoundCue;
class UMaterialInterface;
class UObject;
class ASpawnedItem;
class UStaticMesh;
class UGoapActionConsumeItem;
class UAnimMontage;
class UBaseAnimEffect;
class UCharacterAudioData;
class UHatchingDataAsset;

USTRUCT(BlueprintType)
struct FBaseItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedWildcardDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FLocString> SearchableKeywords;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* ModIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EItemType ItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag RarityTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag StackSizeTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag KeyItemCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag KeyItemSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle BestiaryData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGlobalVariableReference OnKeyItemPickupVariable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OnKeyItemPickupVariableValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGlobalVariableReference OnKeyItemTurnedInVariable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OnKeyItemTurnedInVariableValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 KeyItemDateDay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 KeyItemDateMonth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 KeyItemDateYear;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> UnlockRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> ResearchUnlockRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> NewResearchUnlockRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> TechTreeUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASpawnedItem> WorldActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> DynamicMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Tier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bWorldMarker: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanEnhance: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer ValidEnhancementTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGameplayTagChange> EnhancementTagUpdates;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHotDroppable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bTrashable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsFlammable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bWasCut: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDecomposeOnLoad: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASpawnedItem> PlayerEquippedActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEquippedActorOption> CustomEquippedActors;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FArmorAttachData ArmorAttachData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FArmorAttachData FirstPersonArmorAttachData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEquippableData EquippableData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EEquipmentSlot Slot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool TwoHanded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Stance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESocketName OverrideEquipSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EHUDMarkerType MarkerType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MarkerVariation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsLightSource;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanBlock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlockDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlockStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlockStaminaRegenMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* BlockAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBaseAnimEffect* BlockedEffectAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USoundBase> BlockSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USoundBase> PerfectBlockSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAttackComboData AttackComboData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAttackComboData AlternateAttackComboData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAttackComboData SwimmingAttackComboData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FAttackAmmoData> AmmoAttackData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> ConsumableData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EChatterConsumableType ConsumeChatterType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FChatterEventReference ConsumeChatterEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ConsumeAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInteractAnimType ConsumeAnimType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bBurgleQuestCanAnalyze: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BurgleQuestAnalyzeRewardLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGoapActionConsumeItem* OverrideTemplateConsumeAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FHaulingData HaulingData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FItemProcessingStateChange> ProcessingOptions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASpawnedItem> ProcessingActorOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HatchTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHatchingDataAsset* HatchData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGardenModifierType GardenModifierType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GardenModifierValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSpoilData SpoilData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FThrowData ThrowData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FItemPowerData PowerData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FInspectData InspectData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGlidingData GlidingData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanZipUp: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer ResourceCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag TelemetryTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WaveSpawnWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* PickupAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UCharacterAudioData> AudioData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInteractAnimType InteractAnimType;
    
    MAINE_API FBaseItemData();
};

