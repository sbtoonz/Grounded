#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PersistentInterface.h"
#include "PersistentObject.generated.h"

UCLASS()
class MAINE_API UPersistentObject : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FGuid UniqueId;
    
public:
    UPersistentObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

