#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "Storage.generated.h"

class UInventoryComponent;

UCLASS(Abstract)
class MAINE_API AStorage : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FString CustomName;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
public:
    AStorage();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCustomName(const FString& NewName);
    
};

