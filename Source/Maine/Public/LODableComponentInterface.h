#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

