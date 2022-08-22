#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ContextEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FContextEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* DisplayImage;
    
    UPROPERTY(EditAnywhere)
    FLocString DisplayString;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionTag;
    
    MAINE_API FContextEntry();
};

