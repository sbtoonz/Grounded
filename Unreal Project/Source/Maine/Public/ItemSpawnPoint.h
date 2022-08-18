#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "GameVersion.h"
#include "ItemSpawnPoint.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UObsidianIDComponent;
class UBillboardComponent;
class UItemSpawnGroupData;
class UItemSpawnData;

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

