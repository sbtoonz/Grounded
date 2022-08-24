#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ObjectiveInterfaceWidget.generated.h"

class UBaseQuest;
class UImage;
class UQuestManagerComponent;
class ASurvivalPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UObjectiveInterfaceWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* BigPin;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UBaseQuest> SelectedQuest;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UQuestManagerComponent> QuestManager;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ASurvivalPlayerState> PlayerState;
    
public:
    UObjectiveInterfaceWidget();
};

