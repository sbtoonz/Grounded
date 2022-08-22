#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraph -FallbackName=ReplicationGraph
#include "MaineReplicationGraph.generated.h"

class AActor;
class UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine;
class UReplicationGraphNode_GridSpatialization2D;
class UReplicationGraphNode_ActorList;
class UNetConnection;

UCLASS(NonTransient)
class UMaineReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY()
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY()
    TMap<UNetConnection*, UReplicationGraphNode_AlwaysRelevant_ForConnection_Maine*> AlwaysRelevantForConnectionNodes;
    
    UPROPERTY()
    TArray<AActor*> ActorsWithoutNetConnection;
    
public:
    UMaineReplicationGraph();
};

