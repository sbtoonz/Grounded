#pragma once
#include "CoreMinimal.h"
#include "ConditionalLibrary.h"
#include "EComparisonOperator.h"
#include "ETimeOfDay.h"
#include "ESuperChipId.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerCharacterIdentity.h"
#include "Conditionals.generated.h"

UCLASS(Blueprintable)
class MAINE_API UConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UConditionals();
    UFUNCTION(BlueprintCallable)
    static bool TechChipAvailableForSpeaker();
    
    UFUNCTION(BlueprintCallable)
    static bool SuperTechChipsTurnedIn(EComparisonOperator Operator, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static bool SuperTechChipsAvailableForTurnIn(EComparisonOperator Operator, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static bool RegularTechChipsTurnedIn(EComparisonOperator Operator, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static bool RegularTechChipsAvailableForTurnIn(EComparisonOperator Operator, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static bool NumInGameDaysPast(EComparisonOperator Operator, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTimeOfDay(ETimeOfDay Time);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPartySize(EComparisonOperator Operator, int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOwnerTheSpeaker();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLastSuperChipTurnedIn(ESuperChipId ChipId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInSpeakingRange(const FGuid& CharacterA, EPlayerCharacterIdentity CharacterB);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInParty(EPlayerCharacterIdentity Character);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInConversation(EPlayerCharacterIdentity Character);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInCombat();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBuildDevBranch();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyPartyMemberInSpeakingRange(const FGuid& Character);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPartyOrPersonalUpgradeBeenCollected();
    
    UFUNCTION(BlueprintCallable)
    static bool HasPartyDiscoveredRockCandy();
    
};

