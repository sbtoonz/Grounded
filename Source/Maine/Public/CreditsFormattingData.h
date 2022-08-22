#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CreditsFormattingData.generated.h"

class UBaseCreditsTextWidget;

UCLASS()
class MAINE_API UCreditsFormattingData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UBaseCreditsTextWidget>> TextHeaderLevels;
    
    UPROPERTY(EditAnywhere)
    int32 ImageSpacing;
    
    UPROPERTY(EditAnywhere)
    int32 InitialSpacing;
    
    UPROPERTY(EditAnywhere)
    int32 PostSpacing;
    
public:
    UCreditsFormattingData();
};

