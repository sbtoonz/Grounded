#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "NotificationLogBase.generated.h"

class UUINotificationBase;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UNotificationLogBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UUINotificationBase*> TempNotifications;
    
    UNotificationLogBase();
};

