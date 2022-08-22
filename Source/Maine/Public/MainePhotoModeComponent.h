#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=OnPhotoTaken__DelegateSignature -FallbackName=OnPhotoTakenDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeComponent -FallbackName=PhotoModeComponent
#include "EquipmentSlotHiddenPrePhotoModeData.h"
#include "MainePhotoModeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMainePhotoModeComponent : public UPhotoModeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient)
    bool PlayerIsInteractHolding;
    
    UPROPERTY(BlueprintAssignable)
    FOnPhotoTaken OnPhotoTaken;
    
protected:
    UPROPERTY(Transient)
    TArray<FEquipmentSlotHiddenPrePhotoModeData> PrePhotoModeHiddenEquipment;
    
public:
    UMainePhotoModeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UIEnterPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerUsingChatBox(bool InUsingChat);
    
    UFUNCTION(Reliable, Server)
    void ServerUIEnterPhotoMode();
    
    UFUNCTION(Reliable, Server)
    void ServerNotifyPhotoTaken();
    
    UFUNCTION(Client, Reliable)
    void ClientUIEnterPhotoMode();
    
    UFUNCTION(Client, Reliable)
    void ClientOnPlayerInMenuChanged(bool InPlayerInMenu);
    
    UFUNCTION(Client, Reliable)
    void ClientAddNotificationMessage(const FString& Message);
    
};

