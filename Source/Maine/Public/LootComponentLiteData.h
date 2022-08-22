#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "LootData.h"
#include "LootComponentLiteData.generated.h"

UCLASS(BlueprintType)
class MAINE_API ULootComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FLootData> LootData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bDestroyBody;
    
    ULootComponentLiteData();
};

