#pragma once
#include "CoreMinimal.h"
#include "SpawnedItemLiteData.h"
#include "ArmorItemLiteData.generated.h"

class UBaseAppearanceData;

UCLASS()
class MAINE_API UArmorItemLiteData : public USpawnedItemLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UBaseAppearanceData* HeadAppearance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UBaseAppearanceData* ChestAppearance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UBaseAppearanceData* ArmsAppearance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UBaseAppearanceData* LegsAppearance;
    
    UArmorItemLiteData();
};

