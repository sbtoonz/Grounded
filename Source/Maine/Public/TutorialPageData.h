#pragma once
#include "CoreMinimal.h"
#include "TutorialControlIdentifier.h"
#include "LocString.h"
#include "TutorialPageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FTutorialPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TutorialIconSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString TutorialTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString TutorialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString TutorialDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialControlIdentifier> TutorialControls;
    
    FTutorialPageData();
};

