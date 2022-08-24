#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameVersion.h"
#include "GameFramework/Actor.h"
#include "ItemSpawnPoint.generated.h"

class UItemSpawnGroupData;
class UObsidianIDComponent;
class USceneComponent;
class UBillboardComponent;
class UStaticMeshComponent;
class UItemSpawnData;

UCLASS(Blueprintable)
class MAINE_API AItemSpawnPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemSpawnGroupData> ItemSpawnGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemSpawnData> ItemSpawnData;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameVersion VersionAdded;
    
    AItemSpawnPoint();
};

