#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInteractionType.h"
#include "EInteractionChannel.h"
#include "InteractableFunctionLibrary.generated.h"

class UObject;
class UItem;
class AActor;

UCLASS(BlueprintType)
class MAINE_API UInteractableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractableFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool ShowInteractionInterface(const UObject* Interactable, EInteractionChannel Channel, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    static bool ShouldShowAnyInteractionInterface(const UObject* Interactable, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    static void SendInteractError(UObject* Source, AActor* InstigatedBy, const FText& Warning);
    
    UFUNCTION(BlueprintPure)
    static bool IsAnyInteractionEnabled(const UObject* Interactable, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    static UItem* GetInteractItem(const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    static EInteractionType GetFirstEnabledPrimaryInteractionType(const UObject* Interactable, const AActor* InstigatedBy);
    
};

