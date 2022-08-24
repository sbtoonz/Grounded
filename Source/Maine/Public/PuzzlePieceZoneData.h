#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "EPuzzlePieceZone.h"
#include "PuzzlePieceZoneData.generated.h"

USTRUCT(BlueprintType)
struct FPuzzlePieceZoneData : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPuzzlePieceZone Zone;
    
public:
    MAINE_API FPuzzlePieceZoneData();
};

