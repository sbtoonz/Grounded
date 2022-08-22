#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode_ActorList -FallbackName=ReplicationGraphNode_ActorList
#include "MaineAlwaysRelevantActorInfo.h"
#include "ReplicationGraphNode_AlwaysRelevant_ForConnection_Maine.generated.h"

UCLASS(NonTransient)
class MAINE_API UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMaineAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine();
};

