#pragma once
#include "CoreMinimal.h"
#include "OnMovieEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovieEnd, bool, bWasSkipped);

