#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ECollisionMaskCategory.h"
#include "MaskableBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaskableBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionMaskCategory MaskCategory;
    
    UMaskableBoxComponent();
};

