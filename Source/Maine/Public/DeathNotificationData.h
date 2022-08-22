#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "DeathNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FDeathNotificationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FLocString> DeathMessages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FLocString> IncapacitationMessages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Icon;
    
    FDeathNotificationData();
};

