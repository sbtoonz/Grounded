#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "ClassTreeNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LODActorManagerComponent.generated.h"

class UBaseLODActor;
class AActor;
class UBaseLODComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API ULODActorManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UClass*> SupportedLODComponents;
    
protected:
    UPROPERTY(Transient)
    TArray<UBaseLODActor*> LODActors;
    
    UPROPERTY(Transient)
    TArray<UBaseLODActor*> TickingLODActors;
    
    UPROPERTY(Transient)
    TArray<UBaseLODActor*> ParallelTickingLODActors;
    
    UPROPERTY(Transient)
    TArray<UBaseLODActor*> PendingConvertToFull;
    
    UPROPERTY(Transient)
    TArray<UBaseLODActor*> LODActorsNeverProxy;
    
    UPROPERTY(Transient)
    TArray<TSoftClassPtr<AActor>> AllTrackedActorClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UBaseLODActor>> AllTrackedLODActorClasses;
    
    UPROPERTY()
    FClassTreeNode TrackedActorClassTree;
    
public:
    ULODActorManagerComponent();
protected:
    UFUNCTION()
    void OnLODActorDestroyed(UBaseLODActor* LODActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAtLeastLODActorsOfExactlyClassSoft(TSoftClassPtr<AActor> Class, int32 Count) const;
    
    UFUNCTION()
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

