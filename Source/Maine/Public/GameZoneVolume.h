#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Volume.h"
#include "GameZoneVolume.generated.h"

UCLASS(Blueprintable)
class MAINE_API AGameZoneVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoneData;
    
public:
    AGameZoneVolume();
};

