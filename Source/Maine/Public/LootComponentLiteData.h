#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "LootData.h"
#include "LootComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API ULootComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootData> LootData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyBody;
    
    ULootComponentLiteData();
};

