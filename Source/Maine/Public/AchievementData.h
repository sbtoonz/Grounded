#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EAchievementStat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "AchievementData.generated.h"

class UPlayerStatConfig;

USTRUCT(BlueprintType)
struct MAINE_API FAchievementData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString AchievementUnlockTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPlayerStatConfig* PlayerStat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTotalPartyPlayerStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAchievementStat AchievementStat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EComparisonOperator ComparisonOperator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ConditionalValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHostMustBePresentAtValueChange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bClientMustBePresentAtValueChange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanUnlockInCreativeMode;
    
    FAchievementData();
};

