#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ObjectiveData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "QuestGlobalVariableData.h"
#include "QuestConversationData.h"
#include "QuestData.generated.h"

USTRUCT(BlueprintType)
struct FQuestData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString Description;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FObjectiveData> Objectives;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FQuestGlobalVariableData GlobalVariableData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FQuestConversationData QuestStartConversation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QuestStartConversationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FQuestConversationData QuestCompleteConversation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QuestCompleteConversationDelay;
    
    UPROPERTY(EditAnywhere)
    uint32 DisabledForPackageFlags;
    
    UPROPERTY(EditDefaultsOnly)
    bool OnlyValidInDevelopmentContent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsLocalClientQuest;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool StartsAsStickied;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Tutorial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsCritPathQuest;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoSaveOnComplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsCut;
    
    MAINE_API FQuestData();
};

