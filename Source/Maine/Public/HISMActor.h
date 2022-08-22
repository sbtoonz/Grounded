#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HISMActor.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class UStaticMeshComponent;

UCLASS()
class MAINE_API AHISMActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHierarchicalInstancedStaticMeshComponent* HISMC;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TArray<UHierarchicalInstancedStaticMeshComponent*> ClusterHISMs;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TArray<UStaticMeshComponent*> Outliers;
    
    AHISMActor();
};

