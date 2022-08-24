#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "InstancedStaticMeshFunctionLibrary.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class MAINE_API UInstancedStaticMeshFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInstancedStaticMeshFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 GetClosestInstanceInRadius(const UInstancedStaticMeshComponent* Component, FVector Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void GatherInstancesInRadius(const UInstancedStaticMeshComponent* Component, FVector Center, float Radius, TArray<int32>& OutInstances);
    
};

