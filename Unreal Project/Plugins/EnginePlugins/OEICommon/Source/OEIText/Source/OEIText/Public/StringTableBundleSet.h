#pragma once
#include "CoreMinimal.h"
#include "OEIStringTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StringTableBundleSet.generated.h"

UCLASS()
class OEITEXT_API UStringTableBundleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FOEIStringTable> StringTables;
    
private:
    UPROPERTY()
    int32 Hash;
    
public:
    UStringTableBundleSet();
};

