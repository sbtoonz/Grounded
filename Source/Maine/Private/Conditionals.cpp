#include "Conditionals.h"

bool UConditionals::TechChipAvailableForSpeaker() {
    return false;
}

bool UConditionals::SuperTechChipsTurnedIn(EComparisonOperator Operator, int32 Count) {
    return false;
}

bool UConditionals::SuperTechChipsAvailableForTurnIn(EComparisonOperator Operator, int32 Count) {
    return false;
}

bool UConditionals::RegularTechChipsTurnedIn(EComparisonOperator Operator, int32 Count) {
    return false;
}

bool UConditionals::RegularTechChipsAvailableForTurnIn(EComparisonOperator Operator, int32 Count) {
    return false;
}

bool UConditionals::NumInGameDaysPast(EComparisonOperator Operator, int32 Count) {
    return false;
}

bool UConditionals::IsTimeOfDay(ETimeOfDay Time) {
    return false;
}

bool UConditionals::IsPartySize(EComparisonOperator Operator, int32 Size) {
    return false;
}

bool UConditionals::IsOwnerTheSpeaker() {
    return false;
}

bool UConditionals::IsLastSuperChipTurnedIn(ESuperChipId ChipId) {
    return false;
}

bool UConditionals::IsInSpeakingRange(const FGuid& CharacterA, EPlayerCharacterIdentity CharacterB) {
    return false;
}

bool UConditionals::IsInParty(EPlayerCharacterIdentity Character) {
    return false;
}

bool UConditionals::IsInConversation(EPlayerCharacterIdentity Character) {
    return false;
}

bool UConditionals::IsInCombat() {
    return false;
}

bool UConditionals::IsBuildDevBranch() {
    return false;
}

bool UConditionals::IsAnyPartyMemberInSpeakingRange(const FGuid& Character) {
    return false;
}

bool UConditionals::HasPartyOrPersonalUpgradeBeenCollected() {
    return false;
}

bool UConditionals::HasPartyDiscoveredRockCandy() {
    return false;
}

UConditionals::UConditionals() {
}

