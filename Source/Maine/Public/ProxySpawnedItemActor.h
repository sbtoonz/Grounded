#pragma once
#include "CoreMinimal.h"
#include "ProxyActor.h"
#include "ItemContainerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ProxySpawnedItemActor.generated.h"

class UBaseLODActor;
class UItem;

UCLASS()
class MAINE_API UProxySpawnedItemActor : public UProxyActor, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    UItem* Item;
    
    UPROPERTY()
    TWeakObjectPtr<UBaseLODActor> DroppedBy;
    
    UPROPERTY()
    FGameplayTag GoapRegionTag;
    
    UProxySpawnedItemActor();
    
    // Fix for true pure virtual functions not being implemented
};

