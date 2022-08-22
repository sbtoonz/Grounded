#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PoweredBuildingConnection.generated.h"

class USplineMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UPoweredBuildingConnection : public UInterface {
    GENERATED_BODY()
};

class IPoweredBuildingConnection : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void SetEdgeInfo(int32 InNodeA, int32 InNodeB, int32 InNetworkIdA, int32 InNetworkIdB);
    
    UFUNCTION(BlueprintNativeEvent)
    USplineMeshComponent* GetSplineMeshComponent();
    
    UFUNCTION(BlueprintNativeEvent)
    void GetEdgeInfo(int32& OutNodeA, int32& OutNodeB, int32& OutNetworkIdA, int32& OutNetworkIdB);
    
};

