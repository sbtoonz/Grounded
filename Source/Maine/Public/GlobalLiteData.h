#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GlobalLiteData.generated.h"

class UActorLiteData;
class AActor;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalLiteData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FName, UActorLiteData*> AllLiteData;
    
    UGlobalLiteData();
    UFUNCTION(BlueprintPure)
    UActorLiteData* GetLiteDataFor(TSoftClassPtr<AActor> Actor) const;
    
};

