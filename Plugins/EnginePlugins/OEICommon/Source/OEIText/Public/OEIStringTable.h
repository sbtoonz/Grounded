#pragma once
#include "CoreMinimal.h"
#include "IDSet.h"
#include "OEIStringEntry.h"
#include "OEIStringTable.generated.h"

USTRUCT(BlueprintType)
struct FOEIStringTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> StringsWithTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIDSet> StringsWithFemaleVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIDSet> StringsWithGenderNeutralVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOEIStringEntry> Entries;
    
public:
    OEITEXT_API FOEIStringTable();
};

