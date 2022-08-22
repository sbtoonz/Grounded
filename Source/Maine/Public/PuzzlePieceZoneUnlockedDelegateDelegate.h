#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PuzzlePieceZoneUnlockedDelegateDelegate.generated.h"

class ASurvivalPlayerState;
class UMapComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPuzzlePieceZoneUnlockedDelegate, UMapComponent*, Sender, ASurvivalPlayerState*, Unlocker, const FDataTableRowHandle&, UnlockedPuzzlePieceZone);

