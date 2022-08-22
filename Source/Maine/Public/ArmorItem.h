#pragma once
#include "CoreMinimal.h"
#include "SpawnedItem.h"
#include "ArmorItem.generated.h"

class UBaseAppearanceData;

UCLASS()
class MAINE_API AArmorItem : public ASpawnedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseAppearanceData* HeadAppearance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseAppearanceData* ChestAppearance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseAppearanceData* ArmsAppearance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseAppearanceData* LegsAppearance;
    
    AArmorItem();
};

