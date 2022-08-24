#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NotificationLogBase.generated.h"

class UUINotificationBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UNotificationLogBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUINotificationBase*> TempNotifications;
    
    UNotificationLogBase();
};

