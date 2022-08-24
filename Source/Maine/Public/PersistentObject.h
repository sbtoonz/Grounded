#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PersistentInterface.h"
#include "UObject/NoExportTypes.h"
#include "PersistentObject.generated.h"

UCLASS(Blueprintable)
class MAINE_API UPersistentObject : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid UniqueId;
    
public:
    UPersistentObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

