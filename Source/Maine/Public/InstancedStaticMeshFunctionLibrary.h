#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InstancedStaticMeshFunctionLibrary.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(BlueprintType)
class MAINE_API UInstancedStaticMeshFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInstancedStaticMeshFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 GetClosestInstanceInRadius(const UInstancedStaticMeshComponent* Component, FVector Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void GatherInstancesInRadius(const UInstancedStaticMeshComponent* Component, FVector Center, float Radius, TArray<int32>& OutInstances);
    
};

