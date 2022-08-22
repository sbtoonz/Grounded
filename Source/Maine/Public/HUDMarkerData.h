#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnHUDMarkerDataChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EHUDMarkerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HUDMarkerData.generated.h"

class AActor;
class UBaseLODActor;

UCLASS(BlueprintType)
class MAINE_API UHUDMarkerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    TWeakObjectPtr<AActor> ReferenceActor;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UBaseLODActor> ReferenceLODActor;
    
    UPROPERTY(Replicated, Transient)
    FDataTableRowHandle AdditionalDataRowHandle;
    
    UPROPERTY(Replicated, Transient)
    FDataTableRowHandle QuestData;
    
    UPROPERTY(Replicated, Transient)
    FVector_NetQuantize Location;
    
    UPROPERTY(Replicated, Transient)
    EHUDMarkerType MarkerType;
    
    UPROPERTY(Replicated)
    uint8 MarkerListIndex;
    
    UPROPERTY(Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    int8 MarkerTypeVariant;
    
    UPROPERTY(Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    int8 MarkerTypeColorVariant;
    
    UPROPERTY(Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    FString DisplayName;
    
    UPROPERTY(Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    FColor Color;
    
    UPROPERTY(Replicated, Transient)
    uint8 ShowDistance: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bIsCharacter: 1;
    
    UPROPERTY(Transient)
    uint8 bShowOnlyNearby: 1;
    
    UPROPERTY(Replicated)
    float LifeTimeRemaining;
    
    UPROPERTY(BlueprintAssignable)
    FOnHUDMarkerDataChanged OnHUDMarkerDataChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnHUDMarkerDataChanged OnHUDMarkerObjectiveReferenceChanged;
    
    UHUDMarkerData();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetIconVariant(int32 Variant);
    
    UFUNCTION()
    void SetDisplayName(const FString& NewName);
    
    UFUNCTION()
    void SetColorVariant(int32 Variant);
    
    UFUNCTION()
    void SetColor(FColor NewColor);
    
private:
    UFUNCTION()
    void HandleLODActorConvertedToProxy(UBaseLODActor* Sender);
    
    UFUNCTION()
    void HandleLODActorConvertedToFull(UBaseLODActor* Sender);
    
public:
    UFUNCTION()
    void HandleHUDMarkerChanged();
    
    UFUNCTION(BlueprintPure)
    bool GetShowDistance() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldShow() const;
    
    UFUNCTION(BlueprintPure)
    UBaseLODActor* GetReferencedLODActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetReferencedActor() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetQuestData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMarkerVariant() const;
    
    UFUNCTION(BlueprintPure)
    EHUDMarkerType GetMarkerType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMarkerColorVariant() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLifeTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetColor() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetAdditionalData() const;
    
};

