#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicMaterialColorKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DynamicMaterialCache.generated.h"

class UMaterialInterface;
class UMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType)
class MAINE_API UDynamicMaterialCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FDynamicMaterialColorKey, UMaterialInstanceDynamic*> DynamicColorMap;
    
public:
    UDynamicMaterialCache();
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterialWithColor(UMaterialInterface* BaseMaterial, FName ParameterName, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDynamicMaterialWithColor(UMaterialInterface* BaseMaterial, FName ParameterName, FLinearColor Color, UMeshComponent* Component, int32 MaterialIndex);
    
};

