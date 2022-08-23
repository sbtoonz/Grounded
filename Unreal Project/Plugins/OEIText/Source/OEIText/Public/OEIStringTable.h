#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=IDSet -FallbackName=IDSet
#include "IDSet.h"
#include "OEIStringEntry.h"
#include "OEIStringTable.generated.h"

USTRUCT(BlueprintType)
struct FOEIStringTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TSet<int32> StringsWithTokens;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FIDSet> StringsWithFemaleVO;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FIDSet> StringsWithGenderNeutralVO;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FOEIStringEntry> Entries;
    
public:
    OEITEXT_API FOEIStringTable();
};

