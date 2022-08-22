#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "TutorialControlIdentifier.h"
#include "TutorialPageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FTutorialPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> TutorialIconSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString TutorialTitle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString TutorialText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString TutorialDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTutorialControlIdentifier> TutorialControls;
    
    FTutorialPageData();
};

