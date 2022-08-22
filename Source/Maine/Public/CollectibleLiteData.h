#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ActorLiteData.h"
#include "CollectibleLiteData.generated.h"

UCLASS()
class MAINE_API UCollectibleLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLocString DisplayName;
    
    UCollectibleLiteData();
};

