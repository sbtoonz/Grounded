#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "CombinedMeshAssetUserData.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew)
class MAINE_API UCombinedMeshAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* CombinedMesh;
    
    UCombinedMeshAssetUserData();
};

