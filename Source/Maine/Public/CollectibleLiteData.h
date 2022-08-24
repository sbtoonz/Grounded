#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "LocString.h"
#include "CollectibleLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UCollectibleLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UCollectibleLiteData();
};

