#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableRowHandle_NetCrc.generated.h"

USTRUCT(BlueprintType)
struct OEIONLINESUBSYSTEMUTILS_API FDataTableRowHandle_NetCrc : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FDataTableRowHandle DataTableRowHandle;
    
    FDataTableRowHandle_NetCrc();
};

