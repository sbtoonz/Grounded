#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttachmentPoint.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class MAINE_API AAttachmentPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
public:
    AAttachmentPoint();
    UFUNCTION(BlueprintCallable)
    void SetInUse(bool Value);
    
    UFUNCTION(BlueprintCallable)
    bool GetInUse();
    
    UFUNCTION(BlueprintCallable)
    UArrowComponent* GetArrow();
    
};

