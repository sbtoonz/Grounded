#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "TeamData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTeamData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ETeamAttitude::Type> DefaultRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> FriendlyTeams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> NeutralTeams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> HostileTeams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> FleeTeams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAlwaysFlee;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ReputationOnDeath;
    
    FTeamData();
};

