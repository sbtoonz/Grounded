#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "TutorialPageData.h"
#include "TutorialControlIdentifier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ETutorialDisplayTime.h"
#include "ETutorialLogType.h"
#include "TutorialData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FTutorialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> TutorialIconSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTutorialControlIdentifier> TutorialControls;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString TutorialTitle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString TutorialText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString TutorialDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTutorialPageData> TutorialPages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETutorialDisplayTime TutorialDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETutorialLogType LogType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShowEvenWhenTutorialsDisabled;
    
    FTutorialData();
};

