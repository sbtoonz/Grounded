#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChatterManager.generated.h"

class UChatterBundleSet;

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UChatterManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UChatterBundleSet*> OverrideBundleSets;
    
public:
    UChatterManager();
};

