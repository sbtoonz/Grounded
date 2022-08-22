#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CreditsGroup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CreditsData.generated.h"

class UCreditsFormattingData;

UCLASS()
class MAINE_API UCreditsData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FCreditsGroup> CreditGroups;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FSlateBrush> CreditsBrushes;
    
    UPROPERTY(EditAnywhere)
    FName StringTableName;
    
    UPROPERTY(EditAnywhere)
    UCreditsFormattingData* CreditsFormattingData;
    
public:
    UCreditsData();
};

