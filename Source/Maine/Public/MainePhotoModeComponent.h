#pragma once
#include "CoreMinimal.h"
#include "PhotoModeComponent.h"
#include "OnPhotoTakenDelegate.h"
#include "EquipmentSlotHiddenPrePhotoModeData.h"
#include "MainePhotoModeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMainePhotoModeComponent : public UPhotoModeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool PlayerIsInteractHolding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoTaken OnPhotoTaken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentSlotHiddenPrePhotoModeData> PrePhotoModeHiddenEquipment;
    
public:
    UMainePhotoModeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UIEnterPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerUsingChatBox(bool InUsingChat);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUIEnterPhotoMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyPhotoTaken();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUIEnterPhotoMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPlayerInMenuChanged(bool InPlayerInMenu);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddNotificationMessage(const FString& Message);
    
};

