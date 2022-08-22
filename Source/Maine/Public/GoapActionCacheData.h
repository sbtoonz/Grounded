#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GoapActionCacheData.generated.h"

class UGoapActionConsumeItem;
class UGoapActionGetItem;
class UGoapActionDumpItem;
class UGoapActionDropItem;
class UGoapActionBuild;

UCLASS()
class MAINE_API UGoapActionCacheData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGoapActionGetItem* GetItemTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UGoapActionDumpItem* DumpItemTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UGoapActionDropItem* DropItemTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UGoapActionConsumeItem* ConsumeItemTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UGoapActionBuild* BuildAction;
    
    UGoapActionCacheData();
};

