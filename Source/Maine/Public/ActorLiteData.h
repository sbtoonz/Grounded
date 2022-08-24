#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "ActorLiteData.generated.h"

class UComponentLiteData;
class AActor;

UCLASS(Blueprintable, Const)
class MAINE_API UActorLiteData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> Classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LODActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialLifeSpan;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> RootComponentMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshComponentSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UComponentLiteData*> Components;
    
    UActorLiteData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UComponentLiteData* GetComponentData(TSubclassOf<UComponentLiteData> DataClass) const;
    
};

