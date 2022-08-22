#pragma once
#include "CoreMinimal.h"
#include "ClassToRestore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
#include "CustomLoadRestoreSettings.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FCustomLoadRestoreSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bResetAllActorClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FClassToRestore> ExceptionClassesToRestore;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetPlayerSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetPointsOfInterest;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetSuperChips;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetRegularChips;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetUpgradeCollectables;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetColorCollectables;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetReputations;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetPerks;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetScience;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetFoliage;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetQuests;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetTutorialQuests;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetConversations;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetBestiary;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetHarvestNodes;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetCreatures;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetTechTreesUnlocked;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetTechTreePurchasesUnlocked;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetHourToStartingHour;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetKeyItems;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> ExceptionKeyItemsToRestore;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGlobalVariableReference> ExceptionGlobalsToRestore;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGlobalVariableReference, int32> GlobalValuesToSetOnLoad;
    
    FCustomLoadRestoreSettings();
};

