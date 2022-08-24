#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LODableComponentInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULODableComponentInterface : public UInterface {
    GENERATED_BODY()
};

class ILODableComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetLODComponentClass() const;
    
};

