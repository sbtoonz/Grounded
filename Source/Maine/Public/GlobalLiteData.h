#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalLiteData.generated.h"

class UActorLiteData;
class AActor;

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalLiteData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UActorLiteData*> AllLiteData;
    
    UGlobalLiteData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorLiteData* GetLiteDataFor(TSoftClassPtr<AActor> Actor) const;
    
};

