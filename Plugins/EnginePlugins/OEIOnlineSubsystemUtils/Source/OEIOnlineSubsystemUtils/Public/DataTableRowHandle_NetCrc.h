#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableRowHandle_NetCrc.generated.h"

USTRUCT(BlueprintType)
struct OEIONLINESUBSYSTEMUTILS_API FDataTableRowHandle_NetCrc : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DataTableRowHandle;
    
    FDataTableRowHandle_NetCrc();
};

