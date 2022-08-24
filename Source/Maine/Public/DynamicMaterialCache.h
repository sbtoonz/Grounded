#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DynamicMaterialColorKey.h"
#include "DynamicMaterialCache.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(Blueprintable)
class MAINE_API UDynamicMaterialCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FDynamicMaterialColorKey, UMaterialInstanceDynamic*> DynamicColorMap;
    
public:
    UDynamicMaterialCache();
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterialWithColor(UMaterialInterface* BaseMaterial, FName ParameterName, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDynamicMaterialWithColor(UMaterialInterface* BaseMaterial, FName ParameterName, FLinearColor Color, UMeshComponent* Component, int32 MaterialIndex);
    
};

