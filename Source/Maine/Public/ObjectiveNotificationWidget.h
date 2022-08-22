#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ObjectiveNotificationWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UObjectiveNotificationWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool bIsPlayingNotification;
    
public:
    UObjectiveNotificationWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessQueuedQuestNotification();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasQueuedQuestNotifications() const;
    
};

