#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "IconKeyItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UIconKeyItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DisplayData;
    
    UIconKeyItem();
    UFUNCTION(BlueprintCallable)
    void SetIconKeyHeader(const FDataTableRowHandle CategoryRow);
    
    UFUNCTION(BlueprintCallable)
    void SetIconKeyData(const FDataTableRowHandle IconRow);
    
};

