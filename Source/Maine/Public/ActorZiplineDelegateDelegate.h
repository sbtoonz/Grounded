#pragma once
#include "CoreMinimal.h"
#include "ActorZiplineDelegateDelegate.generated.h"

class AZiplineLine;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorZiplineDelegate, AZiplineLine*, Sender, AActor*, Actor);

