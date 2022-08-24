#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ClassTreeNode.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "LODActorManagerComponent.generated.h"

class UBaseLODActor;
class AActor;
class UBaseLODComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API ULODActorManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> SupportedLODComponents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseLODActor*> LODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseLODActor*> TickingLODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseLODActor*> ParallelTickingLODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseLODActor*> PendingConvertToFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseLODActor*> LODActorsNeverProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> AllTrackedActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBaseLODActor>> AllTrackedLODActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassTreeNode TrackedActorClassTree;
    
public:
    ULODActorManagerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLODActorDestroyed(UBaseLODActor* LODActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAtLeastLODActorsOfExactlyClassSoft(TSoftClassPtr<AActor> Class, int32 Count) const;
    
    UFUNCTION(BlueprintCallable)
    FClassTreeNode GetTrackedActorClassTree();
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetLODActorsOfExactlyLODActorClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetLODActorsOfExactlyClassSoft(TSoftClassPtr<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetLODActorsOfExactlyClass(TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetLODActorsImplementingLODActorClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetLODActorsImplementingClassSoft(TSoftClassPtr<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetLODActorsImplementingClass(TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UBaseLODActor>> GetAllTrackedLODActorClasses();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<AActor>> GetAllTrackedActorClasses();
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseLODActor*> GetAllLODActors();
    
    UFUNCTION(BlueprintCallable)
    UBaseLODComponent* FindLODComponentForComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    UBaseLODActor* FindLODActorForComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    UBaseLODActor* FindLODActorForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    UBaseLODActor* FindLODActor(FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    UBaseLODActor* CreateLODActorOfType(TSoftClassPtr<AActor> ActorClass, FTransform Transform);
    
    
    // Fix for true pure virtual functions not being implemented
};

