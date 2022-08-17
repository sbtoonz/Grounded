#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PersistentInterface.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseLODActor.generated.h"

class UBaseLODComponent;
class AProxyStandInActor;
class UTeamLODComponent;
class AActor;
class UProxyActor;
class UAttractionLODComponent;
class UHaulingLODComponent;
class ULootLODComponent;
class UColonyMemberLODComponent;
class UActorLiteData;

UCLASS(BlueprintType)
class MAINE_API UBaseLODActor : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float LastFullActorSpawnTime;
    
    /*UPROPERTY()
    AProxyStandInActor* StandInActor;*/
    
    UPROPERTY()
    AActor* FullActor;
    
    // UPROPERTY()
    // UProxyActor* ProxyActor;
    
    UPROPERTY()
    TArray<UBaseLODComponent*> LODComponents;
    
    // UPROPERTY()
    // UAttractionLODComponent* AttractionLODComponent;
    
    // UPROPERTY()
    // UTeamLODComponent* TeamLODComponent;
    
    // UPROPERTY()
    // UHaulingLODComponent* HaulingLODComponent;
    
    // UPROPERTY()
    // ULootLODComponent* LootLODComponent;
    //
    // UPROPERTY()
    // UColonyMemberLODComponent* ColonyMemberLODComponent;
    //
public:
    UBaseLODActor();
    UFUNCTION(BlueprintCallable)
    void SetLifeSpan(float InLifespan);
    
protected:
    UFUNCTION()
    void OnFullActorPostInitializeComponents(AActor* Sender);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* K2_GetFullActor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFullActorTypeSoft(TSoftClassPtr<AActor> BaseType) const;
    
    // UFUNCTION(BlueprintPure)
    // bool IsFullActorTypeLite(UActorLiteData* BaseType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFullActorType(TSubclassOf<AActor> BaseType) const;
    
protected:
    UFUNCTION()
    void HandleLifetimeExpired();
    
    UFUNCTION()
    void HandleFullActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    float GetLifeSpan() const;
    
    UFUNCTION(BlueprintPure)
    UBaseLODComponent* GetComponentByClass(TSubclassOf<UBaseLODComponent> InClass) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetActorTransform() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetActorRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorForwardVector() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<AActor> GetActorClassSoft() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetActorClassHard() const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsActorTag(FName Tag) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

