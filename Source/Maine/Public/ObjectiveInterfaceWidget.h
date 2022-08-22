#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ObjectiveInterfaceWidget.generated.h"

class ASurvivalPlayerState;
class UImage;
class UBaseQuest;
class UQuestManagerComponent;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UObjectiveInterfaceWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BigPin;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UBaseQuest> SelectedQuest;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UQuestManagerComponent> QuestManager;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<ASurvivalPlayerState> PlayerState;
    
public:
    UObjectiveInterfaceWidget();
};

