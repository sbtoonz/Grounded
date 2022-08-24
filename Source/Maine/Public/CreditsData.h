#pragma once
#include "CoreMinimal.h"
#include "CreditsGroup.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "CreditsData.generated.h"

class UCreditsFormattingData;

UCLASS(Blueprintable)
class MAINE_API UCreditsData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsGroup> CreditGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSlateBrush> CreditsBrushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StringTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreditsFormattingData* CreditsFormattingData;
    
public:
    UCreditsData();
};

