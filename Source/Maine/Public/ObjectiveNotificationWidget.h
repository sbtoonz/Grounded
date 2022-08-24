#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ObjectiveNotificationWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UObjectiveNotificationWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingNotification;
    
public:
    UObjectiveNotificationWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessQueuedQuestNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasQueuedQuestNotifications() const;
    
};

