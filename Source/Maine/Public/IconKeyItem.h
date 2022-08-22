#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "IconKeyItem.generated.h"

UCLASS(BlueprintType)
class MAINE_API UIconKeyItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsHeader;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle DisplayData;
    
    UIconKeyItem();
    UFUNCTION(BlueprintCallable)
    void SetIconKeyHeader(const FDataTableRowHandle CategoryRow);
    
    UFUNCTION(BlueprintCallable)
    void SetIconKeyData(const FDataTableRowHandle IconRow);
    
};

