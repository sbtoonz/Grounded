#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OEIStringTable.h"
#include "StringTableBundleSet.generated.h"

UCLASS(Blueprintable)
class OEITEXT_API UStringTableBundleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FOEIStringTable> StringTables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
public:
    UStringTableBundleSet();
};

