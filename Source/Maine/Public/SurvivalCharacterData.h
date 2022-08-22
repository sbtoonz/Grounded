#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SurvivalCharacterData.generated.h"

class UObject;
class ASurvivalCharacter;

USTRUCT(BlueprintType)
struct FSurvivalCharacterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString CharacterName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer CharacterTags;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bTameable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> TamingFood;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> PetPersonalities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> ActivePetPassiveEffects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle BestiaryItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASurvivalCharacter> DebugSpawnActor;
    
    MAINE_API FSurvivalCharacterData();
};

