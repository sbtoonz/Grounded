#pragma once
#include "CoreMinimal.h"
#include "SpawnedItem.h"
#include "ArmorItem.generated.h"

class UBaseAppearanceData;

UCLASS(Blueprintable)
class MAINE_API AArmorItem : public ASpawnedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAppearanceData* HeadAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAppearanceData* ChestAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAppearanceData* ArmsAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAppearanceData* LegsAppearance;
    
    AArmorItem();
};

