#pragma once
#include "CoreMinimal.h"
#include "EImportSaveResult.h"
#include "WindowWidget.h"
#include "ESaveLoadMenuMode.h"
#include "SaveLoadWidget.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API USaveLoadWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* ImportSaveButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadMenuMode SaveLoadMenuMode;
    
public:
    USaveLoadWidget();
    UFUNCTION(BlueprintCallable)
    void SetMenuMode(ESaveLoadMenuMode MenuMode);
    
    UFUNCTION(BlueprintCallable)
    EImportSaveResult OpenImportSaveDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuModeSet();
    
    UFUNCTION(BlueprintCallable)
    void DeauthorizeFriendFromSharedSave(const FString& SharedSaveUserID, const FString& saveId);
    
    UFUNCTION(BlueprintCallable)
    void AuthorizeFriendForSharedSave(const FString& xuid, const FString& Username, const FString& saveId);
    
};

