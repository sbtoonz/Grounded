#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "FrankenlineControl.generated.h"

class AFrankenlineMaster;

UCLASS()
class MAINE_API AFrankenlineControl : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AFrankenlineMaster* FrankenlineMaster;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString InteractString;
    
public:
    AFrankenlineControl();
    
    // Fix for true pure virtual functions not being implemented
};

