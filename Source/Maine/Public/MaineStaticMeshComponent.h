#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MaineStaticMeshComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaineStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SeparatedMesh;
    
public:
    UMaineStaticMeshComponent();
};

