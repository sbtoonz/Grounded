#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GlobalVariableReferenceConditional.h"
#include "FoliageRespawnRules.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct MAINE_API FFoliageRespawnRules {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleDefaultsOnly)
    FGuid UniqueId;
    
    UPROPERTY(EditDefaultsOnly)
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UStaticMesh*> StaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 RespawnOnlyOnRest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 RespawnWhenRemoved: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 IgnorePlayerDistanceCheckOnRest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinimumInGameHoursGoneRequired;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinimumDistanceAwayFromPlayersRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGlobalVariableReferenceConditional GlobalVariableCondition;
    
    FFoliageRespawnRules();
};

