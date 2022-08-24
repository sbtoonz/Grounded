#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "Storage.generated.h"

class UInventoryComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AStorage : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString CustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
public:
    AStorage();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCustomName(const FString& NewName);
    
};

