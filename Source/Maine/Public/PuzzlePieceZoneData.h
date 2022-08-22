#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EPuzzlePieceZone.h"
#include "PuzzlePieceZoneData.generated.h"

USTRUCT(BlueprintType)
struct FPuzzlePieceZoneData : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPuzzlePieceZone Zone;
    
public:
    MAINE_API FPuzzlePieceZoneData();
};

