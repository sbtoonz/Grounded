#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AttachmentPoint.generated.h"

class UArrowComponent;

UCLASS()
class MAINE_API AAttachmentPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsInUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UArrowComponent* Arrow;
    
public:
    AAttachmentPoint();
    UFUNCTION()
    void SetInUse(bool Value);
    
    UFUNCTION()
    bool GetInUse();
    
    UFUNCTION()
    UArrowComponent* GetArrow();
    
};

