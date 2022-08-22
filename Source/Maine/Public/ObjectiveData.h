#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ObjectiveHUDMarkerData.h"
#include "EQuestObjectiveType.h"
#include "QuestGlobalVariableData.h"
#include "QuestConversationData.h"
#include "ObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString VerboseName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool StartsHidden;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DisplaysObjectiveMarker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoSaveOnComplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle RecipeOrItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EQuestObjectiveType ObjectiveType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MouseKeyboardControl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GamepadControl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FObjectiveHUDMarkerData HUDMarkerData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FQuestGlobalVariableData GlobalVariableData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FQuestConversationData ObjectiveStartConversation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ObjectiveStartConversationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FQuestConversationData ObjectiveCompleteConversation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ObjectiveCompleteConversationDelay;
    
    UPROPERTY(EditAnywhere)
    uint32 DisabledForPackageFlags;
    
    MAINE_API FObjectiveData();
};

