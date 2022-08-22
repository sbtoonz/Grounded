#pragma once
#include "CoreMinimal.h"
#include "PhobiaSettingData.h"
#include "PhobiaMeshData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPhobiaMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPhobiaSettingData> Settings;
    
    FPhobiaMeshData();
};

