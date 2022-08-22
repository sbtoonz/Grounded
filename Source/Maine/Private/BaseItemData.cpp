#include "BaseItemData.h"

FBaseItemData::FBaseItemData() {
    this->Icon = NULL;
    this->ModIcon = NULL;
    this->ItemType = EItemType::General;
    this->OnKeyItemPickupVariableValue = 0;
    this->OnKeyItemTurnedInVariableValue = 0;
    this->KeyItemDateDay = 0;
    this->KeyItemDateMonth = 0;
    this->KeyItemDateYear = 0;
    this->Tier = 0;
    this->bWorldMarker = false;
    this->bCanEnhance = false;
    this->bHotDroppable = false;
    this->bTrashable = false;
    this->bIsFlammable = false;
    this->bWasCut = false;
    this->bDecomposeOnLoad = false;
    this->Slot = EEquipmentSlot::None;
    this->TwoHanded = false;
    this->Stance = 0;
    this->OverrideEquipSocket = ESocketName::None;
    this->MarkerType = EHUDMarkerType::None;
    this->MarkerVariation = 0;
    this->bIsLightSource = false;
    this->bCanBlock = false;
    this->BlockDamageMultiplier = 0.00f;
    this->BlockStaminaCost = 0.00f;
    this->BlockStaminaRegenMultiplier = 0.00f;
    this->BlockAnim = NULL;
    this->BlockedEffectAnim = NULL;
    this->ConsumeChatterType = EChatterConsumableType::None;
    this->ConsumeAudio = NULL;
    this->ConsumeAnimType = EInteractAnimType::None;
    this->bBurgleQuestCanAnalyze = false;
    this->BurgleQuestAnalyzeRewardLevel = 0;
    this->OverrideTemplateConsumeAction = NULL;
    this->HatchTime = 0.00f;
    this->HatchData = NULL;
    this->GardenModifierType = EGardenModifierType::None;
    this->GardenModifierValue = 0.00f;
    this->bCanZipUp = false;
    this->WaveSpawnWeight = 0;
    this->PickupAudio = NULL;
    this->InteractAnimType = EInteractAnimType::None;
}

