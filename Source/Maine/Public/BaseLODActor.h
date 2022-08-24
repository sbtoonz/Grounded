#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "PersistentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseLODActor.generated.h"

class AProxyStandInActor;
class AActor;
class UProxyActor;
class UBaseLODComponent;
class UAttractionLODComponent;
class UTeamLODComponent;
class ULootLODComponent;
class UHaulingLODComponent;
class UColonyMemberLODComponent;
class UActorLiteData;

UCLASS(Blueprintable)
class MAINE_API UBaseLODActor : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastFullActorSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProxyStandInActor* StandInActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FullActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProxyActor* ProxyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseLODComponent*> LODComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttractionLODComponent* AttractionLODComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTeamLODComponent* TeamLODComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaulingLODComponent* HaulingLODComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootLODComponent* LootLODComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UColonyMemberLODComponent* ColonyMemberLODComponent;
    
public:
    UBaseLODActor();
    UFUNCTION(BlueprintCallable)
    void SetLifeSpan(float InLifespan);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFullActorPostInitializeComponents(AActor* Sender);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* K2_GetFullActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullActorTypeSoft(TSoftClassPtr<AActor> BaseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullActorTypeLite(UActorLiteData* BaseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullActorType(TSubclassOf<AActor> BaseType) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLifetimeExpired();
    
    UFUNCTION(BlueprintCallable)
    void HandleFullActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLifeSpan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseLODComponent* GetComponentByClass(TSubclassOf<UBaseLODComponent> InClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActorTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetActorRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AActor> GetActorClassSoft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetActorClassHard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsActorTag(FName Tag) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

