#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "PowerTypeData.generated.h"

class AActor;
class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FPowerTypeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* SlotBacking;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FColor SlotBackingColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsConsumable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> ConsumableEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanDump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> DumpedActor;
    
    FPowerTypeData();
};

