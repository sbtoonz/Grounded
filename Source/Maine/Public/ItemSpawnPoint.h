#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameVersion.h"
#include "ItemSpawnPoint.generated.h"

class UItemSpawnData;
class USceneComponent;
class UStaticMeshComponent;
class UBillboardComponent;
class UItemSpawnGroupData;
class UObsidianIDComponent;

UCLASS()
class MAINE_API AItemSpawnPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBillboardComponent* BillboardComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemSpawnGroupData> ItemSpawnGroupData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemSpawnData> ItemSpawnData;
    
    UPROPERTY(DuplicateTransient, EditAnywhere)
    FGameVersion VersionAdded;
    
    AItemSpawnPoint();
};

