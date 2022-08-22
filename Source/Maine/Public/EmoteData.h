#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ChatterEventReference -FallbackName=ChatterEventReference
#include "EmoteData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FEmoteData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EmoteTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString EmoteName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* EmoteIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FChatterEventReference ChatterEvent;
    
    FEmoteData();
};

