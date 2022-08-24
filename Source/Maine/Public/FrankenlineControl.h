#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "LocString.h"
#include "FrankenlineControl.generated.h"

class AFrankenlineMaster;

UCLASS(Blueprintable)
class MAINE_API AFrankenlineControl : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFrankenlineMaster* FrankenlineMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractString;
    
public:
    AFrankenlineControl();
    
    // Fix for true pure virtual functions not being implemented
};

