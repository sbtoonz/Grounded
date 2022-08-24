#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SharedSaveAPIConfig.generated.h"

UCLASS(Blueprintable, Config=Game)
class USharedSaveAPIConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SharedSaveUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XstsEndpointUrl;
    
public:
    USharedSaveAPIConfig();
};

