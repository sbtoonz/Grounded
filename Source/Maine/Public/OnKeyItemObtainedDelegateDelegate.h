#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnKeyItemObtainedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKeyItemObtainedDelegate, FDataTableRowHandle, KeyItemRowHandle, ASurvivalPlayerState*, AcquirerPlayerState, const TArray<FDataTableRowHandle>&, RecipesLearned);

