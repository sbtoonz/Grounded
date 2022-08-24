#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "MaineReplicationGraph.generated.h"

class UReplicationGraphNode_GridSpatialization2D;
class UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine;
class UReplicationGraphNode_ActorList;
class UNetConnection;
class AActor;

UCLASS(Blueprintable, NonTransient)
class UMaineReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UNetConnection*, UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine*> AlwaysRelevantForConnectionNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsWithoutNetConnection;
    
public:
    UMaineReplicationGraph();
};

