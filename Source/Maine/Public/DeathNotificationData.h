#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "DeathNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FDeathNotificationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocString> DeathMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocString> IncapacitationMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FDeathNotificationData();
};

