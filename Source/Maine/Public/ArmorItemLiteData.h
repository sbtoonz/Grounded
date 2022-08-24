#pragma once
#include "CoreMinimal.h"
#include "SpawnedItemLiteData.h"
#include "ArmorItemLiteData.generated.h"

class UBaseAppearanceData;

UCLASS(Blueprintable)
class MAINE_API UArmorItemLiteData : public USpawnedItemLiteData {
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
    
    UArmorItemLiteData();
};

