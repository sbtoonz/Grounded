#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GoapActionCacheData.generated.h"

class UGoapActionGetItem;
class UGoapActionDumpItem;
class UGoapActionDropItem;
class UGoapActionConsumeItem;
class UGoapActionBuild;

UCLASS(Blueprintable)
class MAINE_API UGoapActionCacheData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionGetItem* GetItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionDumpItem* DumpItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionDropItem* DropItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionConsumeItem* ConsumeItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionBuild* BuildAction;
    
    UGoapActionCacheData();
};

