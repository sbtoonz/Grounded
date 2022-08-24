#pragma once
#include "CoreMinimal.h"
#include "PhobiaSettingData.h"
#include "PhobiaMeshData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPhobiaMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhobiaSettingData> Settings;
    
    FPhobiaMeshData();
};

