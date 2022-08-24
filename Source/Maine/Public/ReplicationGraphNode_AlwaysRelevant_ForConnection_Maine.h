#pragma once
#include "CoreMinimal.h"
#include "MaineAlwaysRelevantActorInfo.h"
#include "ReplicationGraph.h"
#include "ReplicationGraphNode_AlwaysRelevant_ForConnection_Maine.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaineAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine();
};

