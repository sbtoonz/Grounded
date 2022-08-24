#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlineFindSessionsCallbackProxy.generated.h"

class UOnlineFindSessionsCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate onFailure;
    
    UOnlineFindSessionsCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineFindSessionsCallbackProxy* OnlineFindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, const FString& SpecificHostId, const FString& SessionTypes);
    
};

