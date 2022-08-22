#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "ActorLiteData.generated.h"

class UComponentLiteData;
class AActor;

UCLASS(BlueprintType, Const)
class MAINE_API UActorLiteData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<TSoftClassPtr<AActor>> Classes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UClass* LODActorClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float InitialLifeSpan;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<EComponentMobility::Type> RootComponentMobility;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bMeshComponentSimulatePhysics;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TArray<UComponentLiteData*> Components;
    
    UActorLiteData();
    UFUNCTION(BlueprintPure)
    UComponentLiteData* GetComponentData(TSubclassOf<UComponentLiteData> DataClass) const;
    
};

