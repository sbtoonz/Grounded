#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/NetSerialization.h"
#include "Engine/DataTable.h"
#include "OnHUDMarkerDataChangedDelegate.h"
#include "EHUDMarkerType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HUDMarkerData.generated.h"

class UBaseLODActor;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UHUDMarkerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    TWeakObjectPtr<AActor> ReferenceActor;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UBaseLODActor> ReferenceLODActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AdditionalDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle QuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EHUDMarkerType MarkerType;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 MarkerListIndex;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    int8 MarkerTypeVariant;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=HandleHUDMarkerChanged)
    int8 MarkerTypeColorVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleHUDMarkerChanged, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleHUDMarkerChanged, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 ShowDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCharacter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShowOnlyNearby: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LifeTimeRemaining;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDMarkerDataChanged OnHUDMarkerDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDMarkerDataChanged OnHUDMarkerObjectiveReferenceChanged;
    
    UHUDMarkerData();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIconVariant(int32 Variant);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetColorVariant(int32 Variant);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FColor NewColor);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLODActorConvertedToProxy(UBaseLODActor* Sender);
    
    UFUNCTION(BlueprintCallable)
    void HandleLODActorConvertedToFull(UBaseLODActor* Sender);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleHUDMarkerChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseLODActor* GetReferencedLODActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetReferencedActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetQuestData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarkerVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHUDMarkerType GetMarkerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarkerColorVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLifeTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetAdditionalData() const;
    
};

