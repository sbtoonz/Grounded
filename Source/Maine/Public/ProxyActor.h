#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProxyActor.generated.h"

class UBaseLODActor;

UCLASS(Blueprintable)
class MAINE_API UProxyActor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseLODActor* LODActor;
    
    UProxyActor();
};

